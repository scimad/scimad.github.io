---
layout: post
title:  "Playing around with coefficients"
date:   2019-10-09 17:51:00 +054
categories: math fun
---
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>

I was once thinking about how polynomials could be thought of infinite dimensional vectorspace with the basis vectors being different different powers of x i.e. $$ x^0, x^1, x^2, ... $$. And then I thought about the vector notation of a polynomial.

Say a polynomial $$ f(x) =  3x^2 + 2x - 7$$ be a vector of 3-dimensional vectorspace with basis vectors $$ x^0, x^1, x^2 $$ which in the vector notation is written as
$$
  \left(
    \begin{array}{r}
      3\\
      2 \\
      -7 \\
    \end{array}
  \right)
$$

So, I started to think how can one *extract* the coefficients of a polynomial without any manual operation. I felt like getting back to calculator programming.

To reiterate the problem, given a polynomial of a finite (known) degree, what could be a performed that yields each cofficient of the polynomial? So if $$ f(x) = ax^2 + bx + c $$ is a polynomial, I want 3 formula or methods ($$ A(f(x)), B(f(x)) $$  and $$ C(f(x)) $$) or a single formula with a parameter, that yields $$a, b $$ and $$ c $$.

After few minutes of thinking, I found out that finding $$a$$ is really simple.

Here,

$$f(x) = ax^2 + bx + c$$

So,

$$f'(x) = 2ax + b$$

and,

$$f''(x) = 2a$$

Hence,

$$a = A(f(x)) = \frac{f''(x)}{2} = \frac{d^2}{dx^2}\left(\frac{f(x)}{2}\right)$$

At this point I knew finding other coefficients would also be very simple and immediately I found the trick to do so.

Using the expression for $$a$$ and the above expression for first derivative $$f'(x)$$, we get,

$$b=B(f(x)=f'(x)-2ax=f'(x)-2x\frac{d^2}{dx^2}\left(\frac{f(x)}{2}\right)$$

Similarly, to find the coefficient $$c$$,

$$c = f(x)-ax^2-bx$$

Or,

$$c = f(x)-x^2\frac{d^2}{dx^2}\left(\frac{f(x)}{2}\right)-x\left(f'(x)-2x\frac{d^2}{dx^2}\left(\frac{f(x)}{2}\right)\right)$$


So, that is it. Except, it is not. I thought that was it at first glance and I was okay with the result. But the introduction of the chains of derivatives in the equation reminded me of the Taylor expansion of any function, particularly at $$x=0$$ (which is called the *Maclalurin Series*). The Maclaurin series is given as:

$$f(x) = f(0) + xf'(0) + x^2\frac{f''(0)}{2!} + x^3\frac{f'''(0)}{3!} + ... +x^n\frac{f^n(0)}{n!} + ... $$

For a $$n^{th}$$ order polynomial, the higher order derivatives (after n) vanish, and the coefficients of different powers of x are represented by the higher order derivatives at $$x=0$$ divided by corresponding factorial term. In our case, 

$$c=\frac{f(0)}{0!}$$

$$b=\frac{f'(0)}{1!}$$

and

$$a=\frac{f''(0)}{2!}$$

So, finally I came to a more elegant stuffs which was already there in my knowledge but had rusted for a while. Overall, I felt good and it was like trying to run an old engine again and repairing it.


<div class="fb-comments" data-href="https://scimad.github.io/math/fun/2019/10/09/playing-around-with-coefficients.html" data-width="600" data-numposts="5"></div>