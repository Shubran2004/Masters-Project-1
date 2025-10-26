# Masters-Project-1

Modification of buoyantPimpleFoam solver from OpenFOAM-10-10 to simulate heat transfer problems.

The governing equations are given by:

$$
\rho_c \left( \frac{\partial \mathbf{u}}{\partial t} + (\mathbf{u} \cdot \nabla) \mathbf{u} \right) = - \nabla P + \mu_c \nabla^2 \mathbf{u} + \mathbf{f}_g + \mathbf{f}_m
$$

$$
\frac{\partial T}{\partial t} + \mathbf{u} \cdot \nabla T = \alpha_c \nabla^2 T 
$$
$$
\mathbf{f}_m = \mu_0 \chi_c \nabla \frac{\mathbf{H}^2}{2} - \mu_0 \chi_c \beta_m (T - T_c) \nabla \frac{\mathbf{H}^2}{2}
$$
$$
\mathbf{f}_g = \rho_c g \hat{\mathbf{e}}_y + \rho_c g \beta (T - T_c) \hat{\mathbf{e}}_y
$$
