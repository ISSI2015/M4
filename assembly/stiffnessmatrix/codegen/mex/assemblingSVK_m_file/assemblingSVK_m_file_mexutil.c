/*
 * assemblingSVK_m_file_mexutil.c
 *
 * Code generation for function 'assemblingSVK_m_file_mexutil'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "assemblingSVK_m_file.h"
#include "assemblingSVK_m_file_mexutil.h"

/* Function Definitions */
void error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", TRUE,
                        location);
}

const mxArray *message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m10;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m10, 1, &pArray,
    "message", TRUE, location);
}

/* End of code generation (assemblingSVK_m_file_mexutil.c) */
