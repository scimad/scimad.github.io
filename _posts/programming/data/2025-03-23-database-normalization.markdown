---
layout: post
title:  "Database Normalization"
date:   2025-03-16 11:41 +1100
categories: data
---

Normalized tables are:
- Easier to understand
- Easier to ehnahce and extend
- Protected from anomalies (insertion, update, delete)

First Normal Form (1NF):
- Using row order to convey information is not permitted
- Mising data types within the same column is not permitted.
- Having a table without a primary key is not permitted
- Repeating groups are not permitted

Second Normal Form:
- (Informally) Each non-key attribute must depend on the entire primary key.
- So in order to have 2NF, we remove "Partial Dependency".

Third Normal Form:
- This form forbids the dependency of a non-key attribute to another non-key attribute.
- Every (non-key) attribute in a table should depend on the key, the whole key, and nothing but the key.
- In order to have 3NF, we remove "Transitive Dependency".
- Boyce-Codd Normal Form: Every attribute in a table should depend on the key, the whole key, and nothing but the key.

Fourth Form:
- In order to have 3NF, we remove "Multi-Valued Dependency"
- Multi-Valuded Dependency
    - A->>B is Multi-Valuded Dependency for a single value in A, more than one value of B exists in table.

# References: {#references}
* [Learn Database Normalization - 1NF, 2NF, 3NF, 4NF, 5NF](https://www.youtube.com/watch?v=GFQaEYEc8_8)
* [4th Normal Form (4NF) | Multi-Valued Dependency | Database Normalization
](https://www.youtube.com/watch?v=OTCuykFHBeA)

----------
Last Updated: Sunday, 16 March, 2025 14:25 AEDT  
Author: Madhav Om
