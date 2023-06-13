---
layout: post
title:  "Getting Started with OpenGL (C++)"
date:   2019-06-05 15:28:25 +0545
categories: c++ opengl
---
In this post I will show you how to write a simple OpenGL code and make it working on a Linux machine. *I believe it's not the recommended way, but until I find it out, I will be using C-style coding to learn OpenGL in C++.*

I have g++ compiler already installed on my Linux machine as part of GNU-GCC. To see if your g++ compiler is installed properly, simply type the following code in the terminal.

{% highlight bash%}
$ g++ -v
{% endhighlight %}

If you don't already have one, please install it properly.

Once the g++ compiler is ready, you simply need to install OpenGL libraries to your system. Technically, OpenGL is just a system specification for rendering interactive 3D graphics and there's no such thing like an OpenGL SDK library. The OpenGL specification describes an abstract API for drawing 2D and 3D graphics. There's a `libGL.so` that comes with the drivers and OpenGL has many langauage bindings such as WebGL (JavaScript), WGL (C). There are also OpenGL C binding provided by iOS and Java and C bindings provided by Android. 

`Mesa` is one such open-source implementation of OpenGL API specification. To install Mesa Libraries, simply run the following commands in the terminal:
{% highlight bash%}
$ sudo apt-get update
$ sudo apt-get install freeglut3 freeglut3-dev 
$ sudo apt-get install libglew-dev libglm-dev
$ sudo apt-get install mesa-common-dev
{% endhighlight%}

And that's it. We are ready to go. Write the following code into a C/C++ program (say `test.cpp`).

{% highlight c++%}
{% include attachments/test-opengl.cpp %}
{% endhighlight%}

Now in terminal run the following command to compile and test if the OpenGL is properly installed and working.

{% highlight bash%}
$  g++ test.cpp -lGL -lGLEW -lglut
$ ./a.out
{% endhighlight%}
If everything works fine, you will see the following output in the screen (the exact version might be different).

`OpenGL version supported by this platform :3.1 Mesa 18.2.8`

Once the execution of the OpenGL program is verified, we move onto another example using OpenGL. I have used the example from the official opengl.org archive. This post is for educational purpose and no infringement of their copyright is intended. I have included their copyright statement in the program. This and other examples are found [here][opengl-examples]. Here's the C code.

{% highlight c++%}
{% include attachments/opengl-basic.cpp %}
{% endhighlight%}

The following image shows the output of the program:

![Sample Output](/assets/imgs/opengl-basic.png)

So, this brings us to the *end of the beginning* of OpenGL with C/C++. I hope to cover more on further posts.

[opengl-examples]: https://www.opengl.org/archives/resources/code/samples/glut_examples/examples/examples.html

----------
Last Updated: Saturday, 7 Mar, 2020 20:41:32 NPT  
Author: Madhav Humagain (scimad)
