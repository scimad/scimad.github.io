---
layout: post
title:  "Back to Mathematics"
date:   2020-02-04 14:19:00 +0545
categories: programming tools 
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

# Back to Mathematics
## Revisiting group theory
So, the transformation operations on 3d rotations are conveniently done using Lie Algebra. I remember like 6-7 years back my high school teacher (and much more than that) suggested me to study Lie Algebra but there were no instance where I stumbled on it, in academics or in work. But very recently while studying `3D-Reconstruction`, I encountered Lie group. So, I am planning to study it soon. Also, there this book [`Complex Analysis (Joseph Bak, Donald J. Newman)`](https://www.academia.edu/35970464/Joseph_Bak_Donald_J._Newman_-_Complex_Analysis.pdf) that was rusting back in my mind. And I am thinking to kindle it again.

I just realized that if I am not really comfortable with algebra stuffs like I am; more or less; in calculus stuffs.

![Galois](https://upload.wikimedia.org/wikipedia/commons/5/53/Evariste_galois.jpg)
Fig: Galois (1811-1832, lived for only 20 years!) who is considered by many as the founder of group theory. He was the first to use the term “group” in a technical sense, though to him it meant a collection of permutations closed under multiplication. Galois was a mathematician and political activist, what a combination!


## Group

Definition from Cayley (in 1884):

> A set of symbols all of them different, and such that the product of any two of them (no matter in what order), or the product [operation] of any one of them into itself, belongs to the set, is said to be a group. These symbols are not in general convertible [commutative], but are associative.

**Formal Definition**: A *group* is a non-empty set *G* on which there is a binary operation $$(a,b) \mapsto ab$$ such that:
* if *a* and *b* belong to *G*, then *ab* is also in *G(closure)*,
* $a(bc) = (ab)c$ for all *a, b, c* in *G (associativity)*

----------
Last Updated: Tuesday, 4 Feb, 2020, 15:04 NPT  
Author: Madhav Humagain (scimad)

