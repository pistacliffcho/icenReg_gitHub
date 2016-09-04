//
//  icenReg.cpp
//  
//
//  Created by Cliff Anderson Bergman on 5/16/15.
//
//

//#include "Eigen_local/Dense"
#include <Eigen/Dense>
#include <stdio.h>
#include <vector>
#include <Rcpp.h>

#include <R.h>
#include <Rinternals.h>
#include <Rmath.h>		

using namespace std;

#include "icenReg_files/basicUtilities.cpp"
#include "icenReg_files/ic_par.h"
#include "icenReg_files/ic_par_aft.h"
#include "icenReg_files/ic_par.cpp"
#include "icenReg_files/ic_sp_ch.cpp"
#include "icenReg_files/bivariateNPMLE.cpp"
#include "icenReg_files/ic_sp_gradDescent.cpp"

#include "icenReg_files/experimentalCode.cpp"
#include "icenReg_files/regressionTransforms.cpp"

#include "icenReg_files/EMICM.h"
#include "icenReg_files/EMICM.cpp"
#include "icenReg_files/ic_par_aft.cpp"

#include "icenReg_files/ic_bayes.cpp"