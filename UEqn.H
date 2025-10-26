    // Solve the Momentum equation

//change
volScalarField phiH = 0 * Mnf * H; //modification
const surfaceScalarField phiHf("phiHf", fvc::interpolate(phiH));  //modification
//change

    MRF.correctBoundaryVelocity(U);

    tmp<fvVectorMatrix> tUEqn
    (
        fvm::ddt(rho, U) +
        fvm::div(phi, U)
      + MRF.DDt(rho, U)
      + turbulence->divDevTau(U)
      + 0.5*ratio*DelT*fvc::grad(H)
     ==
        fvModels.source(rho, U)  + (K0*Mnf*fvc::grad(H))/2
    );
    fvVectorMatrix& UEqn = tUEqn.ref();

    UEqn.relax();

    fvConstraints.constrain(UEqn);

    if (pimple.momentumPredictor())
    {
        solve
        (
            UEqn
         ==
            fvc::reconstruct
            (
                (
                  - ghf*fvc::snGrad(rho)
				  -phiHf*fvc::snGrad(rho)
                  - fvc::snGrad(p_rgh)
                )*mesh.magSf()
            )
        );

        fvConstraints.constrain(U);
        K = 0.5*magSqr(U);
    }
