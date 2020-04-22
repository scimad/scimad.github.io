---
layout: post
title:  "Inertial and Gravitational Mass"
needs-mathjax: true
date:   2020-04-22 09:06:48 +0545
categories: physics classical
---
# Simple theoretical experiment to differentiate Inertial and Gravitational Mass

## Definition:

### Inertial frame of reference:
Inertial frame of reference is the frame of reference in which Newton's second law holds good. It can be shown that all the other frame of reference that at rest or at constant velocity with an inertial frame of reference are also inertial frame of reference. i.e. Newton's Law holds good on all system at rest or at constant velocity if it holds true in one of them.

### Inertial Mass ($m_i$):
Inertial mass of a body is the quantity for a body which when kept at Newton's second law of motion holds true. Simply put, it is the mass which we put in the equation $F = ma$. Suppose we know there is a force $F$ acting on a body and if we want to find out the accelartion caused due to the force, we divide the force by the body's inertial mass. Inertial mass depicts how difficult it is to accelarate the body.


### Gravitational Mass ($m_G$):
Gravitational mass of a body is the quantiy which when kept at Newton's law of gravitation holds true. Simply put, it is the mass which we put in the equation $F = \frac{Gm_1m_2}{R^2}$. Gravitational mass depicts how strong force of attraction is created within two bodies.

### Aren't the two things same?

We don't know. There is no reason it should necessarily hold true. This is because inertia is completely independent phenomenon from gravitational force. Even if there is a single mass in free space, it experiences inertia.

## Pendulum systems:

### Time period of a simple pendulum:
The time period of simple pendulum is calculated in the following basis (and few other geometrical approximations):

- The force acting along the circular path of the pendulum is $F_x = mg\sin\theta$, (which comes from $F=m\times\frac{GM}{R^2}$)

- This force causes an acceleration of the bob along the arc which is given by $F_x = ma$

One should note here that the mass in the first equation above are gravitational mass(es) and that on second equation is the inertial mass. Assuming the two masses to be the same, we get the time period of the pendulum as:
$T_G = 2\pi\sqrt\frac{l}{g}$

One can easily show that if we don't assume the masses to be same, the time period becomes:
$T_G = 2\pi\sqrt{\frac{l}{g}\frac{m_i}{m_G}}$   ......(1)

This is a famous high school experiment in which we measure the time period of the oscillation of the pendulum under these geometrical assumtions and use it to calculate the value of $g$ in laboratory.

(We also call $g$ to be the accelareation due to gravity assuming the masses to be same in the equation $m_Gg = m_ia$. If those masses were not (or are not) same, then the magnitude of $g$ would be numerically slightly different from the measured acceleration of a freely falling body.)

### A pendulum-system accelerating in free space
Imagine the same pendulum system is then taken to free space (with no gravity or any other external force). And then it is accelerated in the direction approximately same as the direction of the stratight string holding the pivot and the bob.

An oscillatory motion is observed and the equation of motion can be found as following:

Figure 1 shows the physical diagram and figure 2 shows force resolution diagram.

The equation of motion in two dimension for the observer at rest is:

$F_y=m_i\frac{d^2y}{dt^2}$

or, $T\cos\theta=m_i\frac{d^2y}{dt^2}$

When $\theta$ is very small, the acceleration of bob in Y-direction is the approximately same as the acceleration of the pivot and the whole system (i.e. $A$) and $\cos\theta$ is approximately equal to $1$.


$\therefore T=m_iA$   ......(2)

Similarly, in X-direction,

$F_x=m_i\frac{d^2x}{dt^2}$

or,
$-T\sin\theta=m_i\frac{d^2x}{dt^2}$
$-T\sin\theta=m_i\frac{d^2x}{dt^2}$

When $\theta$ is very small, the position in X-coordinate $x$ is the approximately equal to $l\theta$ and $\sin\theta$ is approximately equal to $\theta$, which gives,


$-T\theta=m_i\frac{d^2\theta}{dt^2}$,

Substituting equation 2 in above expression, we get,

$l\frac{d^2\theta}{dt^2} = -A\theta$

This gives the time period of the pendulum as:
$T_i = 2\pi\sqrt\frac{l}{A}$   ......(3)

*This can also be proved using the concept of fictitious force. It states that, in the accelerating coordinate system, the law of motion becomes
$F'=F+F_{fict}= ma'$, where $F'$ is the apparent force in the system as seen in accelerating frame of reference, $F$ is the actual external force on the mass $m$, $a'$ is the acceleration of the mass with respect to the accelerating coordinate system and $F_{fict}$ is the fictitious force which is given by $F_{fict}=-mA$, $A$ being the acceleration of the frame of reference to an inertial frame of reference.]*

## Mesaurement of the difference between $m_G$ and $m_i$

In order to calculate the difference between $m_G$ and $m_i$ we accelerate the system exactly with $A=\frac{GM}{R^2}$, i.e. $A=g$. Then, dividing equation (1) and (3), we get,

$\frac{m_G}{m_i}=\frac{T_i^2}{T_G^2}$

If we could detect the difference between the time period of oscillation in two systems, we can get to know if there is difference between $m_G$ and $m_i$.

## Consequence:
If we could find a difference between two systems (pendulum systems or any other physical system) one in rest (or constant velocity) in a gravitational field and another in a uniform acceleration in gravity free space, then we can say by measurement which kind of system we are in, even if we are enclosed in a box such as an elevator.

So, if we "assume" or find that the inertial mass and the gravitational mass are equal and we are in a closed elevator doing the experiment on the surface of earth in a uniform gravitational field downwards, we can then equally say that we are accelerating upwards in a gravity free space and all the laws of physics are same in both of the systems.

# The Principle of Equivalence
The laws of physics in a uniformly accelerating systems are identical to those in an inertial system provided that we introduce a fictitious force on each particle, $F_{fict}=-mA$. $F_{fict}$ is indistinguishable from the force due to a uniform gravitational field $g = -A$; both the gravitational force and the fictitious force are constant forces proportional to the mass. In a local gravitational field $g$, a free particle of mass $m$ experiences a force $F=mg$. Consider the same particle in a noninertial system uniformly accelerating at rate $A=-G$, with no gravitational field nor any other interaction. The apparent force is $F_{fict}=-mA=mg$, as before. There is no way to distinguish physically between these two situations.

#### P.S.
This page reflects solely my personal understanding on the matter and study was done at one day's time and is was in no way rigorous. The theoretical experiment is my personal idea. The idea and the understanding might have some minor errors or some major flaw as well at worst case.

---
Last Updated: Wednesday, 22nd Apr, 2020, 09:26 NPT
20, 15:04 NPT  
Author: Madhav Humagain (scimad)
