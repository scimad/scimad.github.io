---
layout: post
title:  "Special Relativity"
needs-mathjax: true
date:   2020-05-04 08:27:55 +0545
categories: physics classical
---
## Coordinates and Coordinate Transformation
In order to understand relativity, one has to understand the concept of coordinates (i.e. space and time) and coordinate transformation between two frames of reference. By coordinate transformation between two frames, we mean the set of equations relating the variables representing the coordinates of one frame of reference with the other.

*Galilean transformation* for example is one such set of equation that relates the coordinates of two frames of reference that are in constant velocity with respect to each other that was used to describe observations where the velocities are very small as compared to the velocity of light. Before Einstein, Galilean transformation was was assumed to be absolutely correct laws. If $x$,$y$,$z$,$t$ are the coordinates of an event at a frame of reference and $x'$,$y'$,$z'$,$t'$ are the coordinates of same event at another frame of reference at $v$ velocity along x-axis, with all other spatial coordinate axes parallel with each other, then the transformation equation is:

$x' = x - vt$

$y' = y$

$z' = z$

$t' = t$

The last one is considered always true regardless of the direction or type of motion and is often avoided in the description of transformation. Though it was Newton's tremendous intellectual leap to say that he would forego abstract speculation and deal ony with observable facts about natural phenomenon and focus on describing the phenomenon quantitatively rather than finding reasons for it, even he couldn't let the same be about the nature of time, specifically relating the forth equation in above set. He, in his book "Principia" says,

"*Absolute, true and mathematical time, of itself and by its own true nature, flows uniformly on, without regard to anything external. Relative, apparent and common time is however some sensible measure of the absolute time and is estimated by the motion of bodies, whether accurate or inequable.*"

It was the German physicist Ernst Mach who first successfully challenged newtonian thought. In this text "The Science of Mechanics", Mach comments that 

"*it would appear as though Newton still stood under the influence of medieval philosophy, as though he had grown unfaithful to his resolve to investigate only actual facts.*"

Mach presents the argument that since time in necessarily measured by repetitive motion of some physical system, the properties of time must be connected with the laws that describe the the motion of physical system and Newton's idea of time without clock is metaphysical; to understand the properties of time, we must observe the properties of clocks. Similarly, since space is determined with measuring rods, the properties of space can be understood only by investigating the properties of meter sticks.

Mach's critique (and other laws and experiments such as Maxwell's Laws, Michelson Morley experiment, Lorentz contractions)  provides the missing link between apparently a huge intellectual leap between classical idea  on space-time and fundamentally different concept of space and time as presented by Einstein. Lorentz in particular, exploring the electrodynamics of moving charges, was led very close to the final formulation of Einstein. And, Einstein's great paper of 1905 was not entitled "Theory of Relativity" but rather "On the Electrodynamics of Moving Bodies".


## The laws of physics
It is to be noted that the laws of physics could have different forms in different frames of reference. For example, the equation of motion is 

$\vec F = m\vec a$ 

in an inertial frame of reference; whereas, in a linearly accelerated frame of reference, the equation of motion is 

$\vec F + \vec F_{fict} = m\vec a$,  

where $\vec F_{fict}$ is $-m\vec A$, $\vec A$ being the acceleration of the frame of reference with respect to an inertial one. Similarly, the equation of motion in a circularly rotating frame of reference is given by 

$\vec F + \vec F_{fict} = m\vec a$,

where $\vec F_{fict}$ is $-m[ 2\vec \omega \times \vec v + \vec \omega \times (\vec \omega \times \vec r)]$. This means, the laws of physics appear different in different frames of references.

Odd though it may seem, the fictitious force terms appearing in the laws of physics in accelerating frame of reference do simplify our calculations and explanation of phenomenon simpler. For example, the precession of pendulum or the weather phenomenon on earth such as tides is relatively quite easy to describe and make calculations taking circularly rotating earth as reference frame than in an inertial frame of reference.

