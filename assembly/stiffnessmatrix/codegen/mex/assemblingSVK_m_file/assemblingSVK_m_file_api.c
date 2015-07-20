/*
 * assemblingSVK_m_file_api.c
 *
 * Code generation for function 'assemblingSVK_m_file_api'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "assemblingSVK_m_file.h"
#include "assemblingSVK_m_file_api.h"
#include "assemblingSVK_m_file_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo t_emlrtRTEI = { 1, 1, "assemblingSVK_m_file_api", "" };

/* Function Declarations */
static real_T ab_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(emxArray_real_T *u);
static void b_info_helper(ResolvedFunctionInfo info[201]);
static void bb_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T (**ret_data)[14], int32_T ret_size[2]);
static void c_emlrt_marshallIn(const mxArray *trafo, const char_T *identifier,
  emxArray_real_T *y);
static const mxArray *c_emlrt_marshallOut(emxArray_real_T *u);
static void c_info_helper(ResolvedFunctionInfo info[201]);
static void cb_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T (**ret_data)[7], int32_T ret_size[2]);
static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void d_info_helper(ResolvedFunctionInfo info[201]);
static void db_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void e_emlrt_marshallIn(const mxArray *pAll, const char_T *identifier,
  emxArray_real_T *y);
static void emlrt_marshallIn(const mxArray *DOF, const char_T *identifier,
  emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(ResolvedFunctionInfo u[201]);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const mxArray *t, const char_T *identifier,
  emxArray_real_T *y);
static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void i_emlrt_marshallIn(const mxArray *gradientMatBase0, const char_T
  *identifier, real_T (**y_data)[42], int32_T y_size[3]);
static void info_helper(ResolvedFunctionInfo info[201]);
static void j_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T (**y_data)[42], int32_T y_size[3]);
static real_T k_emlrt_marshallIn(const mxArray *lengthBasis, const char_T
  *identifier);
static real_T l_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void m_emlrt_marshallIn(const mxArray *points, const char_T *identifier,
  real_T (**y_data)[14], int32_T y_size[2]);
static void n_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T (**y_data)[14], int32_T y_size[2]);
static void o_emlrt_marshallIn(const mxArray *weights, const char_T *identifier,
  real_T (**y_data)[7], int32_T y_size[2]);
static void p_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T (**y_data)[7], int32_T y_size[2]);
static void q_emlrt_marshallIn(const mxArray *u0, const char_T *identifier,
  emxArray_real_T *y);
static void r_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static struct_T s_emlrt_marshallIn(const mxArray *matConst, const char_T
  *identifier);
static struct_T t_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void u_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void v_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void w_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void x_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void y_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T (**ret_data)[42], int32_T ret_size[3]);

/* Function Definitions */
static real_T ab_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  u_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv22[2] = { 0, 0 };

  const mxArray *m8;
  y = NULL;
  m8 = mxCreateNumericArray(2, (int32_T *)&iv22, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m8, (void *)u->data);
  mxSetDimensions((mxArray *)m8, u->size, 2);
  emlrtAssign(&y, m8);
  return y;
}

