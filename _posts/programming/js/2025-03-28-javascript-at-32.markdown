---
layout: post
title:  "Javascript when 32"
date:   2025-03-28 09:34:00 +1100
categories: js
---

Sure, looking back again at Javascript when 32 comes with some deep existential questions, career questions and what not! Well, "Take as much retries as you need to". Here's some Javascript for ya (taken straight from the refrences mentioned):

- Surprisingly, JS is a single-threaded language. One can debate about what it means, but that's what MDN say.

## The Nullish coalescing operator `??`
Quite simply, `a ?? b` is:
* if `a` is defined, then `a`
* if `a` isn't defined, then `b`

{% highlight javascript %}
result = (a !== null && a !== undefined) ? a : b;
{% endhighlight %}

The `||` operator is something similar but:
* `||` returns the first truthy value.
* `??` returns the first defined value.

## Functions

Function declaration looks like this:
{% highlight javascript %}
function sayHi(){
    alert( 'Hello everyone!' );
}
{%endhighlight%}

Function Expression:
{%highlight javascript%}

let sayHi = function(){
    alert ( "Hello" );
}; // see the semicolon in this way of declaring function!
{% endhighlight %}

Notes: 
A Function Expression is created when the execution reaches it and is usable only from that moment.

A Function Declaration can be called earlier than it is defined.

In strict mode (`use strict;`), when a Function Declaration is within a code block, it’s visible everywhere inside that block. But not outside of it.

Passing function as a value:
{%highlight javascript%}
function ask(question, yes, no) {
  if (confirm(question)) yes()
  else no();
}

function showOk() {
  alert( "You agreed." );
}

function showCancel() {
  alert( "You canceled the execution." );
}

// usage: functions showOk, showCancel are passed as arguments to ask
ask("Do you agree?", showOk, showCancel);
{%endhighlight%}

## Here come's the hero: Arrow Notation

{% highlight javascript %}
// Function declaration
function sayHiDeclaration(){
    alert( 'Hello everyone!' );
}

let sayHiExpression = function(){
    alert ( "Hello" );
};


let sayHiArrow = () => {
    alert ( "Hello" );
};

let sumArrowFunc = (a, b) => a + b;

let squareFunc = n => n * n; // Parentheses can be omitted if single arg.
{% endhighlight %}

So, the part within `() => {};` is the whole funciton definition but it also can be a single line expression as shown above.
Keep in mind that arrow functions are function expressions and can't be declared prior to the code block running.
Arrow notations are especially useful when you don't need to use the `this` keyword. (See stackoverflow question from reference.)

Also see that the following is not valid declaration.
{%highlight javascript%}
// ❌ This is invalid
arrowFunction() => { 
  console.log("Hello");
};
{%endhighlight%}

## Testing [WIP Code](https://github.com/scimad/learning-node/tree/master/2025/automated-tests) and [Docs](https://javascript.info/testing-mocha)

### Object Referencing
- When copying (assigning) a variable to another one, javascript copies the actual content for primitive types but for Objects, javascript copies the reference of the Object.
- As such, the `==` operator which compares (with type coercion) two variables are only equal only if they point to the same object (think of it as if the variable that stores the object is only storing the object's address in memory.)
- Like in C++, const objects are only const references. The references can't be changed but the actual content of the object can  be.
- copying object (contents of objects) can be done by using `Object.assign(dest, ...sources)` (shallow copy) and we can `structuredClone()` for deep-clone.


## Garbage Collection:
- Garbage collection is automatically done and invisible to us. It's all done using a concept called 'reachability'. [This page](https://javascript.info/garbage-collection) writes about it in short and sweet!

## The `this` thing
- In JS, `this` behaves differently compared to most other languages. It can be used in any method even if it's not inside an object and `this` is evaluated in run-time depending on the context.
- To chain methods of the function, just return `this` from the method that you want to allow chaining
- Arrow functions don't have their own `this` but rather takes from outer context.

## The `new` thing
Apart from creating an object with the `{}` syntax, objects can also be created using contructor functions that are, as a conventional notation, named with capital letter first and should be executed only with `new` operator. The `this` operator is returned after funciton is executed. Without the new operator, the `this` is not returned.

By the way, we can omit parentheses after `new`.


{%highlight javascript%}
function User(name) {
  // this = {};  (implicitly)

  // add properties to this
  this.name = name;
  this.isAdmin = false;

  // return this;  (implicitly)
}

let user = new User("Jack");
{%endhighlight%}

We can, within the function, see if it was called in constructor mode or in regular mode.

{%highlight javascricpt%}
function User(name) {
  if (!new.target) { // if you run me without new
    return new User(name); // ...I will add new for you
  }

  this.name = name;
}

let john = User("John"); // redirects call to new User
alert(john.name); // John
{%endhighlight%}

## The `?.` thing (Optional Chaining) [WIP]



# References:
1. [The Modern Javascript Tutorial](https://javascript.info/)
2. [Stack Overflow Question](https://stackoverflow.com/questions/22939130/when-should-i-use-arrow-functions-in-ecmascript-6)


----------
Last Updated: Friday, 28 March, 2025 09:38:00 AEDT
Author: Madhav Om (scimad)