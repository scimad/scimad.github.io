---
layout: post
title:  "Using integral calculus!"
date:   2020-03-05 21:04:56 +0545
categories: math fun
---
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>

<script type="text/x-mathjax-config">
    MathJax.Hub.Config({
        TeX: { equationNumbers: { autoNumber: "AMS" } },
        displayAlign: "center",
        tex2jax: {
            inlineMath: [ ['$','$'], ["\\(","\\)"] ],
            processEscapes: true
        }
    });
</script>

## Find the area between the curves $y = sin (x)$ and $y = cos(x)$

There was this post from one of my junior fellow from high school who is enthusiastic on mathematics, physics and electronics. Here's his post:
<iframe src="https://www.facebook.com/plugins/post.php?href=https%3A%2F%2Fwww.facebook.com%2Fpermalink.php%3Fstory_fbid%3D2656992194514508%26id%3D100006112605560&width=500" width="500" height="650" style="border:none;overflow:hidden" scrolling="no" frameborder="0" allowTransparency="true" allow="encrypted-media"></iframe>

I just wanted to _unrust_ my mind. And hence this:

First, the point where two curves $y = sin(x)$ and $y = sin(x)$ meet at those points where there $y$ value are same for same $x$. To find that,

$sin(x) = cos(x)$,

Or, $sin(x) - cos(x) = 0$,

Old school math says to multiply it by $\frac{1}{\sqrt{2}}$ on both sides, that gives:

$\frac{1}{\sqrt{2}} sin (x) - \frac{1}{\sqrt{2}} cos(x) = 0$,

Or, $cos(\frac{\pi}{4})sin(x) - sin(\frac{\pi}{4})cos(x) = 0$

Or, $sin(x - \frac{\pi}{4}) = 0$

If $sin(\theta) = 0$, then $\theta = \pm n \pi$, where $n=0, 1, 2, 3, ...$

So, in our case $x - \frac{\pi}{4} = 0$ and $x - \frac{\pi}{4} = 1$ gives relevant solution.

i.e. $x_1 = \frac{\pi}{4}$ and $x_2 = \frac{5\pi}{4}$.

Now that we know the limits of the integral, we have to find the area of the upper curve viz. $y = sin(x)$ and subtract the area of the lower curve viz. $y = cos(x)$ from the upper one.

i.e. Required Area $(A) = \int_{\frac{\pi}{4}}^{\frac{5\pi}{4}}sin(x)dx - \int_{\frac{\pi}{4}}^{\frac{5\pi}{4}}cos(x)dx$

Or, $A = [- cos(x) - sin (x)]_{\frac{\pi}{4}}^{\frac{5\pi}{4}}$

Or, $A = [-(-\frac{1}{\sqrt{2}}) - (-\frac{1}{\sqrt{2}})] - [- \frac{1}{\sqrt{2}} - \frac{1}{\sqrt{2}}] $

$\therefore A = \frac{4}{\sqrt(2)} = 2.828 $ in square units.

So, that's it! That's the area!
----------
Last Updated: Thursday, 5 Mar, 2020, 21:41 NPT  
Author: Madhav Humagain (scimad)