static void b_info_helper(ResolvedFunctionInfo info[201])
{
  info[64].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[64].name = "isequal";
  info[64].dominantType = "double";
  info[64].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[64].fileTimeLo = 1416482021U;
  info[64].fileTimeHi = 0U;
  info[64].mFileTimeLo = 0U;
  info[64].mFileTimeHi = 0U;
  info[65].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m";
  info[65].name = "eml_isequal_core";
  info[65].dominantType = "double";
  info[65].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m";
  info[65].fileTimeLo = 1416482023U;
  info[65].fileTimeHi = 0U;
  info[65].mFileTimeLo = 0U;
  info[65].mFileTimeHi = 0U;
  info[66].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[66].name = "eml_const_nonsingleton_dim";
  info[66].dominantType = "double";
  info[66].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m";
  info[66].fileTimeLo = 1416482023U;
  info[66].fileTimeHi = 0U;
  info[66].mFileTimeLo = 0U;
  info[66].mFileTimeHi = 0U;
  info[67].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[67].name = "eml_scalar_eg";
  info[67].dominantType = "double";
  info[67].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[67].fileTimeLo = 1416482023U;
  info[67].fileTimeHi = 0U;
  info[67].mFileTimeLo = 0U;
  info[67].mFileTimeHi = 0U;
  info[68].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[68].name = "eml_index_class";
  info[68].dominantType = "";
  info[68].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[68].fileTimeLo = 1416482023U;
  info[68].fileTimeHi = 0U;
  info[68].mFileTimeLo = 0U;
  info[68].mFileTimeHi = 0U;
  info[69].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[69].name = "eml_matrix_vstride";
  info[69].dominantType = "double";
  info[69].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[69].fileTimeLo = 1416482024U;
  info[69].fileTimeHi = 0U;
  info[69].mFileTimeLo = 0U;
  info[69].mFileTimeHi = 0U;
  info[70].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[70].name = "eml_index_minus";
  info[70].dominantType = "double";
  info[70].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[70].fileTimeLo = 1416482023U;
  info[70].fileTimeHi = 0U;
  info[70].mFileTimeLo = 0U;
  info[70].mFileTimeHi = 0U;
  info[71].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[71].name = "eml_index_class";
  info[71].dominantType = "";
  info[71].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[71].fileTimeLo = 1416482023U;
  info[71].fileTimeHi = 0U;
  info[71].mFileTimeLo = 0U;
  info[71].mFileTimeHi = 0U;
  info[72].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_vstride.m";
  info[72].name = "eml_size_prod";
  info[72].dominantType = "double";
  info[72].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[72].fileTimeLo = 1416482023U;
  info[72].fileTimeHi = 0U;
  info[72].mFileTimeLo = 0U;
  info[72].mFileTimeHi = 0U;
  info[73].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[73].name = "eml_index_class";
  info[73].dominantType = "";
  info[73].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[73].fileTimeLo = 1416482023U;
  info[73].fileTimeHi = 0U;
  info[73].mFileTimeLo = 0U;
  info[73].mFileTimeHi = 0U;
  info[74].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[74].name = "eml_matrix_npages";
  info[74].dominantType = "double";
  info[74].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[74].fileTimeLo = 1416482023U;
  info[74].fileTimeHi = 0U;
  info[74].mFileTimeLo = 0U;
  info[74].mFileTimeHi = 0U;
  info[75].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[75].name = "eml_index_plus";
  info[75].dominantType = "double";
  info[75].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[75].fileTimeLo = 1416482023U;
  info[75].fileTimeHi = 0U;
  info[75].mFileTimeLo = 0U;
  info[75].mFileTimeHi = 0U;
  info[76].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[76].name = "eml_index_class";
  info[76].dominantType = "";
  info[76].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[76].fileTimeLo = 1416482023U;
  info[76].fileTimeHi = 0U;
  info[76].mFileTimeLo = 0U;
  info[76].mFileTimeHi = 0U;
  info[77].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_matrix_npages.m";
  info[77].name = "eml_size_prod";
  info[77].dominantType = "double";
  info[77].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[77].fileTimeLo = 1416482023U;
  info[77].fileTimeHi = 0U;
  info[77].mFileTimeLo = 0U;
  info[77].mFileTimeHi = 0U;
  info[78].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_size_prod.m";
  info[78].name = "eml_index_times";
  info[78].dominantType = "double";
  info[78].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[78].fileTimeLo = 1416482023U;
  info[78].fileTimeHi = 0U;
  info[78].mFileTimeLo = 0U;
  info[78].mFileTimeHi = 0U;
  info[79].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[79].name = "eml_int_forloop_overflow_check";
  info[79].dominantType = "";
  info[79].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[79].fileTimeLo = 1416482023U;
  info[79].fileTimeHi = 0U;
  info[79].mFileTimeLo = 0U;
  info[79].mFileTimeHi = 0U;
  info[80].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[80].name = "eml_index_plus";
  info[80].dominantType = "double";
  info[80].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[80].fileTimeLo = 1416482023U;
  info[80].fileTimeHi = 0U;
  info[80].mFileTimeLo = 0U;
  info[80].mFileTimeHi = 0U;
  info[81].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[81].name = "eml_index_plus";
  info[81].dominantType = "coder.internal.indexInt";
  info[81].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[81].fileTimeLo = 1416482023U;
  info[81].fileTimeHi = 0U;
  info[81].mFileTimeLo = 0U;
  info[81].mFileTimeHi = 0U;
  info[82].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!giveSigma";
  info[82].name = "mrdivide";
  info[82].dominantType = "double";
  info[82].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[82].fileTimeLo = 1416482024U;
  info[82].fileTimeHi = 0U;
  info[82].mFileTimeLo = 1416482024U;
  info[82].mFileTimeHi = 0U;
  info[83].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!giveSigma";
  info[83].name = "mtimes";
  info[83].dominantType = "double";
  info[83].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[83].fileTimeLo = 1416482024U;
  info[83].fileTimeHi = 0U;
  info[83].mFileTimeLo = 0U;
  info[83].mFileTimeHi = 0U;
  info[84].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!giveSigma";
  info[84].name = "trace";
  info[84].dominantType = "double";
  info[84].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/trace.m";
  info[84].fileTimeLo = 1416482022U;
  info[84].fileTimeHi = 0U;
  info[84].mFileTimeLo = 0U;
  info[84].mFileTimeHi = 0U;
  info[85].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/trace.m";
  info[85].name = "eml_scalar_eg";
  info[85].dominantType = "double";
  info[85].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[85].fileTimeLo = 1416482023U;
  info[85].fileTimeHi = 0U;
  info[85].mFileTimeLo = 0U;
  info[85].mFileTimeHi = 0U;
  info[86].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!giveSigma";
  info[86].name = "eye";
  info[86].dominantType = "double";
  info[86].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m";
  info[86].fileTimeLo = 1416482022U;
  info[86].fileTimeHi = 0U;
  info[86].mFileTimeLo = 0U;
  info[86].mFileTimeHi = 0U;
  info[87].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!localAssemblingSVK";
  info[87].name = "length";
  info[87].dominantType = "double";
  info[87].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[87].fileTimeLo = 1416482022U;
  info[87].fileTimeHi = 0U;
  info[87].mFileTimeLo = 0U;
  info[87].mFileTimeHi = 0U;
  info[88].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!localAssemblingSVK";
  info[88].name = "mtimes";
  info[88].dominantType = "double";
  info[88].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[88].fileTimeLo = 1416482024U;
  info[88].fileTimeHi = 0U;
  info[88].mFileTimeLo = 0U;
  info[88].mFileTimeHi = 0U;
  info[89].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!strain2Stress";
  info[89].name = "mrdivide";
  info[89].dominantType = "double";
  info[89].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[89].fileTimeLo = 1416482024U;
  info[89].fileTimeHi = 0U;
  info[89].mFileTimeLo = 1416482024U;
  info[89].mFileTimeHi = 0U;
  info[90].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!strain2Stress";
  info[90].name = "mtimes";
  info[90].dominantType = "double";
  info[90].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[90].fileTimeLo = 1416482024U;
  info[90].fileTimeHi = 0U;
  info[90].mFileTimeLo = 0U;
  info[90].mFileTimeHi = 0U;
  info[91].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!strain2Stress";
  info[91].name = "eye";
  info[91].dominantType = "double";
  info[91].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m";
  info[91].fileTimeLo = 1416482022U;
  info[91].fileTimeHi = 0U;
  info[91].mFileTimeLo = 0U;
  info[91].mFileTimeHi = 0U;
  info[92].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!strain2Stress";
  info[92].name = "mldivide";
  info[92].dominantType = "double";
  info[92].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mldivide.p";
  info[92].fileTimeLo = 1416482024U;
  info[92].fileTimeHi = 0U;
  info[92].mFileTimeLo = 1416482024U;
  info[92].mFileTimeHi = 0U;
  info[93].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!getStressSVK";
  info[93].name = "mtimes";
  info[93].dominantType = "double";
  info[93].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[93].fileTimeLo = 1416482024U;
  info[93].fileTimeHi = 0U;
  info[93].mFileTimeLo = 0U;
  info[93].mFileTimeHi = 0U;
  info[94].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!getStressSVK";
  info[94].name = "eye";
  info[94].dominantType = "double";
  info[94].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m";
  info[94].fileTimeLo = 1416482022U;
  info[94].fileTimeHi = 0U;
  info[94].mFileTimeLo = 0U;
  info[94].mFileTimeHi = 0U;
  info[95].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!getStressSVK";
  info[95].name = "trace";
  info[95].dominantType = "double";
  info[95].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/trace.m";
  info[95].fileTimeLo = 1416482022U;
  info[95].fileTimeHi = 0U;
  info[95].mFileTimeLo = 0U;
  info[95].mFileTimeHi = 0U;
  info[96].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!strain2Stress";
  info[96].name = "det";
  info[96].dominantType = "double";
  info[96].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/det.m";
  info[96].fileTimeLo = 1416482022U;
  info[96].fileTimeHi = 0U;
  info[96].mFileTimeLo = 0U;
  info[96].mFileTimeHi = 0U;
  info[97].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/det.m";
  info[97].name = "eml_index_class";
  info[97].dominantType = "";
  info[97].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[97].fileTimeLo = 1416482023U;
  info[97].fileTimeHi = 0U;
  info[97].mFileTimeLo = 0U;
  info[97].mFileTimeHi = 0U;
  info[98].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/det.m";
  info[98].name = "eml_xgetrf";
  info[98].dominantType = "double";
  info[98].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/eml_xgetrf.m";
  info[98].fileTimeLo = 1416482023U;
  info[98].fileTimeHi = 0U;
  info[98].mFileTimeLo = 0U;
  info[98].mFileTimeHi = 0U;
  info[99].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/eml_xgetrf.m";
  info[99].name = "eml_lapack_xgetrf";
  info[99].dominantType = "double";
  info[99].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/internal/eml_lapack_xgetrf.m";
  info[99].fileTimeLo = 1416482023U;
  info[99].fileTimeHi = 0U;
  info[99].mFileTimeLo = 0U;
  info[99].mFileTimeHi = 0U;
  info[100].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/internal/eml_lapack_xgetrf.m";
  info[100].name = "eml_matlab_zgetrf";
  info[100].dominantType = "double";
  info[100].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[100].fileTimeLo = 1416482023U;
  info[100].fileTimeHi = 0U;
  info[100].mFileTimeLo = 0U;
  info[100].mFileTimeHi = 0U;
  info[101].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[101].name = "realmin";
  info[101].dominantType = "char";
  info[101].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmin.m";
  info[101].fileTimeLo = 1416482022U;
  info[101].fileTimeHi = 0U;
  info[101].mFileTimeLo = 0U;
  info[101].mFileTimeHi = 0U;
  info[102].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmin.m";
  info[102].name = "eml_realmin";
  info[102].dominantType = "char";
  info[102].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m";
  info[102].fileTimeLo = 1416482023U;
  info[102].fileTimeHi = 0U;
  info[102].mFileTimeLo = 0U;
  info[102].mFileTimeHi = 0U;
  info[103].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m";
  info[103].name = "eml_float_model";
  info[103].dominantType = "char";
  info[103].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[103].fileTimeLo = 1416482023U;
  info[103].fileTimeHi = 0U;
  info[103].mFileTimeLo = 0U;
  info[103].mFileTimeHi = 0U;
  info[104].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[104].name = "eps";
  info[104].dominantType = "char";
  info[104].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[104].fileTimeLo = 1416482022U;
  info[104].fileTimeHi = 0U;
  info[104].mFileTimeLo = 0U;
  info[104].mFileTimeHi = 0U;
  info[105].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[105].name = "eml_is_float_class";
  info[105].dominantType = "char";
  info[105].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[105].fileTimeLo = 1416482023U;
  info[105].fileTimeHi = 0U;
  info[105].mFileTimeLo = 0U;
  info[105].mFileTimeHi = 0U;
  info[106].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m";
  info[106].name = "eml_eps";
  info[106].dominantType = "char";
  info[106].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[106].fileTimeLo = 1416482023U;
  info[106].fileTimeHi = 0U;
  info[106].mFileTimeLo = 0U;
  info[106].mFileTimeHi = 0U;
  info[107].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m";
  info[107].name = "eml_float_model";
  info[107].dominantType = "char";
  info[107].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[107].fileTimeLo = 1416482023U;
  info[107].fileTimeHi = 0U;
  info[107].mFileTimeLo = 0U;
  info[107].mFileTimeHi = 0U;
  info[108].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[108].name = "min";
  info[108].dominantType = "coder.internal.indexInt";
  info[108].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[108].fileTimeLo = 1416482025U;
  info[108].fileTimeHi = 0U;
  info[108].mFileTimeLo = 0U;
  info[108].mFileTimeHi = 0U;
  info[109].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[109].name = "eml_scalar_eg";
  info[109].dominantType = "coder.internal.indexInt";
  info[109].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[109].fileTimeLo = 1416482023U;
  info[109].fileTimeHi = 0U;
  info[109].mFileTimeLo = 0U;
  info[109].mFileTimeHi = 0U;
  info[110].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[110].name = "eml_scalexp_alloc";
  info[110].dominantType = "coder.internal.indexInt";
  info[110].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[110].fileTimeLo = 1416482023U;
  info[110].fileTimeHi = 0U;
  info[110].mFileTimeLo = 0U;
  info[110].mFileTimeHi = 0U;
  info[111].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[111].name = "eml_scalar_eg";
  info[111].dominantType = "coder.internal.indexInt";
  info[111].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[111].fileTimeLo = 1416482023U;
  info[111].fileTimeHi = 0U;
  info[111].mFileTimeLo = 0U;
  info[111].mFileTimeHi = 0U;
  info[112].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[112].name = "colon";
  info[112].dominantType = "double";
  info[112].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[112].fileTimeLo = 1416482024U;
  info[112].fileTimeHi = 0U;
  info[112].mFileTimeLo = 0U;
  info[112].mFileTimeHi = 0U;
  info[113].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[113].name = "colon";
  info[113].dominantType = "double";
  info[113].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[113].fileTimeLo = 1416482024U;
  info[113].fileTimeHi = 0U;
  info[113].mFileTimeLo = 0U;
  info[113].mFileTimeHi = 0U;
  info[114].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m";
  info[114].name = "floor";
  info[114].dominantType = "double";
  info[114].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[114].fileTimeLo = 1416482025U;
  info[114].fileTimeHi = 0U;
  info[114].mFileTimeLo = 0U;
  info[114].mFileTimeHi = 0U;
  info[115].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  info[115].name = "eml_scalar_floor";
  info[115].dominantType = "double";
  info[115].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  info[115].fileTimeLo = 1416482025U;
  info[115].fileTimeHi = 0U;
  info[115].mFileTimeLo = 0U;
  info[115].mFileTimeHi = 0U;
  info[116].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange";
  info[116].name = "intmin";
  info[116].dominantType = "char";
  info[116].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[116].fileTimeLo = 1416482022U;
  info[116].fileTimeHi = 0U;
  info[116].mFileTimeLo = 0U;
  info[116].mFileTimeHi = 0U;
  info[117].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange";
  info[117].name = "intmax";
  info[117].dominantType = "char";
  info[117].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[117].fileTimeLo = 1416482022U;
  info[117].fileTimeHi = 0U;
  info[117].mFileTimeLo = 0U;
  info[117].mFileTimeHi = 0U;
  info[118].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher";
  info[118].name = "intmin";
  info[118].dominantType = "char";
  info[118].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[118].fileTimeLo = 1416482022U;
  info[118].fileTimeHi = 0U;
  info[118].mFileTimeLo = 0U;
  info[118].mFileTimeHi = 0U;
  info[119].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher";
  info[119].name = "intmax";
  info[119].dominantType = "char";
  info[119].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[119].fileTimeLo = 1416482022U;
  info[119].fileTimeHi = 0U;
  info[119].mFileTimeLo = 0U;
  info[119].mFileTimeHi = 0U;
  info[120].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_integer_colon_dispatcher";
  info[120].name = "eml_isa_uint";
  info[120].dominantType = "coder.internal.indexInt";
  info[120].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isa_uint.m";
  info[120].fileTimeLo = 1416482023U;
  info[120].fileTimeHi = 0U;
  info[120].mFileTimeLo = 0U;
  info[120].mFileTimeHi = 0U;
  info[121].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[121].name = "eml_unsigned_class";
  info[121].dominantType = "char";
  info[121].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[121].fileTimeLo = 1416482023U;
  info[121].fileTimeHi = 0U;
  info[121].mFileTimeLo = 0U;
  info[121].mFileTimeHi = 0U;
  info[122].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_unsigned_class.m";
  info[122].name = "eml_index_class";
  info[122].dominantType = "";
  info[122].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[122].fileTimeLo = 1416482023U;
  info[122].fileTimeHi = 0U;
  info[122].mFileTimeLo = 0U;
  info[122].mFileTimeHi = 0U;
  info[123].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[123].name = "eml_index_class";
  info[123].dominantType = "";
  info[123].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[123].fileTimeLo = 1416482023U;
  info[123].fileTimeHi = 0U;
  info[123].mFileTimeLo = 0U;
  info[123].mFileTimeHi = 0U;
  info[124].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[124].name = "intmax";
  info[124].dominantType = "char";
  info[124].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[124].fileTimeLo = 1416482022U;
  info[124].fileTimeHi = 0U;
  info[124].mFileTimeLo = 0U;
  info[124].mFileTimeHi = 0U;
  info[125].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[125].name = "eml_isa_uint";
  info[125].dominantType = "coder.internal.indexInt";
  info[125].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isa_uint.m";
  info[125].fileTimeLo = 1416482023U;
  info[125].fileTimeHi = 0U;
  info[125].mFileTimeLo = 0U;
  info[125].mFileTimeHi = 0U;
  info[126].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!integer_colon_length_nonnegd";
  info[126].name = "eml_index_plus";
  info[126].dominantType = "double";
  info[126].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[126].fileTimeLo = 1416482023U;
  info[126].fileTimeHi = 0U;
  info[126].mFileTimeLo = 0U;
  info[126].mFileTimeHi = 0U;
  info[127].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[127].name = "eml_index_class";
  info[127].dominantType = "";
  info[127].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[127].fileTimeLo = 1416482023U;
  info[127].fileTimeHi = 0U;
  info[127].mFileTimeLo = 0U;
  info[127].mFileTimeHi = 0U;
}

