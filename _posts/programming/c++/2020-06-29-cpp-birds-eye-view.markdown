---
layout: post
title:  "Birds Eye View of C++"
date:   2020-06-29 20:49:07 +0545
categories: c++
---

> Detailed understanding of language features - even of all features of a language - cannot compensate for lack of an overall view of the language and the fundamental techniques for using it.

The above line doesn't just tell us what programming is language isn't just about, but also it alarmed me about how I might have been missing the overall perspective while searching its technical details.

The ISO C++ standard defines two kinds of entities:
* *Core language features*, such as built in types and loops
* *Standard-library components*, such as containers and I/O operations.

C++ is a statically typed language meaning that the type of every entity (eg. object, value, name, and expression) must be known to the compiler at its point of use. When defining a variable, you don’t actually need to state its type  explicitly when it can be deduced from the initializer.

{% highlight c++ %}
auto b = true;
auto ch = 'x';
auto i = 123;
auto d = 1.2;
auto z = sqrt(y);
{% endhighlight %}

We use auto except in situations we have explicit reasons not to. The reason may be for auto typecasting (say, for precision) or it maybe to explicitly the reader know. Using auto , we avoid redundancy and writing long type names. This is especially important in generic programming where the exact type of an object can be hard for the programmer to know and the type names can be quite long.

C++ was designed to support data abstraction, object-oriented programming (OOP), and generic programming in addition to traditional C programming techniques. Over the years, the emphasis in the design of programs has shifted from the design of procedures and toward the organization of data using a set of related procedures with the data they manipulate. The theme of the procedural programming paradigm can be summarized as *"Decide which procedures you want; use the best algorithms you can find"*. And the theme for modular paradigm can be summarized as *"Decide which modules you want; partition the program so that data is hidden within module."*  C++ supports C's notion of separate compilation which can be used to organize program into set of semi-independent fragments. Typically we place the declarations that specify the interface to a module in a separate file (typically a header file), and the file fille providing the implementation will *include* the interface. Main program typically goes in a third file that includes the declarations of the interface.

User-defined types paradigm is themed on *"Decide which types you want; provide a full set of operations for each type"*. The C++ `class` is the excellent example. User-defined types can be designed to meet a wide variety of needs.




# References:
* The C++ Programming Language, Bjarne Stroustrup (4th Edition)

#### PS:
* Parts of the article is inspired from the references and is presented as is and with some modification. No infringement of copyright is intended.

* So, you're interested in C++? If you wanted to be hired as a C++ developer, you might want to give a look at the [hiring guides](https://www.toptal.com/c-plus-plus#hiring-guide){:target="_blank"}. They emailed me about it and I personally liked it.

----------
Last Updated: Sunday, 6 September, 2020 15:48:21 NPT  
Author: Madhav Humagain (scimad)
