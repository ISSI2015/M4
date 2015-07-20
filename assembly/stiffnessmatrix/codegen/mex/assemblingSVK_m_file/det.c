/*
 * det.c
 *
 * Code generation for function 'det'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "assemblingSVK_m_file.h"
#include "det.h"

/* Variable Definitions */
static emlrtRSInfo gc_emlrtRSI = { 20, "det",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/matfun/det.m"
};

static emlrtRSInfo hc_emlrtRSI = { 8, "eml_xgetrf",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/lapack/eml_xgetrf.m"
};

static emlrtRSInfo ic_emlrtRSI = { 8, "eml_lapack_xgetrf",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/lapack/internal/eml_lapack_xgetrf.m"
};

static emlrtRSInfo jc_emlrtRSI = { 58, "eml_matlab_zgetrf",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m"
};

static emlrtRSInfo kc_emlrtRSI = { 42, "eml_xgeru",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/eml_xgeru.m"
};

static emlrtRSInfo lc_emlrtRSI = { 37, "eml_xger",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/eml_xger.m"
};

static emlrtRSInfo mc_emlrtRSI = { 18, "eml_blas_xger",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xger.m"
};

static emlrtRSInfo nc_emlrtRSI = { 14, "eml_refblas_xger",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xger.m"
};

static emlrtRSInfo oc_emlrtRSI = { 53, "eml_refblas_xgerx",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgerx.m"
};

/* Function Definitions */
real_T det(const real_T x[4])
{
  real_T y;
  real_T b_x[4];
  int32_T ix;
  int8_T ipiv[2];
  int32_T iy;
  int32_T k;
  real_T temp;
  boolean_T isodd;
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  for (ix = 0; ix < 4; ix++) {
    b_x[ix] = x[ix];
  }

  for (ix = 0; ix < 2; ix++) {
    ipiv[ix] = (int8_T)(1 + ix);
  }

  ix = 0;
  if (muDoubleScalarAbs(x[1]) > muDoubleScalarAbs(x[0])) {
    ix = 1;
  }

  if (x[ix] != 0.0) {
    if (ix != 0) {
      ipiv[0] = 2;
      ix = 0;
      iy = 1;
      for (k = 0; k < 2; k++) {
        temp = b_x[ix];
        b_x[ix] = b_x[iy];
        b_x[iy] = temp;
        ix += 2;
        iy += 2;
      }
    }

    b_x[1] /= b_x[0];
  }

  emlrtPushRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  if (b_x[2] != 0.0) {
    emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
    b_x[3] += b_x[1] * -b_x[2];
  }

  emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ic_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  y = b_x[0] * b_x[3];
  isodd = FALSE;
  if (ipiv[0] > 1) {
    isodd = TRUE;
  }

  if (isodd) {
    y = -y;
  }

  return y;
}

/* End of code generation (det.c) */