static void bb_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T (**ret_data)[14], int32_T ret_size[2])
{
  int32_T iv35[2];
  boolean_T bv10[2];
  int32_T i37;
  static const boolean_T bv11[2] = { FALSE, TRUE };

  int32_T iv36[2];
  for (i37 = 0; i37 < 2; i37++) {
    iv35[i37] = 2 + 5 * i37;
    bv10[i37] = bv11[i37];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv35, bv10, iv36);
  ret_size[0] = iv36[0];
  ret_size[1] = iv36[1];
  *ret_data = (real_T (*)[14])mxGetData(src);
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const mxArray *trafo, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(emlrtAlias(trafo), &thisId, y);
  emlrtDestroyArray(&trafo);
}

static const mxArray *c_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv23[1] = { 0 };

  const mxArray *m9;
  y = NULL;
  m9 = mxCreateNumericArray(1, (int32_T *)&iv23, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m9, (void *)u->data);
  mxSetDimensions((mxArray *)m9, u->size, 1);
  emlrtAssign(&y, m9);
  return y;
}

static void c_info_helper(ResolvedFunctionInfo info[201])
{
  info[128].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[128].name = "eml_index_plus";
  info[128].dominantType = "double";
  info[128].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[128].fileTimeLo = 1416482023U;
  info[128].fileTimeHi = 0U;
  info[128].mFileTimeLo = 0U;
  info[128].mFileTimeHi = 0U;
  info[129].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[129].name = "eml_index_minus";
  info[129].dominantType = "double";
  info[129].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[129].fileTimeLo = 1416482023U;
  info[129].fileTimeHi = 0U;
  info[129].mFileTimeLo = 0U;
  info[129].mFileTimeHi = 0U;
  info[130].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[130].name = "eml_index_minus";
  info[130].dominantType = "coder.internal.indexInt";
  info[130].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[130].fileTimeLo = 1416482023U;
  info[130].fileTimeHi = 0U;
  info[130].mFileTimeLo = 0U;
  info[130].mFileTimeHi = 0U;
  info[131].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[131].name = "eml_index_times";
  info[131].dominantType = "coder.internal.indexInt";
  info[131].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[131].fileTimeLo = 1416482023U;
  info[131].fileTimeHi = 0U;
  info[131].mFileTimeLo = 0U;
  info[131].mFileTimeHi = 0U;
  info[132].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[132].name = "eml_index_plus";
  info[132].dominantType = "coder.internal.indexInt";
  info[132].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[132].fileTimeLo = 1416482023U;
  info[132].fileTimeHi = 0U;
  info[132].mFileTimeLo = 0U;
  info[132].mFileTimeHi = 0U;
  info[133].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[133].name = "eml_ixamax";
  info[133].dominantType = "double";
  info[133].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_ixamax.m";
  info[133].fileTimeLo = 1416482023U;
  info[133].fileTimeHi = 0U;
  info[133].mFileTimeLo = 0U;
  info[133].mFileTimeHi = 0U;
  info[134].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_ixamax.m";
  info[134].name = "eml_blas_inline";
  info[134].dominantType = "";
  info[134].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  info[134].fileTimeLo = 1416482023U;
  info[134].fileTimeHi = 0U;
  info[134].mFileTimeLo = 0U;
  info[134].mFileTimeHi = 0U;
  info[135].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_ixamax.m";
  info[135].name = "eml_index_class";
  info[135].dominantType = "";
  info[135].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[135].fileTimeLo = 1416482023U;
  info[135].fileTimeHi = 0U;
  info[135].mFileTimeLo = 0U;
  info[135].mFileTimeHi = 0U;
  info[136].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_ixamax.m";
  info[136].name = "eml_refblas_ixamax";
  info[136].dominantType = "double";
  info[136].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_ixamax.m";
  info[136].fileTimeLo = 1416482024U;
  info[136].fileTimeHi = 0U;
  info[136].mFileTimeLo = 0U;
  info[136].mFileTimeHi = 0U;
  info[137].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_ixamax.m";
  info[137].name = "eml_index_class";
  info[137].dominantType = "";
  info[137].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[137].fileTimeLo = 1416482023U;
  info[137].fileTimeHi = 0U;
  info[137].mFileTimeLo = 0U;
  info[137].mFileTimeHi = 0U;
  info[138].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_ixamax.m";
  info[138].name = "eml_xcabs1";
  info[138].dominantType = "double";
  info[138].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xcabs1.m";
  info[138].fileTimeLo = 1416482023U;
  info[138].fileTimeHi = 0U;
  info[138].mFileTimeLo = 0U;
  info[138].mFileTimeHi = 0U;
  info[139].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_ixamax.m";
  info[139].name = "eml_index_plus";
  info[139].dominantType = "coder.internal.indexInt";
  info[139].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[139].fileTimeLo = 1416482023U;
  info[139].fileTimeHi = 0U;
  info[139].mFileTimeLo = 0U;
  info[139].mFileTimeHi = 0U;
  info[140].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[140].name = "eml_xswap";
  info[140].dominantType = "double";
  info[140].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xswap.m";
  info[140].fileTimeLo = 1416482023U;
  info[140].fileTimeHi = 0U;
  info[140].mFileTimeLo = 0U;
  info[140].mFileTimeHi = 0U;
  info[141].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xswap.m";
  info[141].name = "eml_blas_inline";
  info[141].dominantType = "";
  info[141].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  info[141].fileTimeLo = 1416482023U;
  info[141].fileTimeHi = 0U;
  info[141].mFileTimeLo = 0U;
  info[141].mFileTimeHi = 0U;
  info[142].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xswap.m";
  info[142].name = "eml_index_class";
  info[142].dominantType = "";
  info[142].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[142].fileTimeLo = 1416482023U;
  info[142].fileTimeHi = 0U;
  info[142].mFileTimeLo = 0U;
  info[142].mFileTimeHi = 0U;
  info[143].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xswap.m";
  info[143].name = "eml_refblas_xswap";
  info[143].dominantType = "double";
  info[143].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m";
  info[143].fileTimeLo = 1416482024U;
  info[143].fileTimeHi = 0U;
  info[143].mFileTimeLo = 0U;
  info[143].mFileTimeHi = 0U;
  info[144].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m";
  info[144].name = "eml_index_class";
  info[144].dominantType = "";
  info[144].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[144].fileTimeLo = 1416482023U;
  info[144].fileTimeHi = 0U;
  info[144].mFileTimeLo = 0U;
  info[144].mFileTimeHi = 0U;
  info[145].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m";
  info[145].name = "abs";
  info[145].dominantType = "coder.internal.indexInt";
  info[145].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[145].fileTimeLo = 1416482025U;
  info[145].fileTimeHi = 0U;
  info[145].mFileTimeLo = 0U;
  info[145].mFileTimeHi = 0U;
  info[146].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[146].name = "eml_scalar_abs";
  info[146].dominantType = "coder.internal.indexInt";
  info[146].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[146].fileTimeLo = 1416482025U;
  info[146].fileTimeHi = 0U;
  info[146].mFileTimeLo = 0U;
  info[146].mFileTimeHi = 0U;
  info[147].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m";
  info[147].name = "eml_int_forloop_overflow_check";
  info[147].dominantType = "";
  info[147].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[147].fileTimeLo = 1416482023U;
  info[147].fileTimeHi = 0U;
  info[147].mFileTimeLo = 0U;
  info[147].mFileTimeHi = 0U;
  info[148].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xswap.m";
  info[148].name = "eml_index_plus";
  info[148].dominantType = "coder.internal.indexInt";
  info[148].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[148].fileTimeLo = 1416482023U;
  info[148].fileTimeHi = 0U;
  info[148].mFileTimeLo = 0U;
  info[148].mFileTimeHi = 0U;
  info[149].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[149].name = "eml_div";
  info[149].dominantType = "double";
  info[149].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  info[149].fileTimeLo = 1416482023U;
  info[149].fileTimeHi = 0U;
  info[149].mFileTimeLo = 0U;
  info[149].mFileTimeHi = 0U;
  info[150].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgetrf.m";
  info[150].name = "eml_xgeru";
  info[150].dominantType = "double";
  info[150].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xgeru.m";
  info[150].fileTimeLo = 1416482024U;
  info[150].fileTimeHi = 0U;
  info[150].mFileTimeLo = 0U;
  info[150].mFileTimeHi = 0U;
  info[151].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xgeru.m";
  info[151].name = "eml_blas_inline";
  info[151].dominantType = "";
  info[151].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  info[151].fileTimeLo = 1416482023U;
  info[151].fileTimeHi = 0U;
  info[151].mFileTimeLo = 0U;
  info[151].mFileTimeHi = 0U;
  info[152].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xgeru.m";
  info[152].name = "eml_xger";
  info[152].dominantType = "double";
  info[152].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xger.m";
  info[152].fileTimeLo = 1416482024U;
  info[152].fileTimeHi = 0U;
  info[152].mFileTimeLo = 0U;
  info[152].mFileTimeHi = 0U;
  info[153].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xger.m";
  info[153].name = "eml_blas_inline";
  info[153].dominantType = "";
  info[153].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  info[153].fileTimeLo = 1416482023U;
  info[153].fileTimeHi = 0U;
  info[153].mFileTimeLo = 0U;
  info[153].mFileTimeHi = 0U;
  info[154].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xger.m!below_threshold";
  info[154].name = "mtimes";
  info[154].dominantType = "double";
  info[154].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[154].fileTimeLo = 1416482024U;
  info[154].fileTimeHi = 0U;
  info[154].mFileTimeLo = 0U;
  info[154].mFileTimeHi = 0U;
  info[155].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xger.m";
  info[155].name = "eml_index_class";
  info[155].dominantType = "";
  info[155].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[155].fileTimeLo = 1416482023U;
  info[155].fileTimeHi = 0U;
  info[155].mFileTimeLo = 0U;
  info[155].mFileTimeHi = 0U;
  info[156].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xger.m";
  info[156].name = "eml_refblas_xger";
  info[156].dominantType = "double";
  info[156].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xger.m";
  info[156].fileTimeLo = 1416482024U;
  info[156].fileTimeHi = 0U;
  info[156].mFileTimeLo = 0U;
  info[156].mFileTimeHi = 0U;
  info[157].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xger.m";
  info[157].name = "eml_refblas_xgerx";
  info[157].dominantType = "char";
  info[157].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgerx.m";
  info[157].fileTimeLo = 1416482024U;
  info[157].fileTimeHi = 0U;
  info[157].mFileTimeLo = 0U;
  info[157].mFileTimeHi = 0U;
  info[158].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgerx.m";
  info[158].name = "eml_index_class";
  info[158].dominantType = "";
  info[158].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[158].fileTimeLo = 1416482023U;
  info[158].fileTimeHi = 0U;
  info[158].mFileTimeLo = 0U;
  info[158].mFileTimeHi = 0U;
  info[159].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgerx.m";
  info[159].name = "abs";
  info[159].dominantType = "coder.internal.indexInt";
  info[159].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[159].fileTimeLo = 1416482025U;
  info[159].fileTimeHi = 0U;
  info[159].mFileTimeLo = 0U;
  info[159].mFileTimeHi = 0U;
  info[160].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgerx.m";
  info[160].name = "eml_index_minus";
  info[160].dominantType = "double";
  info[160].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[160].fileTimeLo = 1416482023U;
  info[160].fileTimeHi = 0U;
  info[160].mFileTimeLo = 0U;
  info[160].mFileTimeHi = 0U;
  info[161].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgerx.m";
  info[161].name = "eml_index_plus";
  info[161].dominantType = "double";
  info[161].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[161].fileTimeLo = 1416482023U;
  info[161].fileTimeHi = 0U;
  info[161].mFileTimeLo = 0U;
  info[161].mFileTimeHi = 0U;
  info[162].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgerx.m";
  info[162].name = "eml_index_plus";
  info[162].dominantType = "coder.internal.indexInt";
  info[162].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[162].fileTimeLo = 1416482023U;
  info[162].fileTimeHi = 0U;
  info[162].mFileTimeLo = 0U;
  info[162].mFileTimeHi = 0U;
  info[163].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgerx.m";
  info[163].name = "eml_int_forloop_overflow_check";
  info[163].dominantType = "";
  info[163].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[163].fileTimeLo = 1416482023U;
  info[163].fileTimeHi = 0U;
  info[163].mFileTimeLo = 0U;
  info[163].mFileTimeHi = 0U;
  info[164].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/det.m";
  info[164].name = "mtimes";
  info[164].dominantType = "double";
  info[164].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[164].fileTimeLo = 1416482024U;
  info[164].fileTimeHi = 0U;
  info[164].mFileTimeLo = 0U;
  info[164].mFileTimeHi = 0U;
  info[165].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!strain2Stress";
  info[165].name = "abs";
  info[165].dominantType = "double";
  info[165].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[165].fileTimeLo = 1416482025U;
  info[165].fileTimeHi = 0U;
  info[165].mFileTimeLo = 0U;
  info[165].mFileTimeHi = 0U;
  info[166].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!symmetrizeStrain";
  info[166].name = "mrdivide";
  info[166].dominantType = "double";
  info[166].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[166].fileTimeLo = 1416482024U;
  info[166].fileTimeHi = 0U;
  info[166].mFileTimeLo = 1416482024U;
  info[166].mFileTimeHi = 0U;
  info[167].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!symmetrizeStrain";
  info[167].name = "mtimes";
  info[167].dominantType = "double";
  info[167].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[167].fileTimeLo = 1416482024U;
  info[167].fileTimeHi = 0U;
  info[167].mFileTimeLo = 0U;
  info[167].mFileTimeHi = 0U;
  info[168].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!symmetrizeStrain";
  info[168].name = "eye";
  info[168].dominantType = "double";
  info[168].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m";
  info[168].fileTimeLo = 1416482022U;
  info[168].fileTimeHi = 0U;
  info[168].mFileTimeLo = 0U;
  info[168].mFileTimeHi = 0U;
  info[169].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!symmetrizeStrain";
  info[169].name = "mldivide";
  info[169].dominantType = "double";
  info[169].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mldivide.p";
  info[169].fileTimeLo = 1416482024U;
  info[169].fileTimeHi = 0U;
  info[169].mFileTimeLo = 1416482024U;
  info[169].mFileTimeHi = 0U;
  info[170].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!matrixTraceFunA";
  info[170].name = "mrdivide";
  info[170].dominantType = "double";
  info[170].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[170].fileTimeLo = 1416482024U;
  info[170].fileTimeHi = 0U;
  info[170].mFileTimeLo = 1416482024U;
  info[170].mFileTimeHi = 0U;
  info[171].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!matrixTraceFunA";
  info[171].name = "mtimes";
  info[171].dominantType = "double";
  info[171].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[171].fileTimeLo = 1416482024U;
  info[171].fileTimeHi = 0U;
  info[171].mFileTimeLo = 0U;
  info[171].mFileTimeHi = 0U;
  info[172].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!matrixTraceFunA";
  info[172].name = "trace";
  info[172].dominantType = "double";
  info[172].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/trace.m";
  info[172].fileTimeLo = 1416482022U;
  info[172].fileTimeHi = 0U;
  info[172].mFileTimeLo = 0U;
  info[172].mFileTimeHi = 0U;
  info[173].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!localAssemblingF";
  info[173].name = "length";
  info[173].dominantType = "double";
  info[173].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[173].fileTimeLo = 1416482022U;
  info[173].fileTimeHi = 0U;
  info[173].mFileTimeLo = 0U;
  info[173].mFileTimeHi = 0U;
  info[174].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!trafoDeterminant";
  info[174].name = "mrdivide";
  info[174].dominantType = "double";
  info[174].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[174].fileTimeLo = 1416482024U;
  info[174].fileTimeHi = 0U;
  info[174].mFileTimeLo = 1416482024U;
  info[174].mFileTimeHi = 0U;
  info[175].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!trafoDeterminant";
  info[175].name = "mtimes";
  info[175].dominantType = "double";
  info[175].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[175].fileTimeLo = 1416482024U;
  info[175].fileTimeHi = 0U;
  info[175].mFileTimeLo = 0U;
  info[175].mFileTimeHi = 0U;
  info[176].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!trafoDeterminant";
  info[176].name = "det";
  info[176].dominantType = "double";
  info[176].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/det.m";
  info[176].fileTimeLo = 1416482022U;
  info[176].fileTimeHi = 0U;
  info[176].mFileTimeLo = 0U;
  info[176].mFileTimeHi = 0U;
  info[177].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!trafoDeterminant";
  info[177].name = "abs";
  info[177].dominantType = "double";
  info[177].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[177].fileTimeLo = 1416482025U;
  info[177].fileTimeHi = 0U;
  info[177].mFileTimeLo = 0U;
  info[177].mFileTimeHi = 0U;
  info[178].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!localAssemblingF";
  info[178].name = "mtimes";
  info[178].dominantType = "double";
  info[178].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[178].fileTimeLo = 1416482024U;
  info[178].fileTimeHi = 0U;
  info[178].mFileTimeLo = 0U;
  info[178].mFileTimeHi = 0U;
  info[179].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!localAssemblingF";
  info[179].name = "eye";
  info[179].dominantType = "double";
  info[179].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m";
  info[179].fileTimeLo = 1416482022U;
  info[179].fileTimeHi = 0U;
  info[179].mFileTimeLo = 0U;
  info[179].mFileTimeHi = 0U;
  info[180].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!localAssemblingF";
  info[180].name = "mldivide";
  info[180].dominantType = "double";
  info[180].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mldivide.p";
  info[180].fileTimeLo = 1416482024U;
  info[180].fileTimeHi = 0U;
  info[180].mFileTimeLo = 1416482024U;
  info[180].mFileTimeHi = 0U;
  info[181].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!gradientMatBaseFun";
  info[181].name = "mrdivide";
  info[181].dominantType = "double";
  info[181].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[181].fileTimeLo = 1416482024U;
  info[181].fileTimeHi = 0U;
  info[181].mFileTimeLo = 1416482024U;
  info[181].mFileTimeHi = 0U;
  info[182].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!gradientMatBaseFun";
  info[182].name = "mtimes";
  info[182].dominantType = "double";
  info[182].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[182].fileTimeLo = 1416482024U;
  info[182].fileTimeHi = 0U;
  info[182].mFileTimeLo = 0U;
  info[182].mFileTimeHi = 0U;
  info[183].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!localAssemblingF";
  info[183].name = "repmat";
  info[183].dominantType = "double";
  info[183].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[183].fileTimeLo = 1416482022U;
  info[183].fileTimeHi = 0U;
  info[183].mFileTimeLo = 0U;
  info[183].mFileTimeHi = 0U;
  info[184].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[184].name = "eml_assert_valid_size_arg";
  info[184].dominantType = "double";
  info[184].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[184].fileTimeLo = 1416482023U;
  info[184].fileTimeHi = 0U;
  info[184].mFileTimeLo = 0U;
  info[184].mFileTimeHi = 0U;
  info[185].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[185].name = "eml_index_class";
  info[185].dominantType = "";
  info[185].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[185].fileTimeLo = 1416482023U;
  info[185].fileTimeHi = 0U;
  info[185].mFileTimeLo = 0U;
  info[185].mFileTimeHi = 0U;
  info[186].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[186].name = "coder.internal.indexIntRelop";
  info[186].dominantType = "";
  info[186].resolved =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m";
  info[186].fileTimeLo = 1416482301U;
  info[186].fileTimeHi = 0U;
  info[186].mFileTimeLo = 0U;
  info[186].mFileTimeHi = 0U;
  info[187].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntClass";
  info[187].name = "eml_float_model";
  info[187].dominantType = "char";
  info[187].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m";
  info[187].fileTimeLo = 1416482023U;
  info[187].fileTimeHi = 0U;
  info[187].mFileTimeLo = 0U;
  info[187].mFileTimeHi = 0U;
  info[188].context =
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass";
  info[188].name = "intmin";
  info[188].dominantType = "char";
  info[188].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[188].fileTimeLo = 1416482022U;
  info[188].fileTimeHi = 0U;
  info[188].mFileTimeLo = 0U;
  info[188].mFileTimeHi = 0U;
  info[189].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[189].name = "eml_index_minus";
  info[189].dominantType = "coder.internal.indexInt";
  info[189].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[189].fileTimeLo = 1416482023U;
  info[189].fileTimeHi = 0U;
  info[189].mFileTimeLo = 0U;
  info[189].mFileTimeHi = 0U;
  info[190].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[190].name = "eml_scalar_eg";
  info[190].dominantType = "double";
  info[190].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[190].fileTimeLo = 1416482023U;
  info[190].fileTimeHi = 0U;
  info[190].mFileTimeLo = 0U;
  info[190].mFileTimeHi = 0U;
  info[191].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[191].name = "eml_index_prod";
  info[191].dominantType = "double";
  info[191].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[191].fileTimeLo = 1416482023U;
  info[191].fileTimeHi = 0U;
  info[191].mFileTimeLo = 0U;
  info[191].mFileTimeHi = 0U;
}

