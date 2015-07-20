/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "assemblingSVK_m_file.h"
#include "repmat.h"
#include "mldivide.h"
#include "assemblingSVK_m_file_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo dd_emlrtRSI = { 19, "repmat",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/elmat/repmat.m"
};

static emlrtRSInfo ed_emlrtRSI = { 48, "eml_assert_valid_size_arg",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo m_emlrtMCI = { 49, 13, "eml_assert_valid_size_arg",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo n_emlrtMCI = { 48, 23, "eml_assert_valid_size_arg",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

/* Function Definitions */
void repmat(real_T n, real_T b_data[28], int32_T b_size[2])
{
  boolean_T b_n;
  const mxArray *y;
  static const int32_T iv19[2] = { 1, 28 };

  const mxArray *m6;
  char_T cv22[28];
  int32_T i;
  static const char_T cv23[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  int32_T mv[2];
  int32_T outsize[2];
  int32_T jtilecol;
  int32_T iacol;
  int32_T jcol;
  int32_T k;
  static const int8_T iv20[4] = { 1, 0, 0, 1 };

  emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  if (n != muDoubleScalarFloor(n)) {
    b_n = FALSE;
  } else {
    b_n = TRUE;
  }

  if (b_n) {
  } else {
    emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m6 = mxCreateCharArray(2, iv19);
    for (i = 0; i < 28; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 28, m6, cv22);
    emlrtAssign(&y, m6);
    error(message(y, &m_emlrtMCI), &n_emlrtMCI);
    emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  mv[0] = 1;
  mv[1] = (int32_T)n;
  for (i = 0; i < 2; i++) {
    outsize[i] = mv[i] << 1;
  }

  b_size[0] = 2;
  b_size[1] = outsize[1];
  if (outsize[1] == 0) {
  } else {
    i = 0;
    for (jtilecol = 1; jtilecol <= (int32_T)n; jtilecol++) {
      iacol = 1;
      for (jcol = 0; jcol < 2; jcol++) {
        for (k = 0; k < 2; k++) {
          b_data[i] = iv20[iacol - 1];
          iacol++;
          i++;
        }
      }
    }
  }
}

/* End of code generation (repmat.c) */
