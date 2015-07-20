/*
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "assemblingSVK_m_file.h"
#include "mldivide.h"
#include "assemblingSVK_m_file_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = { 1, "mldivide",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/ops/mldivide.p"
};

static emlrtRSInfo p_emlrtRSI = { 32, "eml_lusolve",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_lusolve.m"
};

static emlrtRSInfo q_emlrtRSI = { 115, "eml_lusolve",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_lusolve.m"
};

static emlrtRSInfo r_emlrtRSI = { 54, "eml_lusolve",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_lusolve.m"
};

static emlrtRSInfo s_emlrtRSI = { 16, "eml_warning",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_warning.m"
};

static emlrtMCInfo emlrtMCI = { 16, 13, "eml_warning",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_warning.m"
};

static emlrtMCInfo b_emlrtMCI = { 16, 5, "eml_warning",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_warning.m"
};

/* Function Declarations */
static void eml_warning(void);
static void warning(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void eml_warning(void)
{
  const mxArray *y;
  static const int32_T iv4[2] = { 1, 27 };

  const mxArray *m1;
  char_T cv4[27];
  int32_T i;
  static const char_T cv5[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m1 = mxCreateCharArray(2, iv4);
  for (i = 0; i < 27; i++) {
    cv4[i] = cv5[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 27, m1, cv4);
  emlrtAssign(&y, m1);
  warning(message(y, &emlrtMCI), &b_emlrtMCI);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
}

static void warning(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "warning", TRUE,
                        location);
}

void mldivide(const real_T A[4], const real_T B[4], real_T Y[4])
{
  int32_T r1;
  int32_T r2;
  real_T a21;
  real_T a22;
  int32_T k;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  if (muDoubleScalarAbs(A[1]) > muDoubleScalarAbs(A[0])) {
    r1 = 1;
    r2 = 0;
  } else {
    r1 = 0;
    r2 = 1;
  }

  a21 = A[r2] / A[r1];
  a22 = A[2 + r2] - a21 * A[2 + r1];
  if ((a22 == 0.0) || (A[r1] == 0.0)) {
    emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    eml_warning();
    emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  }

  for (k = 0; k < 2; k++) {
    Y[1 + (k << 1)] = (B[r2 + (k << 1)] - B[r1 + (k << 1)] * a21) / a22;
    Y[k << 1] = (B[r1 + (k << 1)] - Y[1 + (k << 1)] * A[2 + r1]) / A[r1];
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (mldivide.c) */
