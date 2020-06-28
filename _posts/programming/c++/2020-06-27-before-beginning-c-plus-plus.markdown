---
layout: post
title:  "Before Beginning C++"
date:   2020-06-27 22:21:25 +0545
categories: c++
---

The following is from the creator of C++ (*Bjarne Stoustrup*) in his book "The C++ Programming language":
> The most important thing to do when learning C++ is to focus on concepts and not get lost in language-technical details. The purpose of learning a programming language is to become a better programmer; that is, to become more effective at designing and implementing new systems and at maintaining old ones. For this, an appreciation of programming and design techniques is far more important than understanding of details; that understanding comes with time and practice.

Sometimes, I feel I might have been little too much obsessive about the C++ programming language's technical detail in itself. There's a minimum technical that I want to know about the C++ language and I have not yet felt that I have learned that, despite my occasional efforts. Again quoting Stroustrup, 
>A programming language serves two related purposes: it provides a vehicle for the programmer to specify actions to be executed, and it provides a set of concepts for the programmer to use when thinking about what can be done.

Yes, this is exactly why I want to learn C++. I want to know how to think, or what tools / concepts to use to solve a problem and how it is related with things being done inside the machine. That I believe is basic C++ literacy.

# The Design of C++
Following points may be noteworthy regarding C++.

* While creating C++, great importance was given to retaining a high degree of compatibility with C.
* C++ has no built-in data-types and no high-level primitive operations.
* C is chosen as the base language for C++[1.6, The C++ Programming Language] and C++ retails C as a subset. [1.3.1, The C++ Programming Language]
* C++ can use call and return sequences of function as same as C or more efficient ones. When even such are too expensive, a C++ function can be substituted inline leading to minimizing runtime overhead.
* The C language was primarily designed with the idea that all important aspects of a machine are handled simply and efficiently in a way that is reasonably obvious to the programmer. The facilities added to C to create C++ were primarily designed in a way it provides a set of concepts for the programmer to use when thinking about what can be done and to remain close to the problem to be solved.

# While Writing **C++** Programs, Remember:
* Macros are almost never necessary.
* Declare variable just when you need it.
* Try to avoid void*, pointer arithmetic, unions and casts, except deep within the implementation of some function or class.
* Minimize use of arrays and C-style strings.
* Design classes so that each class cleanly represents a single concept; Ask following questions to which if you don't get clear answers, the concept wasn't probably "clean" in the first place:
    * How are objects of this class created?
    * Can objects of this class be copied and / or destroyed?
    * What operations can be applied to such objects?
* Hang in enough with the problem and its proposed solution before starting to code or think in terms of code
* Make sure you are organizing the relationship between classes in a program.
* Organize related concepts into tree structure (directed acyclic graphs) (of base and derived class). Often, virtual functions can be used to defined operations for the most general version of such a concept (i.e. in a base class) and when necessary, the operations can be reinterpreted from the redefined functions in special cases (i.e. in derived classes).
* Sometimes even a directed acyclic graph seems insufficient for organizing the concepts of a program and the concept may seem to be inherently mutually dependent. (I think I suffered similar situation while developing that Buddhichal - chess game.) Such mutual dependencies myst be eliminated or localized (to single class?). Clean separation of interface and implementation be best tool for untangling dependency graphs. (How?)
* Use templates to express commonality. If a class is a container of objects, make it a template. If a function implements an algorithm for a container, make it a template function implementing the algorithm for a family of containers.

----------
Last Updated: Saturday, 27 June, 2020 23:54:27 NPT  
Author: Madhav Humagain (scimad)
