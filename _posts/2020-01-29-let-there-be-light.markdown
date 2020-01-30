---
layout: post
title:  "And let there be light"
date:   2020-01-29 21:10:16 +0545
categories: physics classical
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

## Did god say "Let there be light!" using these equations?

# Maxwell's equations (and their intuitive meaning):

\begin{equation}\label{eqn:1}
\nabla . \vec{E} = \frac{\rho}{\epsilon_0}
\end{equation}
The equation above (**Gauss's law for electric field**) tells that the electric field at any point is directly proportional to the free charge nearby.


\begin{equation}\label{eqn:2}
\nabla \times \vec{E} = - \frac{\partial \vec{B}}{\partial t}
\end{equation}
Equation (\ref{eqn:2}) (**Faraday's (+Lenz's) law**) says that if you change the magnetic field (let's say, by moving a magnet), then it produces an electric filed.

\begin{equation}\label{eqn:3}
\nabla.\vec{B} = 0
\end{equation}
Equation (\ref{eqn:3}) (**Gauss's law for magnetic field**) says that magnetic fields don't have any origin, but loop onto itself. This is not the case with electric field as electric fields can originate from point charges.

\begin{equation}\label{eqn:4}
\nabla \times \vec{B} = \mu_0 \left( \vec{J} + \epsilon_0 \frac{\partial \vec{E}}{\partial t} \right)
\end{equation}
This equation (**Ampere-Maxwell's law**) says that if you have a current carrying wire or a changing electric field, then it produces a magnetic field around.

# Also, an identity from vector calculus, 

\begin{equation}
\nabla \times \nabla \times \vec{A} = \nabla ( \nabla. \vec{A}) - \nabla^2 \vec{A}
\end{equation}

So,

$$\nabla \times \nabla \times \vec{E} = \nabla ( \nabla. \vec{E} ) - \nabla^2 \vec{E} $$

Substituting value of $\nabla \times \vec{E}$ from equation (\ref{eqn:2}) and that of $\nabla. \vec{E}$ from equation (\ref{eqn:1}) respectively, we get,

$$-\nabla \times \frac{\partial \vec{B}}{\partial t} = \nabla ( \frac{\rho}{\epsilon_0} ) - \nabla^2 \vec{E} $$

In vacuum, the free charge density at any point is zero. So, the quantity first term on the RHS above becomes zero.

Hence,

$$\nabla \times \frac{\partial \vec{B}}{\partial t} = \nabla^2 \vec{E} $$

Or,

$$\frac{\partial }{\partial t} \left( \nabla \times \vec{B} \right) = \nabla^2 \vec{E}$$

Substituting equation (\ref{eqn:4}) in above expression, we get, 

$$\frac{\partial }{\partial t} \left( \mu_0 \left( \vec{J} + \epsilon_0 \frac{\partial \vec{E}}{\partial t} \right) \right) = \nabla^2 \vec{E}$$

Again, in vacuum $\vec{J}$ (current density) is zero.

So,

$$\mu_0 \epsilon_0 \frac{\partial^2 \vec{E}}{\partial t^2} = \nabla^2 \vec{E}$$

Hence,
\begin{equation}
\nabla^2 \vec{E} = \mu_0 \epsilon_0 \frac{\partial^2 \vec{E}}{\partial t^2}
\end{equation}

which represents an wave equation, whose standard form is:
\begin{equation}
\nabla^2 \vec{\psi} = \frac{1}{v^2} \frac{\partial^2 \vec{\psi}}{\partial t^2}
\end{equation}

So, the velocity of the wave is:
$$v = \frac{1}{\sqrt{\mu_0 \epsilon_0}} = 3 \times 10^8 m/s (approx.)$$

----------
Last Updated: Wednesday, 30 Jan, 2020, 11:40 NPT  
Author: Madhav Humagain (scimad)