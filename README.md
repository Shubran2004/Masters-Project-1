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


The solver has been validated against the following :

@article{castro2024influence,
  title={Influence of a nonuniform magnetic field on the flow and heat transfer of a thermosensitive ferrofluid},
  author={Castro, LHF and Oliveira, TF and Rosa, AP},
  journal={Physics of Fluids},
  volume={36},
  number={10},
  year={2024},
  publisher={AIP Publishing}
}

@article{verma2024vortex,
  title={Vortex structure and control in a lid-driven cavity with magnetic field},
  author={Verma, Prakash and Das, Manab Kumar},
  journal={Physics of Fluids},
  volume={36},
  number={12},
  year={2024},
  publisher={AIP Publishing}
}
