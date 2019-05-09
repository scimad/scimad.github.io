---
layout: post
title:  "Back To C++"
date:   2019-05-09 11:11:25 +0545
categories: work
---
When I wrote [my first C++ project][buddhichal] (Buddhichal / Chess, 2015), I thought I had understood OOP. I thought, I had understood the notion of objects and classes. I had, a little. But only when my friend Prakash gave it a look, I knew how primitive (C-like) it was in sense of actually using OOP features and design principles. Objects were not segregrated in terms of thier responsibilites. I realized that the dependencies of methods were not clear (in my mind and in the program henceforth). Many `static` elements were used. Part of the problem was also because I have used `OpenGL` {which is a C(Not C++ / OOP)-library} to render graphics for project.

So, when my code was reviewed, Prakash got disappointed. I got more disappointed. To the extent that I never *really* looked back to C++ with full enthusiasm. The most painful thing about that all is I really didn't study and use C++ Templates and carried a guilt of not doing C++ really well for all these years.

Now as part of an office project in computer vision, I am having to use [OpenCV][opencv] (C++). And of course, giant liabries like opencv high level of abstraction and for that, C++ templates are a must. So, I am learning C++ templates and diving into the details of OpenCV (C++).

In this post, I want to share my learning and experiences with C++ templates.





<h1>C++ Templates</h1>




C++ code snippets:

{% highlight c++ %}
#include <iostream>
#include <stl>

int main(int argc, char** argv){
    //Write your code here	
    return 1;
}

{% endhighlight %}

Check out the [Jekyll docs][jekyll-docs] for more info on how to get the most out of Jekyll. File all bugs/feature requests at [Jekyll’s GitHub repo][jekyll-gh]. If you have questions, you can ask them on [Jekyll Talk][jekyll-talk].


***This blogpost is not yet a complete one.***

[buddhichal]: https://github.com/scimad/buddhichal
[jekyll-gh]:   https://github.com/jekyll/jekyll
[jekyll-talk]: https://talk.jekyllrb.com/
