---
layout: post
title:  "Types and Casting in C++"
date:   2019-08-12 00:13:31 +0545
categories: c++
---
The fundamental types in C++ are there to support storage of different commonly used forms of data in general programming such as boolean, characters, integers, floating-point values. Correspoinding to those, there are the following data types in C++: `bool`, `char`, `wchar_t`, `short`, `int`, `long`, `float`, `double`, `long double`. There is also something of type `void` that we will talk about later.

One interesting point to note is the `int` (integer) type adapts to specific processor, specifically to the length of the register on the computer. For 16-bit computers, int is thus equivalent to `short`, wherereas for 32-bit computers `int` will be equivalent to `long`. Correspondingly, `sizeof(int)` represnts 2 or 4 depending on the machine, whereas `sizeof(float)` will always equal to 4.

The fundamental tpes in C++ are `integer` types, `floating-point` types, and the `void` type. Arithmetic operators are defined for integers and floating-point numbers which are collectively eferred to as `arithmetic types`. 

Constants in C++ can be divided into `boolean constants`, `numerical constants`, `character constants` and `string constants`. The type is defined by the way the constant is written. Integral constants are normally of type `int`. We can designate the type of constant by adding the letter `L` or `l` (for `long`), or `U` or `u` (for `unsigned`) (Eg. `12L` or `12u` or `12UL`). Floating-point constants are represented as decimals but exponential notations is also permissible. Floating-point constants are of type `double` by default. However we can add `F` or `f` for float, or add `L` or `l` for `long double` type designation.

It is worth noting that the `const` keyworkd is used to create a "read only" object. The `volatile` keyword, which is rarely used, creates variables that can be modified not only by the program but also by other programs and external events. It is also possible to combine these two keywords to create something like `volatile const unsigned tick_count;` which doesn't allow the program to modify the constant but allows external events to modify it.

## Symbolic Constants and Macros
A #define preprocessor directive can be used to define a substitute piece of text wherever it appears in source files. There are two forms of #define. The first defines a simple text substitution and the second is a more complex 'macro' substitution. All macros and symbolic constants are conventionally given capitalized names separated by underscore if containing multiple word. This also helps to separate macro calls from function calls.

### Symbolic Constants
`#define PI 3.14`


### Macros
`#define MAX(a,b) ((a)>(b) ? (a) : (b))`

It is obvious from the later definition how it can be used in similar fashion to a function.

It is also important here to note that the use of macro can get tricky sometimes as it doesn't replace the value of a function by executing but replaces the macro usage with a a bunch of code, which sometimes might create a problematic situation like below.

`a = MAX(MAX(2,3), 4)`



----------
Last Updated: Saturday, Mar 7 2020 20:40:04 NPT  
Author: Madhav Humagain (scimad)
