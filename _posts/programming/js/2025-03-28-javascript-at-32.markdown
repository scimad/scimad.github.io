---
layout: post
title:  "Javascript when 32"
date:   2025-03-28 09:34:00 +1100
categories: js
---

Sure, looking back again at Javascript when 32 comes with some deep existential questions, career questions and what not! Well, "Take as much retries as you need to". Here's some Javascript for ya:

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

### Function declaration looks like this:
{% highlight javascript %}
function sayHi(){
    alert( 'Hello everyone!' );
}
{%endhighlight%}

### Function Expression:
{%highlight javascript%}

let sayHi = function(){
    alert ( "Hello" );
}; // see the semicolon in this way of declaring function!
{% endhighlight %}

### Passing function as a value:
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



# References:
[The Modern Javascript Tutorial](https://javascript.info/)


----------
Last Updated: Friday, 28 March, 2025 09:38:00 AEDT
Author: Madhav Humagain (scimad)