static void cb_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T (**ret_data)[7], int32_T ret_size[2])
{
  int32_T iv37[2];
  boolean_T bv12[2];
  int32_T i38;
  static const boolean_T bv13[2] = { FALSE, TRUE };

  int32_T iv38[2];
  for (i38 = 0; i38 < 2; i38++) {
    iv37[i38] = 1 + 6 * i38;
    bv12[i38] = bv13[i38];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv37, bv12, iv38);
  ret_size[0] = iv38[0];
  ret_size[1] = iv38[1];
  *ret_data = (real_T (*)[7])mxGetData(src);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  v_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void d_info_helper(ResolvedFunctionInfo info[201])
{
  info[192].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[192].name = "eml_index_class";
  info[192].dominantType = "";
  info[192].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[192].fileTimeLo = 1416482023U;
  info[192].fileTimeHi = 0U;
  info[192].mFileTimeLo = 0U;
  info[192].mFileTimeHi = 0U;
  info[193].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_prod.m";
  info[193].name = "eml_index_times";
  info[193].dominantType = "coder.internal.indexInt";
  info[193].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[193].fileTimeLo = 1416482023U;
  info[193].fileTimeHi = 0U;
  info[193].mFileTimeLo = 0U;
  info[193].mFileTimeHi = 0U;
  info[194].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[194].name = "eml_int_forloop_overflow_check";
  info[194].dominantType = "";
  info[194].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[194].fileTimeLo = 1416482023U;
  info[194].fileTimeHi = 0U;
  info[194].mFileTimeLo = 0U;
  info[194].mFileTimeHi = 0U;
  info[195].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m";
  info[195].name = "eml_index_plus";
  info[195].dominantType = "coder.internal.indexInt";
  info[195].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[195].fileTimeLo = 1416482023U;
  info[195].fileTimeHi = 0U;
  info[195].mFileTimeLo = 0U;
  info[195].mFileTimeHi = 0U;
  info[196].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!stressTranspose";
  info[196].name = "mrdivide";
  info[196].dominantType = "double";
  info[196].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[196].fileTimeLo = 1416482024U;
  info[196].fileTimeHi = 0U;
  info[196].mFileTimeLo = 1416482024U;
  info[196].mFileTimeHi = 0U;
  info[197].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!stressTranspose";
  info[197].name = "mtimes";
  info[197].dominantType = "double";
  info[197].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[197].fileTimeLo = 1416482024U;
  info[197].fileTimeHi = 0U;
  info[197].mFileTimeLo = 0U;
  info[197].mFileTimeHi = 0U;
  info[198].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!matrixTraceFun";
  info[198].name = "mrdivide";
  info[198].dominantType = "double";
  info[198].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[198].fileTimeLo = 1416482024U;
  info[198].fileTimeHi = 0U;
  info[198].mFileTimeLo = 1416482024U;
  info[198].mFileTimeHi = 0U;
  info[199].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!matrixTraceFun";
  info[199].name = "mtimes";
  info[199].dominantType = "double";
  info[199].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[199].fileTimeLo = 1416482024U;
  info[199].fileTimeHi = 0U;
  info[199].mFileTimeLo = 0U;
  info[199].mFileTimeHi = 0U;
  info[200].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!matrixTraceFun";
  info[200].name = "trace";
  info[200].dominantType = "double";
  info[200].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/trace.m";
  info[200].fileTimeLo = 1416482022U;
  info[200].fileTimeHi = 0U;
  info[200].mFileTimeLo = 0U;
  info[200].mFileTimeHi = 0U;
}

static void db_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv39[1];
  boolean_T bv14[1];
  int32_T iv40[1];
  iv39[0] = -1;
  bv14[0] = TRUE;
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv39, bv14, iv40);
  ret->size[0] = iv40[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

static void e_emlrt_marshallIn(const mxArray *pAll, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(emlrtAlias(pAll), &thisId, y);
  emlrtDestroyArray(&pAll);
}

static void emlrt_marshallIn(const mxArray *DOF, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(DOF), &thisId, y);
  emlrtDestroyArray(&DOF);
}

