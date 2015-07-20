/*
 * assemblingSVK_m_file_initialize.c
 *
 * Code generation for function 'assemblingSVK_m_file_initialize'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "assemblingSVK_m_file.h"
#include "assemblingSVK_m_file_initialize.h"
#include "assemblingSVK_m_file_data.h"

/* Function Definitions */
void assemblingSVK_m_file_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (assemblingSVK_m_file_initialize.c) */
