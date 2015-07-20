/*
 * assemblingSVK_m_file_mex.c
 *
 * Code generation for function 'assemblingSVK_m_file'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

/* Include files */
#include "mex.h"
#include "assemblingSVK_m_file_api.h"
#include "assemblingSVK_m_file_initialize.h"
#include "assemblingSVK_m_file_terminate.h"

/* Function Declarations */
static void assemblingSVK_m_file_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "assemblingSVK_m_file", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
emlrtCTX emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void assemblingSVK_m_file_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *outputs[2];
  mxArray *inputs[10];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  /* Module initialization. */
  assemblingSVK_m_file_initialize(&emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 10, mxCHAR_CLASS, 20, "assemblingSVK_m_file");
  } else if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 20, "assemblingSVK_m_file");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  assemblingSVK_m_file_api((const mxArray**)inputs, (const mxArray**)outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  assemblingSVK_m_file_terminate();
}

void assemblingSVK_m_file_atexit_wrapper(void)
{
   assemblingSVK_m_file_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(assemblingSVK_m_file_atexit_wrapper);
  /* Dispatch the entry-point. */
  assemblingSVK_m_file_mexFunction(nlhs, plhs, nrhs, prhs);
}

mxArray *emlrtMexFcnProperties(void)
{
  const char *mexProperties[] = {
    "Version",
    "ResolvedFunctions",
    "EntryPoints"};
  const char *epProperties[] = {
    "Name",
    "NumberOfInputs",
    "NumberOfOutputs",
    "ConstantInputs"};
  mxArray *xResult = mxCreateStructMatrix(1,1,3,mexProperties);
  mxArray *xEntryPoints = mxCreateStructMatrix(1,1,4,epProperties);
  mxArray *xInputs = NULL;
  xInputs = mxCreateLogicalMatrix(1, 10);
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("assemblingSVK_m_file"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(10));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(2));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.1.0.604 (R2013a)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);

  return xResult;
}
/* End of code generation (assemblingSVK_m_file_mex.c) */