static const mxArray *emlrt_marshallOut(ResolvedFunctionInfo u[201])
{
  const mxArray *y;
  int32_T iv21[1];
  int32_T i32;
  ResolvedFunctionInfo *r10;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m7;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  y = NULL;
  iv21[0] = 201;
  emlrtAssign(&y, mxCreateStructArray(1, iv21, 0, NULL));
  for (i32 = 0; i32 < 201; i32++) {
    r10 = &u[i32];
    b_u = r10->context;
    b_y = NULL;
    m7 = mxCreateString(b_u);
    emlrtAssign(&b_y, m7);
    emlrtAddField(y, b_y, "context", i32);
    b_u = r10->name;
    c_y = NULL;
    m7 = mxCreateString(b_u);
    emlrtAssign(&c_y, m7);
    emlrtAddField(y, c_y, "name", i32);
    b_u = r10->dominantType;
    d_y = NULL;
    m7 = mxCreateString(b_u);
    emlrtAssign(&d_y, m7);
    emlrtAddField(y, d_y, "dominantType", i32);
    b_u = r10->resolved;
    e_y = NULL;
    m7 = mxCreateString(b_u);
    emlrtAssign(&e_y, m7);
    emlrtAddField(y, e_y, "resolved", i32);
    c_u = r10->fileTimeLo;
    f_y = NULL;
    m7 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m7) = c_u;
    emlrtAssign(&f_y, m7);
    emlrtAddField(y, f_y, "fileTimeLo", i32);
    c_u = r10->fileTimeHi;
    g_y = NULL;
    m7 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m7) = c_u;
    emlrtAssign(&g_y, m7);
    emlrtAddField(y, g_y, "fileTimeHi", i32);
    c_u = r10->mFileTimeLo;
    h_y = NULL;
    m7 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m7) = c_u;
    emlrtAssign(&h_y, m7);
    emlrtAddField(y, h_y, "mFileTimeLo", i32);
    c_u = r10->mFileTimeHi;
    i_y = NULL;
    m7 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m7) = c_u;
    emlrtAssign(&i_y, m7);
    emlrtAddField(y, i_y, "mFileTimeHi", i32);
  }

  return y;
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  w_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const mxArray *t, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  h_emlrt_marshallIn(emlrtAlias(t), &thisId, y);
  emlrtDestroyArray(&t);
}