As stated already, Einstein's 1905 paper started as "On the Electrodynamics of Moving Bodies". This had some root in Maxwell's equations. Maxwell's equations are called by many as the crown of classical physics and the profoundness of Maxwell's equation doesn't lie just in its elegance and wide application, but in having a key role in the advent of relativity and as a law of unification of forces. **The form of Maxwell's laws (and the propagation of EM-wave) was invariant in any inertial frame of reference.** Whether the ideas of special relativity could have evolved in the absence of a complete theory of the electromagnetic field is a question for the historian of science to speculate about; probably it can't be answered. However, relativity isn't the branch of electromagnetism, nor the consequence of existence of electromagnetic waves. The whole theory of relativity can actually be derived from the equivalence of inertial reference frames without mentioning light at all (like did by N. David Mermin in his paper "Relativity Without Light").


## Postulates of Special Relativity
* The laws of physics takes same form in all inertial frames of reference.
* The speed of light is a universal constant i.e. it is same for all observers.

## Relativistic Coordinate Transformation
Let us consider these two postulates and see how law of coordinate transformation changes from the Galilean transformation. Since an observer at rest and an observer at a constant motion both observe the light at same speed, something about space-time must be different from our common intuition.

Let us consider two coordinate frames $P$ and $Q$. If $x$,$y$,$z$,$t$ are the coordinates of an event at a frame of reference $P$ and $x'$,$y'$,$z'$,$t'$ are the coordinates of same event at $Q$'s frame of reference which is at $v$ velocity along x-axis (keeping $Y$-$Y'$ and $Z$-$Z'$ parallel), let us try to find the relation between two sets of coordinates. We take linear relation between coordinates as follows:

$$
\begin{equation}\label{eqn:1}
x' = Ax + Bt
\end{equation}
$$

$$
\begin{equation}\label{eqn:2}
y' = y
\end{equation}
$$

$$
\begin{equation}\label{eqn:3}
z' = z
\end{equation}
$$

$$
\begin{equation}\label{eqn:4}
t' = Cx + Dt
\end{equation}
$$


Our transformation equations have four unknown variables. So, we use following four known scenarios to solve for the variables. (I will use the acronym FOR for Frame of Reference)

### Scenario-1:
The coordinate axes attached to FOR-$Q$ is moving along x-axis with velocity v. 

As seen by $P$, the coordinate of $Q$'s origin is given by:

$x = vt$

As seen by $Q$, it's own origin's location is given by:

$x' = 0$

Using equation (\ref{eqn:1}) in Scenario-1, we get,

$x' = Ax + Bt$

Or,

$0 = Avt + Bt$

$\therefore B = -Av$

So, equation (\ref{eqn:1}) becomes:

$$
\begin{equation}\label{eqn:5}
x' = A(x - vt)
\end{equation}
$$

### Scenario-2:
For the same motion, the coordinate axes attached to FOR-$P$ is moving along negative x'-axis, i.e. with velocity -v.

As seen by $Q$, the coordinate of $P$'s origin is given by:

$x' = -vt'$

As seen by $P$, it's own origin's location is given by:

$x = 0$

Using equation (\ref{eqn:4}) and equation (\ref{eqn:5}) in Scenario-2, we get,

$A(x - vt) = -v (Cx + Dt)$

Since, $x = 0$, we get,

$-Avt = -Dvt$

$\therefore D = A$

So, equation (\ref{eqn:4}) becomes:

$$
\begin{equation}\label{eqn:6}
t' = Cx + At
\end{equation}
$$

### Scenario-3:
Let us consider that a pulse of light is transmitted along x-direction when origins of two frames of reference coincide. One must keep in mind that though $Q$ is moving along x-axis with $v$ velocity, the both frames of references must see light moving at speed $c$ with respect to own frame of reference.

As seen by $P$, the coordinate of the pulse of light is given by:

