---
layout: post
title:  "Data Modeling"
date:   2025-03-16 15:48 +1100
categories: data
---

# Data Modeling
[Microsoft's Power Platform defines ](https://www.microsoft.com/en-au/power-platform/products/power-bi/topics/data-modeling/what-is-data-modeling) data modeling as the process of analyzing and defining all the different data types your business collects and produces, as well as the relationships between those bits of data. By using text, symbols, and diagrams, data modeling concepts create visual representations of data as it’s captured, stored, and used at your business. As your business determines how data is used and when, the data modeling process becomes an exercise in understanding and clarifying your data requirements.

Types of data models:
Data modeling starts with conceptual model, progresses to a logical model and concludes with a physical model.

## Conceptual data models:
- offer a big picture of what the system will contain, what business rules are involved
- usually collected as part of the process of gathering initial project requirements
- includes entity classes (things that are clearly important for the business)
- characteristics, constraints and relationship, security and integrity requirements
- Uses simple notation

## Logical data models:
- builds up on the conceptual data model and provides greater detail
- modeling notations are usually strictly followed (e.g. attributes, data types, lengths)
- relationships are clearly shown
- Logical models don't yet specifiy technical system requirements
- usually omitted in agile practices but useful in data-oriented / data-infrastructure projects

## Physical data models:
- pretty much the schema of the database that are ready for implementation
- includes DBMS-specific properties and performance tuning

### Data Modeling Process
- Identify the entities
- Identify key properties of each entity
- Identify relationships among entities
- Map attributes to entities completely
- Assign keys, degree of normalization (balance performance & redundancy)
- Validate

Types of data modeling:
- Hierarchical 
- Entity-relationship (ER)
- Relational
- Object oriented data models
- Dimensional data models

Relational and E-R models are more similar than they are different. The Entity-Relationship (ER) model is a high-level conceptual framework used for designing databases, representing data as entities, attributes, and relationships in diagrams. It helps in planning database structure but does not define how data is stored. In contrast, the Relational Data Model is a logical structure that organizes data into tables (relations) with rows and columns, enforcing constraints like primary keys and foreign keys for data integrity. While the ER model is used for visualization and design, the relational model is used for actual data storage and retrieval in relational databases using SQL.

Dimensional data models were developed by Ralph Kimball, and they were designed to optimize data retrieval speeds for analytic purposes in a data warehouse. While relational and ER models emphasize efficient storage, dimensional models increase redundancy in order to make it easier to locate information for reporting and retrieval. This modeling is typically used across OLAP systems.

Two popular dimensional data models are the star schema, in which data is organized into facts (measurable items) and dimensions (reference information), where each fact is surrounded by its associated dimensions in a star-like pattern. The other is the snowflake schema, which resembles the star schema but includes additional layers of associated dimensions, making the branching pattern more complex.




# References: {#references}
* [Learn SQL Beginner to Advanced in Under 4 Hours - Alex The Analyst](https://www.youtube.com/watch?v=OT1RErkfLNQ)
* [IBM Data Modeling Blog](https://www.ibm.com/think/topics/data-modeling)


----------
Last Updated: Sunday, 16 March, 2025 16:40 AEDT  
Author: Madhav Om