static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  x_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const mxArray *gradientMatBase0, const char_T
  *identifier, real_T (**y_data)[42], int32_T y_size[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  j_emlrt_marshallIn(emlrtAlias(gradientMatBase0), &thisId, y_data, y_size);
  emlrtDestroyArray(&gradientMatBase0);
}

static void info_helper(ResolvedFunctionInfo info[201])
{
  info[0].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!getGlobalPositions";
  info[0].name = "mtimes";
  info[0].dominantType = "double";
  info[0].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[0].fileTimeLo = 1416482024U;
  info[0].fileTimeHi = 0U;
  info[0].mFileTimeLo = 0U;
  info[0].mFileTimeHi = 0U;
  info[1].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m";
  info[1].name = "mtimes";
  info[1].dominantType = "double";
  info[1].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[1].fileTimeLo = 1416482024U;
  info[1].fileTimeHi = 0U;
  info[1].mFileTimeLo = 0U;
  info[1].mFileTimeHi = 0U;
  info[2].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!invertBlock2by2";
  info[2].name = "mrdivide";
  info[2].dominantType = "double";
  info[2].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[2].fileTimeLo = 1416482024U;
  info[2].fileTimeHi = 0U;
  info[2].mFileTimeLo = 1416482024U;
  info[2].mFileTimeHi = 0U;
  info[3].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[3].name = "rdivide";
  info[3].dominantType = "double";
  info[3].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[3].fileTimeLo = 1416482024U;
  info[3].fileTimeHi = 0U;
  info[3].mFileTimeLo = 0U;
  info[3].mFileTimeHi = 0U;
  info[4].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[4].name = "eml_scalexp_compatible";
  info[4].dominantType = "double";
  info[4].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  info[4].fileTimeLo = 1416482023U;
  info[4].fileTimeHi = 0U;
  info[4].mFileTimeLo = 0U;
  info[4].mFileTimeHi = 0U;
  info[5].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  info[5].name = "eml_div";
  info[5].dominantType = "double";
  info[5].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  info[5].fileTimeLo = 1416482023U;
  info[5].fileTimeHi = 0U;
  info[5].mFileTimeLo = 0U;
  info[5].mFileTimeHi = 0U;
  info[6].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!invertBlock2by2";
  info[6].name = "mtimes";
  info[6].dominantType = "double";
  info[6].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[6].fileTimeLo = 1416482024U;
  info[6].fileTimeHi = 0U;
  info[6].mFileTimeLo = 0U;
  info[6].mFileTimeHi = 0U;
  info[7].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!invertBlock2by2";
  info[7].name = "eye";
  info[7].dominantType = "double";
  info[7].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m";
  info[7].fileTimeLo = 1416482022U;
  info[7].fileTimeHi = 0U;
  info[7].mFileTimeLo = 0U;
  info[7].mFileTimeHi = 0U;
  info[8].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m!eye_internal";
  info[8].name = "eml_assert_valid_size_arg";
  info[8].dominantType = "double";
  info[8].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[8].fileTimeLo = 1416482023U;
  info[8].fileTimeHi = 0U;
  info[8].mFileTimeLo = 0U;
  info[8].mFileTimeHi = 0U;
  info[9].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isintegral";
  info[9].name = "isinf";
  info[9].dominantType = "double";
  info[9].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m";
  info[9].fileTimeLo = 1416482021U;
  info[9].fileTimeHi = 0U;
  info[9].mFileTimeLo = 0U;
  info[9].mFileTimeHi = 0U;
  info[10].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!numel_for_size";
  info[10].name = "mtimes";
  info[10].dominantType = "double";
  info[10].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[10].fileTimeLo = 1416482024U;
  info[10].fileTimeHi = 0U;
  info[10].mFileTimeLo = 0U;
  info[10].mFileTimeHi = 0U;
  info[11].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[11].name = "eml_index_class";
  info[11].dominantType = "";
  info[11].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[11].fileTimeLo = 1416482023U;
  info[11].fileTimeHi = 0U;
  info[11].mFileTimeLo = 0U;
  info[11].mFileTimeHi = 0U;
  info[12].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  info[12].name = "intmax";
  info[12].dominantType = "char";
  info[12].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[12].fileTimeLo = 1416482022U;
  info[12].fileTimeHi = 0U;
  info[12].mFileTimeLo = 0U;
  info[12].mFileTimeHi = 0U;
  info[13].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m!eye_internal";
  info[13].name = "eml_is_float_class";
  info[13].dominantType = "char";
  info[13].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m";
  info[13].fileTimeLo = 1416482023U;
  info[13].fileTimeHi = 0U;
  info[13].mFileTimeLo = 0U;
  info[13].mFileTimeHi = 0U;
  info[14].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m!eye_internal";
  info[14].name = "min";
  info[14].dominantType = "double";
  info[14].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[14].fileTimeLo = 1416482025U;
  info[14].fileTimeHi = 0U;
  info[14].mFileTimeLo = 0U;
  info[14].mFileTimeHi = 0U;
  info[15].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m";
  info[15].name = "eml_min_or_max";
  info[15].dominantType = "char";
  info[15].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m";
  info[15].fileTimeLo = 1416482023U;
  info[15].fileTimeHi = 0U;
  info[15].mFileTimeLo = 0U;
  info[15].mFileTimeHi = 0U;
  info[16].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[16].name = "eml_scalar_eg";
  info[16].dominantType = "double";
  info[16].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[16].fileTimeLo = 1416482023U;
  info[16].fileTimeHi = 0U;
  info[16].mFileTimeLo = 0U;
  info[16].mFileTimeHi = 0U;
  info[17].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[17].name = "eml_scalexp_alloc";
  info[17].dominantType = "double";
  info[17].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  info[17].fileTimeLo = 1416482023U;
  info[17].fileTimeHi = 0U;
  info[17].mFileTimeLo = 0U;
  info[17].mFileTimeHi = 0U;
  info[18].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum";
  info[18].name = "eml_index_class";
  info[18].dominantType = "";
  info[18].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[18].fileTimeLo = 1416482023U;
  info[18].fileTimeHi = 0U;
  info[18].mFileTimeLo = 0U;
  info[18].mFileTimeHi = 0U;
  info[19].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum";
  info[19].name = "eml_scalar_eg";
  info[19].dominantType = "double";
  info[19].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[19].fileTimeLo = 1416482023U;
  info[19].fileTimeHi = 0U;
  info[19].mFileTimeLo = 0U;
  info[19].mFileTimeHi = 0U;
  info[20].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m!eye_internal";
  info[20].name = "eml_index_class";
  info[20].dominantType = "";
  info[20].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[20].fileTimeLo = 1416482023U;
  info[20].fileTimeHi = 0U;
  info[20].mFileTimeLo = 0U;
  info[20].mFileTimeHi = 0U;
  info[21].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m!eye_internal";
  info[21].name = "eml_int_forloop_overflow_check";
  info[21].dominantType = "";
  info[21].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[21].fileTimeLo = 1416482023U;
  info[21].fileTimeHi = 0U;
  info[21].mFileTimeLo = 0U;
  info[21].mFileTimeHi = 0U;
  info[22].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper";
  info[22].name = "intmax";
  info[22].dominantType = "char";
  info[22].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  info[22].fileTimeLo = 1416482022U;
  info[22].fileTimeHi = 0U;
  info[22].mFileTimeLo = 0U;
  info[22].mFileTimeHi = 0U;
  info[23].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!invertBlock2by2";
  info[23].name = "mldivide";
  info[23].dominantType = "double";
  info[23].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mldivide.p";
  info[23].fileTimeLo = 1416482024U;
  info[23].fileTimeHi = 0U;
  info[23].mFileTimeLo = 1416482024U;
  info[23].mFileTimeHi = 0U;
  info[24].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mldivide.p";
  info[24].name = "eml_lusolve";
  info[24].dominantType = "double";
  info[24].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_lusolve.m";
  info[24].fileTimeLo = 1416482023U;
  info[24].fileTimeHi = 0U;
  info[24].mFileTimeLo = 0U;
  info[24].mFileTimeHi = 0U;
  info[25].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_lusolve.m";
  info[25].name = "eml_index_class";
  info[25].dominantType = "";
  info[25].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[25].fileTimeLo = 1416482023U;
  info[25].fileTimeHi = 0U;
  info[25].mFileTimeLo = 0U;
  info[25].mFileTimeHi = 0U;
  info[26].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_lusolve.m!lusolve2x2";
  info[26].name = "eml_index_class";
  info[26].dominantType = "";
  info[26].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[26].fileTimeLo = 1416482023U;
  info[26].fileTimeHi = 0U;
  info[26].mFileTimeLo = 0U;
  info[26].mFileTimeHi = 0U;
  info[27].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_lusolve.m!lusolve2x2";
  info[27].name = "eml_xcabs1";
  info[27].dominantType = "double";
  info[27].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xcabs1.m";
  info[27].fileTimeLo = 1416482023U;
  info[27].fileTimeHi = 0U;
  info[27].mFileTimeLo = 0U;
  info[27].mFileTimeHi = 0U;
  info[28].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xcabs1.m";
  info[28].name = "abs";
  info[28].dominantType = "double";
  info[28].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[28].fileTimeLo = 1416482025U;
  info[28].fileTimeHi = 0U;
  info[28].mFileTimeLo = 0U;
  info[28].mFileTimeHi = 0U;
  info[29].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  info[29].name = "eml_scalar_abs";
  info[29].dominantType = "double";
  info[29].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  info[29].fileTimeLo = 1416482025U;
  info[29].fileTimeHi = 0U;
  info[29].mFileTimeLo = 0U;
  info[29].mFileTimeHi = 0U;
  info[30].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_lusolve.m!lusolve2x2";
  info[30].name = "eml_div";
  info[30].dominantType = "double";
  info[30].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  info[30].fileTimeLo = 1416482023U;
  info[30].fileTimeHi = 0U;
  info[30].mFileTimeLo = 0U;
  info[30].mFileTimeHi = 0U;
  info[31].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_lusolve.m!lusolve2x2";
  info[31].name = "mtimes";
  info[31].dominantType = "double";
  info[31].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[31].fileTimeLo = 1416482024U;
  info[31].fileTimeHi = 0U;
  info[31].mFileTimeLo = 0U;
  info[31].mFileTimeHi = 0U;
  info[32].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_lusolve.m!warn_singular";
  info[32].name = "eml_warning";
  info[32].dominantType = "char";
  info[32].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m";
  info[32].fileTimeLo = 1416482023U;
  info[32].fileTimeHi = 0U;
  info[32].mFileTimeLo = 0U;
  info[32].mFileTimeHi = 0U;
  info[33].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_lusolve.m!lusolve2x2";
  info[33].name = "eml_scalar_eg";
  info[33].dominantType = "double";
  info[33].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[33].fileTimeLo = 1416482023U;
  info[33].fileTimeHi = 0U;
  info[33].mFileTimeLo = 0U;
  info[33].mFileTimeHi = 0U;
  info[34].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_lusolve.m!lusolve2x2";
  info[34].name = "eml_int_forloop_overflow_check";
  info[34].dominantType = "";
  info[34].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[34].fileTimeLo = 1416482023U;
  info[34].fileTimeHi = 0U;
  info[34].mFileTimeLo = 0U;
  info[34].mFileTimeHi = 0U;
  info[35].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!makeBlockDiag2by2";
  info[35].name = "mrdivide";
  info[35].dominantType = "double";
  info[35].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  info[35].fileTimeLo = 1416482024U;
  info[35].fileTimeHi = 0U;
  info[35].mFileTimeLo = 1416482024U;
  info[35].mFileTimeHi = 0U;
  info[36].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!makeBlockDiag2by2";
  info[36].name = "mtimes";
  info[36].dominantType = "double";
  info[36].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[36].fileTimeLo = 1416482024U;
  info[36].fileTimeHi = 0U;
  info[36].mFileTimeLo = 0U;
  info[36].mFileTimeHi = 0U;
  info[37].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!giveGradient";
  info[37].name = "mtimes";
  info[37].dominantType = "double";
  info[37].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[37].fileTimeLo = 1416482024U;
  info[37].fileTimeHi = 0U;
  info[37].mFileTimeLo = 0U;
  info[37].mFileTimeHi = 0U;
  info[38].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[38].name = "eml_index_class";
  info[38].dominantType = "";
  info[38].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[38].fileTimeLo = 1416482023U;
  info[38].fileTimeHi = 0U;
  info[38].mFileTimeLo = 0U;
  info[38].mFileTimeHi = 0U;
  info[39].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[39].name = "eml_scalar_eg";
  info[39].dominantType = "double";
  info[39].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[39].fileTimeLo = 1416482023U;
  info[39].fileTimeHi = 0U;
  info[39].mFileTimeLo = 0U;
  info[39].mFileTimeHi = 0U;
  info[40].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[40].name = "eml_xgemm";
  info[40].dominantType = "char";
  info[40].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m";
  info[40].fileTimeLo = 1416482024U;
  info[40].fileTimeHi = 0U;
  info[40].mFileTimeLo = 0U;
  info[40].mFileTimeHi = 0U;
  info[41].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m";
  info[41].name = "eml_blas_inline";
  info[41].dominantType = "";
  info[41].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  info[41].fileTimeLo = 1416482023U;
  info[41].fileTimeHi = 0U;
  info[41].mFileTimeLo = 0U;
  info[41].mFileTimeHi = 0U;
  info[42].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m";
  info[42].name = "eml_index_class";
  info[42].dominantType = "";
  info[42].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[42].fileTimeLo = 1416482023U;
  info[42].fileTimeHi = 0U;
  info[42].mFileTimeLo = 0U;
  info[42].mFileTimeHi = 0U;
  info[43].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m";
  info[43].name = "eml_scalar_eg";
  info[43].dominantType = "double";
  info[43].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[43].fileTimeLo = 1416482023U;
  info[43].fileTimeHi = 0U;
  info[43].mFileTimeLo = 0U;
  info[43].mFileTimeHi = 0U;
  info[44].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m";
  info[44].name = "eml_refblas_xgemm";
  info[44].dominantType = "char";
  info[44].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m";
  info[44].fileTimeLo = 1416482024U;
  info[44].fileTimeHi = 0U;
  info[44].mFileTimeLo = 0U;
  info[44].mFileTimeHi = 0U;
  info[45].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m";
  info[45].name = "eml_index_minus";
  info[45].dominantType = "double";
  info[45].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[45].fileTimeLo = 1416482023U;
  info[45].fileTimeHi = 0U;
  info[45].mFileTimeLo = 0U;
  info[45].mFileTimeHi = 0U;
  info[46].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  info[46].name = "eml_index_class";
  info[46].dominantType = "";
  info[46].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[46].fileTimeLo = 1416482023U;
  info[46].fileTimeHi = 0U;
  info[46].mFileTimeLo = 0U;
  info[46].mFileTimeHi = 0U;
  info[47].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m";
  info[47].name = "eml_index_class";
  info[47].dominantType = "";
  info[47].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[47].fileTimeLo = 1416482023U;
  info[47].fileTimeHi = 0U;
  info[47].mFileTimeLo = 0U;
  info[47].mFileTimeHi = 0U;
  info[48].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m";
  info[48].name = "eml_scalar_eg";
  info[48].dominantType = "double";
  info[48].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[48].fileTimeLo = 1416482023U;
  info[48].fileTimeHi = 0U;
  info[48].mFileTimeLo = 0U;
  info[48].mFileTimeHi = 0U;
  info[49].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m";
  info[49].name = "eml_index_times";
  info[49].dominantType = "coder.internal.indexInt";
  info[49].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[49].fileTimeLo = 1416482023U;
  info[49].fileTimeHi = 0U;
  info[49].mFileTimeLo = 0U;
  info[49].mFileTimeHi = 0U;
  info[50].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  info[50].name = "eml_index_class";
  info[50].dominantType = "";
  info[50].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[50].fileTimeLo = 1416482023U;
  info[50].fileTimeHi = 0U;
  info[50].mFileTimeLo = 0U;
  info[50].mFileTimeHi = 0U;
  info[51].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m";
  info[51].name = "eml_index_plus";
  info[51].dominantType = "coder.internal.indexInt";
  info[51].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[51].fileTimeLo = 1416482023U;
  info[51].fileTimeHi = 0U;
  info[51].mFileTimeLo = 0U;
  info[51].mFileTimeHi = 0U;
  info[52].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[52].name = "eml_index_class";
  info[52].dominantType = "";
  info[52].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[52].fileTimeLo = 1416482023U;
  info[52].fileTimeHi = 0U;
  info[52].mFileTimeLo = 0U;
  info[52].mFileTimeHi = 0U;
  info[53].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m";
  info[53].name = "eml_int_forloop_overflow_check";
  info[53].dominantType = "";
  info[53].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[53].fileTimeLo = 1416482023U;
  info[53].fileTimeHi = 0U;
  info[53].mFileTimeLo = 0U;
  info[53].mFileTimeHi = 0U;
  info[54].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper";
  info[54].name = "intmin";
  info[54].dominantType = "char";
  info[54].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m";
  info[54].fileTimeLo = 1416482022U;
  info[54].fileTimeHi = 0U;
  info[54].mFileTimeLo = 0U;
  info[54].mFileTimeHi = 0U;
  info[55].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xgemm.m";
  info[55].name = "eml_index_plus";
  info[55].dominantType = "double";
  info[55].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[55].fileTimeLo = 1416482023U;
  info[55].fileTimeHi = 0U;
  info[55].mFileTimeLo = 0U;
  info[55].mFileTimeHi = 0U;
  info[56].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!giveGradient";
  info[56].name = "length";
  info[56].dominantType = "double";
  info[56].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  info[56].fileTimeLo = 1416482022U;
  info[56].fileTimeHi = 0U;
  info[56].mFileTimeLo = 0U;
  info[56].mFileTimeHi = 0U;
  info[57].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!giveGradient";
  info[57].name = "diag";
  info[57].dominantType = "double";
  info[57].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/diag.m";
  info[57].fileTimeLo = 1416482022U;
  info[57].fileTimeHi = 0U;
  info[57].mFileTimeLo = 0U;
  info[57].mFileTimeHi = 0U;
  info[58].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/diag.m";
  info[58].name = "eml_index_class";
  info[58].dominantType = "";
  info[58].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  info[58].fileTimeLo = 1416482023U;
  info[58].fileTimeHi = 0U;
  info[58].mFileTimeLo = 0U;
  info[58].mFileTimeHi = 0U;
  info[59].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/diag.m";
  info[59].name = "eml_index_plus";
  info[59].dominantType = "coder.internal.indexInt";
  info[59].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  info[59].fileTimeLo = 1416482023U;
  info[59].fileTimeHi = 0U;
  info[59].mFileTimeLo = 0U;
  info[59].mFileTimeHi = 0U;
  info[60].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/diag.m";
  info[60].name = "eml_scalar_eg";
  info[60].dominantType = "double";
  info[60].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  info[60].fileTimeLo = 1416482023U;
  info[60].fileTimeHi = 0U;
  info[60].mFileTimeLo = 0U;
  info[60].mFileTimeHi = 0U;
  info[61].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/diag.m";
  info[61].name = "eml_int_forloop_overflow_check";
  info[61].dominantType = "";
  info[61].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  info[61].fileTimeLo = 1416482023U;
  info[61].fileTimeHi = 0U;
  info[61].mFileTimeLo = 0U;
  info[61].mFileTimeHi = 0U;
  info[62].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m!below_threshold";
  info[62].name = "mtimes";
  info[62].dominantType = "double";
  info[62].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  info[62].fileTimeLo = 1416482024U;
  info[62].fileTimeHi = 0U;
  info[62].mFileTimeLo = 0U;
  info[62].mFileTimeHi = 0U;
  info[63].context =
    "[E]/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m!giveGradient";
  info[63].name = "sum";
  info[63].dominantType = "double";
  info[63].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m";
  info[63].fileTimeLo = 1416482025U;
  info[63].fileTimeHi = 0U;
  info[63].mFileTimeLo = 0U;
  info[63].mFileTimeHi = 0U;
}

