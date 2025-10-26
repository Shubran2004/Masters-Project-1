# Masters-Project-1

Modification of buoyantPimpleFoam solver from OpenFOAM-10-10 to simulate heat transfer problems.

The governing equations are given by:

$$
\rho_c \left( \frac{\partial \mathbf{u}}{\partial t} + (\mathbf{u} \cdot \nabla) \mathbf{u} \right) = - \nabla P + \mu_c \nabla^2 \mathbf{u} + \mathbf{f}_g + \mathbf{f}_m
$$

$$
\frac{\partial T}{\partial t} + \mathbf{u} \cdot \nabla T = \alpha_c \nabla^2 T 
$$
