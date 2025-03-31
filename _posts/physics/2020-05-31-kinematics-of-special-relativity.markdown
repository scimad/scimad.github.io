---
layout: post
title:  "Kinematics of Special Relativity"
needs-mathjax: true
date:   2020-05-31 21:27:55 +0545
categories: physics classical
---
# Kinematics of Special Relativity

The transformation of coordinates in two intertial frames of reference in accordance to the postulates of special relativity is called the Lorentz transformation. The relativistic laws of physics must be developed from these postulates and hence must follow the Lorentz transformation equations.

As a convention, let us introduce few terms to distinguish the frames of reference. _Proper frame_ represents a frame of reference generally in which an experiment or measurement is carried out whereas _lab frame_ means generally our frame of reference in which the other frame of reference (i.e. the proper frame) is moving. Lab frame of reference is often denoted by X-Y coordinates and the proper frame or rest frame is denoted by X'-Y' coordinates and is also called dashed system sometimes.

## Relativistic transformation of velocities

In order to define velocity we need to define motion or change of (coordinates of) position of bodies with respect to some coordinate system. Consider a particle travelling from one point $A$ to another point $B$, then the two events viz. leaving point $A$ and arriving point $B$ are described as:

Event $A$: $x_a, y_a, z_a, t_a$

Event $B$: $x_b, y_b, z_b, t_b$

If our x-axis aligned along the direction of motion, then $y_a=y_b$ and $z_a=z_b$. So the separation between two events is given by:

In space, $\Delta x = x_b-x_a$

In time, $\Delta t = t_b-t_a$

And the velocity of the particle is defined as:

$u = \lim \limits_{\Delta t \to 0}\frac{\Delta x}{\Delta t} = \frac{dx}{dt}$

Now, if next observer attached to another frame of reference's axes is moving at velocity $v$ with respect to the first frame of reference (with $y$ and $z$ axes aligned), the we have the transformation of coordinates between two frames:

$x' = \gamma(x-vt)$

$y' = y$

$z' = z$

$t' = \gamma(t-\frac{vx}{c^2})$

and the velocity of the particle in second frame os reference is defined as:

$u' = \lim \limits_{\Delta t' \to 0}\frac{\Delta x'}{\Delta t'} = \frac{dx'}{dt'}$

Using above transformation equations, the coordinates of the events in second frame of reference are:

Event A: $x_a', y_a', z_a', t_a'$

$x_a' = \gamma(x_a-vt_a)$

$y_a' = y_a$

$z_a' = z_a$

$t_a' = \gamma(t_a-\frac{vx_a}{c^2})$


Event B: $x_b', y_b', z_b', t_b'$

$x_b' = \gamma(x_b-vt_b)$

$y_b' = y_b$

$z_b' = z_b$

$t_b' = \gamma(t_b-\frac{vx_b}{c^2})$

In order to find the velocity of the same thing as seen by first observer which is given by

$u = \lim\limits_{\Delta t \to 0} \frac{\Delta x}{\Delta t} $

we find the separation between two events with respect to the second observer as:

In space, $\Delta x' = x_b'-x_a'$

Or,
$\Delta x' = \gamma(x_b-vt_b) - \gamma(x_a-vt_a)$ 

Or,
$\Delta x' = \gamma[(x_b-x_a) - v(t_b-t_a)]$ 

$\therefore$
$\Delta x' = \gamma[\Delta x - v\Delta t]$ 

Similarly, in time, $\Delta t' = t_b'-t_a'$

Or,
$\Delta t' = \gamma(t_b-\frac{vx_b}{c^2}) - \gamma(t_a-\frac{vx_a}{c^2})$

Or,
$\Delta t' = \gamma[(t_b-t_a)-\frac{v}{c^2}(x_b-x_a)]$

$\therefore$
$\Delta t'= \gamma[\Delta t - \frac{v}{c^2} \Delta x]$

Hence, for the velocity $u'$,

$u' = \frac{\Delta x'}{\Delta t'}$

Or,
$u' = \frac{\gamma[\Delta x - v\Delta t]}{\gamma[\Delta t - \frac{v}{c^2} \Delta x]}$

Or,
$u' = \frac{\Delta x - v\Delta t}{\Delta t - \frac{v}{c^2} \Delta x}$

Or,
 $u' = \frac{\frac{\Delta x}{\Delta t} - v}{1 - \frac{v}{c^2} \frac{\Delta x}{\Delta t}}$
 
 At limiting case,

$u' = \frac{u-v}{1-\frac{uv}{c^2}}$

Equivalently,
$u = \frac{u'+v}{1+\frac{u'v}{c^2}}$


## The Lorentz Contraction

Length of a stick in a frame of reference is the distance between the coordinates of position of its ends meaured at same instant of time in that frame of reference.


Consider a rod at rest in the $X'$, $Y'$ system, lying along the $x'$ axis with its ends at $x_A'$ and $x_B'$. The length of the stick is $l_0 = x_B'-x_A'$ is called the "proper" length of the stick. An observer in this frame of reference measures same position of the ends of the rods at all times as it is at rest in that frame of reference.


Now let us determine the length of the stick $l$ in the system in which the observer is at rest. This system, known as the "laboratory" system, has coordinate x,y. In the laboratory system, the stick moves to the right with velocity $v$.

The end points must be determined simultaneously in the lab system; we must find the correspondence between $x'$ and $x$ at some value of $t$. This can be done by applying the Lorentz transformation:

$x' = \gamma(x-vt)$

We have,

$x_B' = \gamma(x_B-vt)$

$x_A' = \gamma(x_A-vt)$

Subtracting above equations, we get,

$l_0 = \gamma l$

$\therefore l = \frac{l_0}{\gamma} = l_0 \sqrt{1-\frac{v^2}{c^2}}$

## Time Dilation
Consider a clock at rest in $X'$, $Y'$ system and consider two events $A$ and $B$, both occurring at the same point (in space) in the dashed frame of reference as:

$A: x_0', t_A'$

$B: x_0', t_B'$

The interval $\tau = t_B' - t_A'$ is the time in interval between the events in the rest system. It is called the proper time interval.

In orer to find the correspoinding time interval in the laboratory, we use $t = \gamma(t' + \frac{x'v}{c^2})$.

We get,

$t_A = \gamma(t_A' + \frac{x_0'v}{c^2})$

$t_B= \gamma(t_B' + \frac{x_0'v}{c^2})$

Subtracting these two time coordinates of the events, we get,

$T = t_B-t_A$

Or,
$T = \gamma(t_B' - t_A')$

$\therefore T = \gamma \tau = \frac {\tau}{\sqrt{1-\frac{v^2}{c^2}}}$


# References:
* Chapter 12, AN INTRODUCTION TO MECHANICS, D. Kleppner, R. J. Kolenkow

#### PS:
Parts of the article is inspired from the references and is presented as is and with some modification. No infringement of copyright is intended.

----------
Last Updated: Monday, 1st June, 2020, 10:58 NPT
Author: Madhav Om (scimad)