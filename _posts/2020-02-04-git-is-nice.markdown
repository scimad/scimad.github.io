---
layout: post
title:  "Git is nice"
date:   2020-02-04 14:19:00 +0545
categories: programming tools 
---
So, this is about stuff in git that I have liked or learned or may need later in future. Git is a huge thing, a huge thing, that many beginners underestimate. Even many of us who like to call ourselves programmers actually don’t like going deep and using its best. But `git` is nice, really!. Git to me isn’t something about just coding. Somehow to me, it is almost like a life management tool and git usage is a metric of my overall satisfaction of life.

This post will be an incremental post where I will add things as I learn, like the post on [nvim editor](https://scimad.github.io/programming/editor/2019/08/27/the-vi-editor.html).

Let’s go into it.

**`git cherry-pick 5a412f`**

So, I came up in this situation. I had two branches `master` and `fix-config` both of which were at the same `HEAD` if that’s what you call it. (Basically, I mean, I had just created the `fix-config` branch from master).

**Situation:**

I checked out to `fix-config` and made two commits `commit1 (dbe52d1be376f453d6c60ad5a58d5aea63a06823)` and then `commit2 (5a412f35526e9e6c89446be2c9e6cf148487ab09)`. I checked out to `master` and as I was about to merge the `fix-config` branch, I realized that I actually only need the changes made during `commit2` to be merged to master, and hence I needed to only merge one commit made in `fix-config` to `master`.

**Let’s pick the cherry only (and not it’s leaves)**

So, I had heard of this command `git cherry-pick` but had never used it. (Waiting for the right time, and that safe ground for doing so.) I thought it might help, it might be the day. With some prayer that every programmers do before messing up with `git` commands I did the following:

```
git checkout master
git cherry-pick 5a412f
```

And it actually worked! So, basically, it cherry-picked the changes made in the the second commit only and placed that cherry on the top of the master branch, like a cherry is topped on a cake.

Also, I think this deserves a meme!

![Cherry Pick](/assets/imgs/meme/cherry-pick.jpg)

*(Note: The commit hash of `commit2` is a fake one.)*

----------
Last Updated: Tuesday, 4 Feb, 2020, 15:04 NPT  
Author: Madhav Humagain (scimad)