static void j_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T (**y_data)[42], int32_T y_size[3])
{
  y_emlrt_marshallIn(emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T k_emlrt_marshallIn(const mxArray *lengthBasis, const char_T
  *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = l_emlrt_marshallIn(emlrtAlias(lengthBasis), &thisId);
  emlrtDestroyArray(&lengthBasis);
  return y;
}

static real_T l_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = ab_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void m_emlrt_marshallIn(const mxArray *points, const char_T *identifier,
  real_T (**y_data)[14], int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  n_emlrt_marshallIn(emlrtAlias(points), &thisId, y_data, y_size);
  emlrtDestroyArray(&points);
}

static void n_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T (**y_data)[14], int32_T y_size[2])
{
  bb_emlrt_marshallIn(emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const mxArray *weights, const char_T *identifier,
  real_T (**y_data)[7], int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  p_emlrt_marshallIn(emlrtAlias(weights), &thisId, y_data, y_size);
  emlrtDestroyArray(&weights);
}

static void p_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T (**y_data)[7], int32_T y_size[2])
{
  cb_emlrt_marshallIn(emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void q_emlrt_marshallIn(const mxArray *u0, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  r_emlrt_marshallIn(emlrtAlias(u0), &thisId, y);
  emlrtDestroyArray(&u0);
}

static void r_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  db_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static struct_T s_emlrt_marshallIn(const mxArray *matConst, const char_T
  *identifier)
{
  struct_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = t_emlrt_marshallIn(emlrtAlias(matConst), &thisId);
  emlrtDestroyArray(&matConst);
  return y;
}

static struct_T t_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  struct_T y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "Mu", "Lambda" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 2, fieldNames, 0U, 0);
  thisId.fIdentifier = "Mu";
  y.Mu = l_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u,
    0, "Mu")), &thisId);
  thisId.fIdentifier = "Lambda";
  y.Lambda = l_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "Lambda")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void u_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv24[2];
  boolean_T bv0[2];
  int32_T i33;
  static const boolean_T bv1[2] = { TRUE, FALSE };

  int32_T iv25[2];
  for (i33 = 0; i33 < 2; i33++) {
    iv24[i33] = (i33 << 2) - 1;
    bv0[i33] = bv1[i33];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv24, bv0, iv25);
  ret->size[0] = iv25[0];
  ret->size[1] = iv25[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

static void v_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv26[2];
  boolean_T bv2[2];
  int32_T i34;
  static const boolean_T bv3[2] = { TRUE, FALSE };

  int32_T iv27[2];
  for (i34 = 0; i34 < 2; i34++) {
    iv26[i34] = 3 * i34 - 1;
    bv2[i34] = bv3[i34];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv26, bv2, iv27);
  ret->size[0] = iv27[0];
  ret->size[1] = iv27[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv28[2];
  boolean_T bv4[2];
  int32_T i35;
  static const boolean_T bv5[2] = { FALSE, TRUE };

  int32_T iv29[2];
  for (i35 = 0; i35 < 2; i35++) {
    iv28[i35] = 2 + -3 * i35;
    bv4[i35] = bv5[i35];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv28, bv4, iv29);
  ret->size[0] = iv29[0];
  ret->size[1] = iv29[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv30[2];
  boolean_T bv6[2];
  int32_T i36;
  static const boolean_T bv7[2] = { FALSE, TRUE };

  int32_T iv31[2];
  for (i36 = 0; i36 < 2; i36++) {
    iv30[i36] = 3 + -4 * i36;
    bv6[i36] = bv7[i36];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv30, bv6, iv31);
  ret->size[0] = iv31[0];
  ret->size[1] = iv31[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = FALSE;
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T (**ret_data)[42], int32_T ret_size[3])
{
  int32_T iv32[3];
  boolean_T bv8[3];
  int32_T i;
  static const int8_T iv33[3] = { 3, 7, 2 };

  static const boolean_T bv9[3] = { FALSE, TRUE, FALSE };

  int32_T iv34[3];
  for (i = 0; i < 3; i++) {
    iv32[i] = iv33[i];
    bv8[i] = bv9[i];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 3U,
    iv32, bv8, iv34);
  ret_size[0] = iv34[0];
  ret_size[1] = iv34[1];
  ret_size[2] = iv34[2];
  *ret_data = (real_T (*)[42])mxGetData(src);
  emlrtDestroyArray(&src);
}

void assemblingSVK_m_file_api(const mxArray * const prhs[10], const mxArray
  *plhs[2])
{
  emxArray_real_T *DOF;
  emxArray_real_T *trafo;
  emxArray_real_T *pAll;
  emxArray_real_T *t;
  emxArray_real_T *u0;
  emxArray_real_T *A;
  emxArray_real_T *F;
  int32_T gradientMatBase0_size[3];
  real_T (*gradientMatBase0_data)[42];
  real_T lengthBasis;
  int32_T points_size[2];
  real_T (*points_data)[14];
  int32_T weights_size[2];
  real_T (*weights_data)[7];
  struct_T matConst;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&DOF, 2, &t_emlrtRTEI, TRUE);
  emxInit_real_T(&trafo, 2, &t_emlrtRTEI, TRUE);
  emxInit_real_T(&pAll, 2, &t_emlrtRTEI, TRUE);
  emxInit_real_T(&t, 2, &t_emlrtRTEI, TRUE);
  b_emxInit_real_T(&u0, 1, &t_emlrtRTEI, TRUE);
  emxInit_real_T(&A, 2, &t_emlrtRTEI, TRUE);
  b_emxInit_real_T(&F, 1, &t_emlrtRTEI, TRUE);

  /* Marshall function inputs */
  emlrt_marshallIn(emlrtAlias(prhs[0]), "DOF", DOF);
  c_emlrt_marshallIn(emlrtAlias(prhs[1]), "trafo", trafo);
  e_emlrt_marshallIn(emlrtAlias(prhs[2]), "pAll", pAll);
  g_emlrt_marshallIn(emlrtAlias(prhs[3]), "t", t);
  i_emlrt_marshallIn(emlrtAlias(prhs[4]), "gradientMatBase0",
                     &gradientMatBase0_data, gradientMatBase0_size);
  lengthBasis = k_emlrt_marshallIn(emlrtAliasP(prhs[5]), "lengthBasis");
  m_emlrt_marshallIn(emlrtAlias(prhs[6]), "points", &points_data, points_size);
  o_emlrt_marshallIn(emlrtAlias(prhs[7]), "weights", &weights_data, weights_size);
  q_emlrt_marshallIn(emlrtAlias(prhs[8]), "u0", u0);
  matConst = s_emlrt_marshallIn(emlrtAliasP(prhs[9]), "matConst");

  /* Invoke the target function */
  assemblingSVK_m_file(DOF, trafo, pAll, t, *gradientMatBase0_data,
                       gradientMatBase0_size, lengthBasis, *points_data,
                       points_size, *weights_data, weights_size, u0, &matConst,
                       A, F);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(A);
  plhs[1] = c_emlrt_marshallOut(F);
  F->canFreeData = FALSE;
  emxFree_real_T(&F);
  A->canFreeData = FALSE;
  emxFree_real_T(&A);
  u0->canFreeData = FALSE;
  emxFree_real_T(&u0);
  t->canFreeData = FALSE;
  emxFree_real_T(&t);
  pAll->canFreeData = FALSE;
  emxFree_real_T(&pAll);
  trafo->canFreeData = FALSE;
  emxFree_real_T(&trafo);
  DOF->canFreeData = FALSE;
  emxFree_real_T(&DOF);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[201];
  nameCaptureInfo = NULL;
  info_helper(info);
  b_info_helper(info);
  c_info_helper(info);
  d_info_helper(info);
  emlrtAssign(&nameCaptureInfo, emlrt_marshallOut(info));
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

/* End of code generation (assemblingSVK_m_file_api.c) */
