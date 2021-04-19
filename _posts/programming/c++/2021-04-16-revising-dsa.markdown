---
layout: post
title:  "Revising Data Structures and Algorithms"
date:   2021-04-16 17:58:00 +0545
categories: c++
---

Off topic, quite often I am trapped in a vicious cycle of learning.

I start with a topic that I want to study, say DSA for now. I then think that studying without coding isn't really worthwhile. So, I start coding it. In the meantime, I want to improve my coding skills, that in C++. My focus now shifts from improving my DSA knowledge and skills to C++. It is still okay to this point. Now when I actually start doing DSA with implementation on C++, I really wany to do it in VIM. Yes, VIM. Now, my original focus on DSA is totally branched out into various things. And again in VIM, I want to do it smart. I want to learn more about plugins. And what not!

And of course, I end up doing nothing.

This has been my recent pattern, be it on DSA, Mathematics, Physics or English. 

Lets hope that won't be the case now. Will try to focus on one at a time.

---

### Data Structures:
#### Linked List
Representation:
- can be represented by two cells
- first cell contains pointers to a list element
- second cell contains pointer to either an empty list or another two cell
- Abstract Data Type "List"
    - can be constructed by two cosntructors, `EmptyList` and `MakeList(element, list)`
    - above constructors correspond to *base case* and *induction step*
    - *Selectors*: `first(list)` and `rest(list)`
    - *Condition*: `isEmpty(list)`
    - *Mutators*: `replaceFirst(x,l)`, `replaceRest(r,l)`

#### Stacks
On an abstract level, equivalent to linked list. These are ideal data structure to model a FILO or LIFO strategy.

Representation:

- can be represented by two cells
- first cell contains pointers to an element
- second cell contains pointer to either an empty stack or another two cell
- one has to be careful about the order of the items
- Abstract Data Type "Stack"
    - can be constructed by two cosntructors, `EmptyStack` and `push(element, stack)`
    - above constructors correspond to *base case* and *induction step*
    - *Selectors*: `top(stack)` gives top most element and `pop(stack)` gives back stack without top most element
    - *Condition*: `isEmpty(stack)`

#### Queues
A data structure used to model a FIFO strategy.

Representation:
- can be represented by two cells similar to list or stack but with an additional two cell in which the first element points to the front of the list of all the elements in the queue and the second elelemnt points to the last element of the list
- first cell contains pointers to an element
- second cell contains pointer to either an empty queue or another two cell
- Abstract Data Type "Queue"
    - can be constructed by two cosntructors, `EmptyQueue` and `push(element, queue)`
    - above constructors correspond to *base case* and *induction step*
    - *Selectors*: `top(queue)` gives top most element and `pop(queue)` gives back stack without top most element
    - *Condition*: `isEmpty(queue)`

#### Doubly Linked List
#### Circularly Linked List

### Advantages of Abstract Data Types
Aho, Hopcroft and Ullman (1983) say: 
> At first, it may seem tedious writing procedures to govern all accesses to the underlying structures. However, if we discipline ourselves to writing programs in terms of the operations for manipulating abstract data types rather than making use of particular implementations details, then we can modify programs more readily by reimplementing the operations rather than searching all programs for places where we have made accesses to the underlying data structures. This flexibility can be particularly important in large software efforts, and the reader should
not judge the concept by the necessarily tiny examples found in this book.

# References:
* Lecture Notes for Data Structures and Algorithms (Version of 27 March 2019, revised each year by John Bullinaria)

#### PS:
* Parts of the article is inspired from the references and is presented as is and with some modification. No infringement of copyright is intended.

----------
Last Updated: Monday, 19 April, 2021 10:10:49 NPT  
Author: Madhav Humagain (scimad)