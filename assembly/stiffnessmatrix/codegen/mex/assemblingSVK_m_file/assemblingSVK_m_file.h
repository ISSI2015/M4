/*
 * assemblingSVK_m_file.h
 *
 * Code generation for function 'assemblingSVK_m_file'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

#ifndef __ASSEMBLINGSVK_M_FILE_H__
#define __ASSEMBLINGSVK_M_FILE_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "assemblingSVK_m_file_types.h"

/* Function Declarations */
extern void assemblingSVK_m_file(const emxArray_real_T *DOF, const emxArray_real_T *trafo, const emxArray_real_T *pAll, const emxArray_real_T *t, const real_T gradientMatBase0_data[42], const int32_T gradientMatBase0_size[3], real_T lengthBasis, const real_T points_data[14], const int32_T points_size[2], const real_T weights_data[7], const int32_T weights_size[2], const emxArray_real_T *u0, const struct_T *matConst, emxArray_real_T *A, emxArray_real_T *F);
#endif
/* End of code generation (assemblingSVK_m_file.h) */
