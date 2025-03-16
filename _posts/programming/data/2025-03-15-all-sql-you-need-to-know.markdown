---
layout: post
title:  "SQL"
date:   2025-03-16 11:41 +1100
categories: data
---

# Quick SQL Guide

### A. Notes from Alex The Analyst Video
[This reference](#references) covers the following topics and I am taking notes of the non trivial syntaxes and concepts:

Basic:
- Intro
- Installing MySQL and Setting up Database
- Select Statement
- Where Clause
- Group By
- Having vs Where
- Limit and Aliasing

Intermediate:
- Joins
- Unions
- String Functions
- Case Statements
- Subqueries
- Window Functions

Advanced:
- CTEs
- Temp Tables
- Stored Procedures
- Triggers and Events
- Data Cleaning Project
- Exploratory Data Analysis Project

### 1. Conditional in SQL: the `CASE` statement
Value of each row on a column is based on a condition. (Just like assigning a variable using if condition.)
{%highlight sql %}
SELECT
column1, column2,
CASE
    WHEN column1 <some condition> THEN
    WHEN age <some other condition> THEN
    ELSE <something> -- gives null for if default case/else is not present
END as new_column
FROM some_table;
{%endhighlight%}

### 2. Aggregation - `GROUP BY`
{%highlight sql %}
SELECT column1, column2, sum(column3)
FROM table
GROUP BY column1, column2
HAVING sum(column3) > somethinng;
{%endhighlight%}

### 3. Subqueries
Subqueries can be done in different ways:

#### 3.1 Subquery in WHERE
{%highlight sql %}
SELECT
column1, column2
FROM some_table
WHERE
some_column IN (
    select any_column from any_table
);
{%endhighlight%}

#### 3.2 Subquery with SELECT
{%highlight sql %}
SELECT
column1, column2,
(select something from any_table) -- must produce same number of columns
FROM some_table;
{%endhighlight%}

#### 3.3 Subquery with FROM statement
I think this is more common usage pattern. Get a result and then create a table out of it.
{%highlight sql %}
SELECT intermediate_table.any_column 
FROM (
    select --usually some intermediate operations are performed here
    any_column, another_column 
    from any_table 
) as intermediate_table;
{%endhighlight%}
This can also be done in better way using `CTEs` and temp tables.

#### 4. Window Functions

{%highlight sql%}
SELECT column1, column2, 
       aggregate_function(column3) OVER (PARTITION BY column1 ORDER BY column2)
FROM table_name;
{%endhighlight%}

- Rolling sum using window function
{%highlight sql%}
SELECT i, SUM(i)
OVER(ORDER BY i) AS j FROM
generate_series(1,10) AS i;
{%endhighlight%}

| i  | j  |
|----|----|
| 1  | 1  |
| 2  | 3  |
| 3  | 6  |
| 4  | 10 |
| 5  | 15 |
| 6  | 21 |
| 7  | 28 |
| 8  | 36 |
| 9  | 45 |
| 10 | 55 |


Interestingly, removing the `ORDER BY` won't generate the same result:

{%highlight sql%}
SELECT i, SUM(i)
OVER() AS j FROM
generate_series(1,10) AS i;
{%endhighlight%}

| i  | j  |
|----|----|
| 1  | 55 |
| 2  | 55 |
| 3  | 55 |
| 4  | 55 |
| 5  | 55 |
| 6  | 55 |
| 7  | 55 |
| 8  | 55 |
| 9  | 55 |
| 10 | 55 |

Now lets try to find rolling sum of odds and evens:
{%highlight sql%}
SELECT i,
CASE 
    WHEN i % 2 = 1 THEN 'odd'
    ELSE 'even'
END AS odd_even,
SUM(i) OVER (
    PARTITION BY 
    (CASE WHEN i % 2 = 1 THEN 'odd' ELSE 'even' END)
    ORDER BY i
) AS rolling_sum
FROM generate_series(1,10) AS i;
{%endhighlight%}
![Rolling Sum](/assets/imgs/sql/rolling-odd-even.png)

- GROUP BY collapses rows → returns one row per group.
- Window Functions keep all rows → each row gets its own calculation.
- `ROW_NUMBER`, `RANK`, `DENSE_RANK` are commonly used as window functions apart from other aggregation functions

#### 5. CTEs
- Improves readability
- You can do more than one intermediate tables on CTE

Example:
{%highlight sql%}
WITH cte_table(AVG_COL2) AS (
    SELECT column1, avg(column2) AS avg_column2 
    FROM some_table
    GROUP BY column1
)
SELECT avg(avg_column2) 
FROM cte_table;
{%endhighlight%}

Note that CTE results are still not reusable in a different query.

#### 6. Temp Tables
- Storing intermediate results
- Just use `TEMPORARY` keyword to create the table. the `CREATE TEMPORARY TABLE`
- Reuse the table (within the same session) as many times as you want

### B. From (*NEON | PostgreSQL Tutorial*)[#neon-postgresql]
#### 1. `CREATE FUNCTION` statement
- To create user definted function
Syntax:
{%highlight sql%}
CREATE [or REPLACE] FUNCTION function_name(param_list)
    RETURNS return_type
    LANGUAGE plpgsql
    AS
$$
DECLARE
    -- variable declaration
BEGIN
    --logic
END;
$$
{%endhighlight%}

Example:
{%highlight sql%}

SELECT i,
       CASE 
           WHEN i % 2 = 1 THEN 'odd'
           ELSE 'even'
       END AS odd_even,
       SUM(i) 
       OVER (
       		PARTITION BY 
       		(CASE WHEN i % 2 = 1 THEN 'odd' ELSE 'even' END)
       		ORDER BY i
       		) AS rolling_sum
FROM generate_series(1,10) AS i order by i;
{%endhighlight%}

{%highlight sql%}
create function odd_even(n bigint)
	returns text
	language plpgsql
	as
$$
declare
	result text;
begin
	if n % 2 = 0 then
		result := 'even';
	else
		result := 'odd';
	end if;
	return result;
end;
$$;

SELECT i,
       odd_even(i),
       SUM(i)
       OVER (
       		PARTITION BY 
       		odd_even(i)
       		ORDER BY i
       		) AS rolling_sum
FROM generate_series(1,10) AS i order by i;

{%endhighlight%}

The variables in the param list can be `IN` mode (default), `OUT` mode or `INOUT' mode and respectively used to pass a value to function, return a value from a function or pass a value to a function and return an updated value.

Following example creates a function to generate random numbers between 0 and 100 and finds the min, max and avg of it.

{%highlight sql%}

CREATE OR REPLACE FUNCTION find_distribution(
    sample_size int,
    OUT max_val int,
    OUT min_val int,
    OUT avg_val int
)
LANGUAGE plpgsql
AS $$
BEGIN
    SELECT
        max(rand_n), min(rand_n), avg(rand_n)
    INTO max_val, min_val, avg_val
    FROM (
        SELECT (random() * 100)::INT AS rand_n
        FROM generate_series(1, sample_size)
    ) AS generated_numbers;
END;
$$;

SELECT * from find_distribution(100);

{%endhighlight%}

#### 2. `CREATE PROCEDURE` statement
You need them because functions can't execute (start, commit or rollback) a transaction. Copying an example straight out of [their tutorial](https://neon.tech/postgresql/postgresql-plpgsql/postgresql-create-procedure):

{%highlight sql%}
create or replace procedure transfer(
   sender int,
   receiver int,
   amount dec
)
language plpgsql
as $$
begin
    -- subtracting the amount from the sender's account
    update accounts
    set balance = balance - amount
    where id = sender;

    -- adding the amount to the receiver's account
    update accounts
    set balance = balance + amount
    where id = receiver;

    commit;
end;$$;
{%endhighlight%}

# References: {#references}
* [Learn SQL Beginner to Advanced in Under 4 Hours - Alex The Analyst](https://www.youtube.com/watch?v=OT1RErkfLNQ)
* [Neon PostgreSQL Tutorial](https://neon.tech/postgresql/tutorial)


----------
Last Updated: Sunday, 16 March, 2025 14:25 AEDT  
Author: Madhav Om
