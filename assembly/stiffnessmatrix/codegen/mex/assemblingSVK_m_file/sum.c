/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "assemblingSVK_m_file.h"
#include "sum.h"
#include "mldivide.h"
#include "assemblingSVK_m_file_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo hb_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo vb_emlrtRSI = { 17, "sum",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/datafun/sum.m"
};

static emlrtRSInfo wb_emlrtRSI = { 20, "sum",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/datafun/sum.m"
};

static emlrtRSInfo xb_emlrtRSI = { 76, "sum",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/datafun/sum.m"
};

static emlrtMCInfo g_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo h_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo i_emlrtMCI = { 18, 9, "sum",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/datafun/sum.m"
};

static emlrtMCInfo j_emlrtMCI = { 17, 19, "sum",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/datafun/sum.m"
};

static emlrtMCInfo k_emlrtMCI = { 23, 9, "sum",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/datafun/sum.m"
};

static emlrtMCInfo l_emlrtMCI = { 20, 19, "sum",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/datafun/sum.m"
};

/* Function Declarations */
static const mxArray *b_message(const mxArray *b, const mxArray *c, emlrtMCInfo *
  location);
static void check_forloop_overflow_error(void);

/* Function Definitions */
static const mxArray *b_message(const mxArray *b, const mxArray *c, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[2];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m11, 2, pArrays,
    "message", TRUE, location);
}

static void check_forloop_overflow_error(void)
{
  const mxArray *y;
  static const int32_T iv5[2] = { 1, 34 };

  const mxArray *m2;
  char_T cv6[34];
  int32_T i;
  static const char_T cv7[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv6[2] = { 1, 23 };

  char_T cv8[23];
  static const char_T cv9[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m2 = mxCreateCharArray(2, iv5);
  for (i = 0; i < 34; i++) {
    cv6[i] = cv7[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m2, cv6);
  emlrtAssign(&y, m2);
  b_y = NULL;
  m2 = mxCreateCharArray(2, iv6);
  for (i = 0; i < 23; i++) {
    cv8[i] = cv9[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m2, cv8);
  emlrtAssign(&b_y, m2);
  error(b_message(y, b_y, &g_emlrtMCI), &h_emlrtMCI);
  emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
}

void sum(const emxArray_real_T *x, real_T y_data[14], int32_T y_size[2])
{
  boolean_T overflow;
  boolean_T p;
  int32_T k;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv7[2] = { 1, 30 };

  const mxArray *m3;
  char_T cv10[30];
  int32_T i;
  static const char_T cv11[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv8[2] = { 1, 36 };

  char_T cv12[36];
  static const char_T cv13[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  uint32_T sz[2];
  int32_T ixstart;
  int32_T ix;
  int32_T iy;
  real_T s;
  overflow = FALSE;
  p = FALSE;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 2) {
      if (x->size[k] != 0) {
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      p = TRUE;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!p) {
  } else {
    overflow = TRUE;
  }

  if (!overflow) {
  } else {
    emlrtPushRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m3 = mxCreateCharArray(2, iv7);
    for (i = 0; i < 30; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 30, m3, cv10);
    emlrtAssign(&y, m3);
    error(message(y, &i_emlrtMCI), &j_emlrtMCI);
    emlrtPopRtStackR2012b(&vb_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (((x->size[0] == 1) && (x->size[1] == 1)) || (x->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    emlrtPushRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m3 = mxCreateCharArray(2, iv8);
    for (i = 0; i < 36; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m3, cv12);
    emlrtAssign(&b_y, m3);
    error(message(b_y, &k_emlrtMCI), &l_emlrtMCI);
    emlrtPopRtStackR2012b(&wb_emlrtRSI, emlrtRootTLSGlobal);
  }

  for (k = 0; k < 2; k++) {
    sz[k] = (uint32_T)x->size[k];
  }

  y_size[0] = 1;
  y_size[1] = (int32_T)sz[1];
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y_size[0] = 1;
    y_size[1] = (int32_T)sz[1];
    ixstart = (int32_T)sz[1];
    for (k = 0; k < ixstart; k++) {
      y_data[k] = 0.0;
    }
  } else {
    ix = -1;
    iy = -1;
    for (i = 1; i <= x->size[1]; i++) {
      ixstart = ix + 1;
      ix++;
      s = x->data[ixstart];
      emlrtPushRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
      if (2 > x->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        emlrtPushRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
        check_forloop_overflow_error();
        emlrtPopRtStackR2012b(&gb_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&xb_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 2; k <= x->size[0]; k++) {
        ix++;
        s += x->data[ix];
      }

      iy++;
      y_data[iy] = s;
    }
  }
}

/* End of code generation (sum.c) */