$x = ct$

As seen by $Q$, the coordinate of the pulse of light is given by:

$x' = ct'$

Using equation (\ref{eqn:5}) and equation (\ref{eqn:6}) in Scenario-3, we get,

$A(x - vt) = c(Cx + At)$

Since, $x = ct$, we get,

$Act - Avt = c^2Ct + Act$

$\therefore C = -A\frac{v}{c^2}$

So, equation (\ref{eqn:6}) becomes:

$$
\begin{equation}\label{eqn:7}
t' = A(t - x\frac{v}{c^2})
\end{equation}
$$

### Scenario-4:
Finally, let us consider that a pulse of light is transmitted along y-direction when origins of two frames of reference coincide. Again, the both frames of references must see light moving at speed $c$ with respect to own frame of reference. $P$ sees the light moving entirely in $y$-direction and $Q$ sees the light moving a little in negative $x'$-direction and in $y'$-direction.

As seen by $P$, the coordinate of the pulse of light is given by:

$x = 0$

$y = ct$

As seen by $Q$, the coordinate of the pulse of light is given by:

$x'^2 + y'^2 = (ct')^2$

Using equations (\ref{eqn:6}) and (\ref{eqn:7}) in Scenario-4, we get,

$[A(x - vt)]^2 + y'^2 = [c(A(t - x\frac{v}{c^2}))]^2$

As $y'=y$ from (\ref{eqn:2}), $x=0$ from scenario-4, we get,

$A^2v^2t^2 + y^2 = c^2A^2t^2$

Since $y=ct$ from scenario-4, we get,

$A^2v^2t^2 + c^2t^2 = c^2A^2t^2$

$A^2(v^2-c^2) = -c^2$

$\therefore A = \frac{1}{\sqrt{1-\frac{v^2}{c^2}}} $

Positive square root is taken for $A$ as equation (\ref{eqn:5}) should give $x'=x$ (as opposed to $x'=-x$) when $v=0$.

So the transformation equation according to special relativity becomes:

$x' = \frac{1}{\sqrt{1-\frac{v^2}{c^2}}}(x - vt)$

$y' = y$

$z' = z$

$t' = \frac{1}{\sqrt{1-\frac{v^2}{c^2}}}(t - x\frac{v}{c^2})$

## So, What does this mean anyway?
The above derivation for the transformation equation that is consistent to the postulates of relativity opens up a whole new concept about nature of space and time. These equations can be used to show that the time interval between two events isn't absolute as was said by Newton and is affected by a factor related to the velocity. A clock moving at a significant fraction of the speed of light with respect to an observer can be shown to run more slowly than the observer's own clock. Also the length (distance) between two points could be different as observed by two different observers in relative motion with each other.

One easily understandable consequence would be the decay time of muons. Laboratory experiments show that their average life span (or rather half-life) is around 2.2 microseconds.  That is, if we start with 1000 muons, after 2 microseconds we would expect around 500 to remain.  Then after a further 2 microseconds, 250 will remain, then 125, and so on. This gives us the estimate of number of muons that are expected to arrive to the sea level once they are created at the upper atmosphere. However the 2.2 microseconds is in the frame of the muons. To an earthbound observer, the same time interval gets dilated and it would take much more longer time for muon in average to decay. So, much more muons are found at sea level. This is in complete accordance with relativistic kinematics which follows from the above transformation equation. 


# References:
* Chapter 11, AN INTRODUCTION TO MECHANICS, D. Kleppner, R. J. Kolenkow
* Chapter 5, ELECTRICITY AND MAGNETISM, E. M. Purcell
* [Muons and Relativity](http://www.alternativephysics.org/book/MuonRelativity.htm)


#### PS:
Parts of the article is inspired from the references and is presented as is and with some modification. No infringement of copyright is intended.

----------
Last Updated: Monday, 4th May, 2020, 10:58 NPT
Author: Madhav Humagain (scimad)