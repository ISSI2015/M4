/*
 * assemblingSVK_m_file.c
 *
 * Code generation for function 'assemblingSVK_m_file'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "assemblingSVK_m_file.h"
#include "assemblingSVK_m_file_emxutil.h"
#include "mldivide.h"
#include "repmat.h"
#include "det.h"
#include "sum.h"
#include "assemblingSVK_m_file_mexutil.h"
#include "assemblingSVK_m_file_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 4, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo b_emlrtRSI = { 12, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo c_emlrtRSI = { 13, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo d_emlrtRSI = { 14, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo e_emlrtRSI = { 20, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo f_emlrtRSI = { 21, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo g_emlrtRSI = { 23, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo h_emlrtRSI = { 24, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo i_emlrtRSI = { 115, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo j_emlrtRSI = { 122, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo k_emlrtRSI = { 125, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo l_emlrtRSI = { 128, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo m_emlrtRSI = { 131, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo n_emlrtRSI = { 275, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo t_emlrtRSI = { 55, "mtimes",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/ops/mtimes.m"
};

static emlrtRSInfo u_emlrtRSI = { 21, "mtimes",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/ops/mtimes.m"
};

static emlrtRSInfo v_emlrtRSI = { 89, "mtimes",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/ops/mtimes.m"
};

static emlrtRSInfo w_emlrtRSI = { 84, "mtimes",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/ops/mtimes.m"
};

static emlrtRSInfo x_emlrtRSI = { 54, "eml_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m"
};

static emlrtRSInfo ab_emlrtRSI = { 32, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo ib_emlrtRSI = { 110, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo jb_emlrtRSI = { 111, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo kb_emlrtRSI = { 112, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo lb_emlrtRSI = { 113, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo mb_emlrtRSI = { 114, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo nb_emlrtRSI = { 115, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo ob_emlrtRSI = { 119, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo pb_emlrtRSI = { 122, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo qb_emlrtRSI = { 125, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo rb_emlrtRSI = { 128, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo sb_emlrtRSI = { 131, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo tb_emlrtRSI = { 134, "eml_blas_xgemm",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xgemm.m"
};

static emlrtRSInfo ub_emlrtRSI = { 14, "eml_c_cast",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/eml/blas/external/eml_c_cast.m"
};

static emlrtRSInfo yb_emlrtRSI = { 148, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo ac_emlrtRSI = { 147, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo bc_emlrtRSI = { 87, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo cc_emlrtRSI = { 91, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo dc_emlrtRSI = { 99, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo ec_emlrtRSI = { 103, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo fc_emlrtRSI = { 240, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo pc_emlrtRSI = { 251, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo qc_emlrtRSI = { 227, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo rc_emlrtRSI = { 40, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo sc_emlrtRSI = { 48, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo tc_emlrtRSI = { 52, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo uc_emlrtRSI = { 56, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo vc_emlrtRSI = { 61, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo wc_emlrtRSI = { 62, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo xc_emlrtRSI = { 67, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo yc_emlrtRSI = { 69, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo ad_emlrtRSI = { 74, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo bd_emlrtRSI = { 178, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo cd_emlrtRSI = { 190, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo fd_emlrtRSI = { 286, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo gd_emlrtRSI = { 202, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRSInfo hd_emlrtRSI = { 214, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtMCInfo c_emlrtMCI = { 85, 13, "mtimes",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/ops/mtimes.m"
};

static emlrtMCInfo d_emlrtMCI = { 84, 23, "mtimes",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/ops/mtimes.m"
};

static emlrtMCInfo e_emlrtMCI = { 90, 13, "mtimes",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/ops/mtimes.m"
};

static emlrtMCInfo f_emlrtMCI = { 89, 23, "mtimes",
  "/home/ksimon/Software/Matlab/matlabR2013a/toolbox/eml/lib/matlab/ops/mtimes.m"
};

static emlrtRTEInfo emlrtRTEI = { 2, 21, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo b_emlrtRTEI = { 4, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo c_emlrtRTEI = { 8, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo d_emlrtRTEI = { 9, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo e_emlrtRTEI = { 23, 13, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo f_emlrtRTEI = { 24, 13, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo g_emlrtRTEI = { 108, 20, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo h_emlrtRTEI = { 110, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo i_emlrtRTEI = { 108, 33, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo l_emlrtRTEI = { 79, 19, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo m_emlrtRTEI = { 99, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo n_emlrtRTEI = { 234, 19, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo o_emlrtRTEI = { 33, 14, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo p_emlrtRTEI = { 69, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo u_emlrtRTEI = { 11, 13, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo v_emlrtRTEI = { 12, 34, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo w_emlrtRTEI = { 12, 46, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo x_emlrtRTEI = { 13, 65, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo y_emlrtRTEI = { 13, 75, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo ab_emlrtRTEI = { 14, 63, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 14, 73, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 19, 35, "positions",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtECInfo emlrtECI = { -1, 19, 22, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 13, 24, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo db_emlrtRTEI = { 13, 36, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 14, 24, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 14, 34, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 20, 56, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo hb_emlrtRTEI = { 23, 70, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo ib_emlrtRTEI = { 24, 78, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 25, 68, "positions",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 25, 87, "positions",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtECInfo b_emlrtECI = { 2, 25, 56, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 25, 25, "positions",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 25, 44, "positions",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 26, 49, "positions",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtECInfo c_emlrtECI = { -1, 26, 37, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 26, 25, "positions",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtECInfo d_emlrtECI = { -1, 158, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtECInfo e_emlrtECI = { -1, 159, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 148, 32, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 147, 135, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 147, 105, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 147, 73, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 147, 42, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo ob_emlrtRTEI = { 146, 9, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtDCInfo emlrtDCI = { 8, 46, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtDCInfo b_emlrtDCI = { 8, 46, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 4 };

static emlrtDCInfo c_emlrtDCI = { 9, 20, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtDCInfo d_emlrtDCI = { 9, 20, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 4 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 19, 22, "u0", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 19, 22, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 20, 56, "trafo",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 23, 70, "trafo",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 24, 78, "trafo",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 25, 58, "A", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtDCInfo f_emlrtDCI = { 25, 58, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 25, 77, "A", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtDCInfo g_emlrtDCI = { 25, 77, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 25, 15, "A", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtDCInfo h_emlrtDCI = { 25, 15, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 25, 34, "A", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtDCInfo i_emlrtDCI = { 25, 34, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 26, 37, "F", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtDCInfo j_emlrtDCI = { 26, 37, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 26, 13, "F", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtDCInfo k_emlrtDCI = { 26, 13, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 147, 105, "grad_u0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 147, 135, "grad_u0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 147, 42, "grad_u0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 147, 73, "grad_u0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 148, 32, "sigma_u0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo w_emlrtBCI = { 1, 3, 12, 78, "gradientMatBase0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 12, 80, "gradientMatBase0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo y_emlrtBCI = { 1, 3, 12, 102, "gradientMatBase0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 12, 104, "gradientMatBase0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo bb_emlrtBCI = { 1, 3, 12, 134, "gradientMatBase0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 12, 136, "gradientMatBase0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo db_emlrtBCI = { 1, 3, 12, 158, "gradientMatBase0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 12, 160, "gradientMatBase0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 12, 33, "gradientMatBase",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 12, 45, "gradientMatBase",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 13, 65, "gradientMatBase",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 13, 75, "gradientMatBase",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 13, 24, "stress",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 13, 36, "stress",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 14, 63, "gradientMatBase",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 14, 73, "gradientMatBase",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 14, 24, "stress",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 14, 34, "stress",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtRTEInfo pb_emlrtRTEI = { 125, 26, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo qb_emlrtRTEI = { 125, 46, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo rb_emlrtRTEI = { 128, 38, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo sb_emlrtRTEI = { 128, 14, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtECInfo f_emlrtECI = { -1, 128, 9, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 131, 25, "temp",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 131, 48, "temp",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtECInfo g_emlrtECI = { 2, 131, 15, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 128, 14, "temp",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 128, 38, "stress",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtRTEInfo tb_emlrtRTEI = { 87, 54, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo ub_emlrtRTEI = { 87, 73, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo vb_emlrtRTEI = { 87, 104, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo wb_emlrtRTEI = { 87, 126, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo xb_emlrtRTEI = { 87, 18, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtECInfo h_emlrtECI = { -1, 87, 9, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo yb_emlrtRTEI = { 91, 73, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo ac_emlrtRTEI = { 91, 94, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo bc_emlrtRTEI = { 91, 25, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtECInfo i_emlrtECI = { -1, 91, 9, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo cc_emlrtRTEI = { 225, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 226, 10, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo ec_emlrtRTEI = { 227, 37, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo fc_emlrtRTEI = { 227, 47, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo gc_emlrtRTEI = { 249, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo hc_emlrtRTEI = { 251, 34, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo ic_emlrtRTEI = { 251, 15, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtDCInfo l_emlrtDCI = { 223, 15, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtDCInfo m_emlrtDCI = { 223, 24, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 227, 37, "mat",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 227, 47, "mat",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 227, 20, "F", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 227, 22, "F", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 87, 18, "stress",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 87, 54, "stress",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo ac_emlrtBCI = { 1, 2, 87, 73, "trafo", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 87, 104, "grad_u0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 87, 126, "sigma_u0",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 87, 137, "weights",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 91, 25, "gradientMatBase",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 91, 73, "gradientMatBase",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo gc_emlrtBCI = { 1, 2, 91, 94, "trafo", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 251, 34, "mat",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 251, 15, "mat",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtRTEInfo jc_emlrtRTEI = { 239, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo kc_emlrtRTEI = { 240, 51, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo lc_emlrtRTEI = { 240, 16, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 240, 51, "strain",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 240, 16, "stress",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 44, 22, "weights",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo mc_emlrtBCI = { 1, 1, 44, 33, "trafoDet",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 44, 9, "weights",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtRTEInfo mc_emlrtRTEI = { 48, 23, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo nc_emlrtRTEI = { 52, 75, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo oc_emlrtRTEI = { 52, 25, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtECInfo j_emlrtECI = { -1, 52, 9, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtECInfo k_emlrtECI = { 2, 56, 15, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo pc_emlrtRTEI = { 202, 27, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo qc_emlrtRTEI = { 202, 54, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo rc_emlrtRTEI = { 201, 9, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo sc_emlrtRTEI = { 213, 6, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo tc_emlrtRTEI = { 214, 33, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtDCInfo n_emlrtDCI = { 211, 17, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 1 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 214, 33, "mat",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 214, 14, "F", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 202, 54, "mat",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 202, 27, "mat",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo sc_emlrtBCI = { 1, 2, 48, 23, "trafo", "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 52, 25, "gradientMatBase",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 52, 75, "gradientMatBase",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 52, 92, "weights",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtRTEInfo uc_emlrtRTEI = { 285, 5, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo vc_emlrtRTEI = { 286, 50, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo wc_emlrtRTEI = { 286, 19, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo xc_emlrtRTEI = { 286, 29, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 286, 50, "trafo",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 286, 19, "trafoCell",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 286, 29, "trafoCell",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtRTEInfo yc_emlrtRTEI = { 190, 27, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo ad_emlrtRTEI = { 190, 54, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtRTEInfo bd_emlrtRTEI = { 189, 9, "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m" };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 190, 54, "mat",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 190, 27, "mat",
  "assemblingSVK_m_file",
  "/home/ksimon/Code/ISSI/Assembly/StiffnessMatrix/assemblingSVK_m_file.m", 0 };

/* Function Declarations */
static int32_T div_s32_floor(int32_T numerator, int32_T denominator);
static void giveGradient(const emxArray_real_T *stress, const real_T u0_loc[6],
  real_T trafo[4], real_T grad_u0_data[28], int32_T grad_u0_size[2]);
static void gradientMatBaseFun(emxArray_real_T *mat, const real_T inv[4], real_T
  weight);
static void localAssemblingF(real_T grad_u0_data[28], int32_T grad_u0_size[2],
  const real_T sigma_u0_data[28], const int32_T sigma_u0_size[2],
  emxArray_real_T *gradientMatBase, const real_T trafo[4], real_T weights_data[7],
  int32_T weights_size[2], emxArray_real_T *F);
static void localAssemblingSVK(emxArray_real_T *stress, emxArray_real_T
  *gradientMatBase, const real_T trafo[4], const real_T weights_data[7], const
  int32_T weights_size[2], real_T Mu, real_T Lambda, const real_T grad_u0_data
  [28], const int32_T grad_u0_size[2], const real_T sigma_u0_data[28], const
  int32_T sigma_u0_size[2], emxArray_real_T *localA);
static void makeBlockDiag2by2(const real_T trafo_data[28], const int32_T
  trafo_size[2], real_T trafoCell_data[196], int32_T trafoCell_size[2]);
static void strain2Stress(const emxArray_real_T *strain, const real_T trafo[4],
  real_T Mu, real_T Lambda, const real_T grad_u0[4], const real_T sigma_u0[4],
  real_T weight, emxArray_real_T *stress);

/* Function Definitions */
static int32_T div_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  int32_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(0, emlrtRootTLSGlobal);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if ((uint32_T)quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > (uint32_T)0) {
        tempAbsQuotient++;
      }
    }

    if ((uint32_T)quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

static void giveGradient(const emxArray_real_T *stress, const real_T u0_loc[6],
  real_T trafo[4], real_T grad_u0_data[28], int32_T grad_u0_size[2])
{
  uint32_T uv0[2];
  int32_T i4;
  emxArray_real_T *temp;
  int32_T loop_ub;
  real_T b_trafo[4];
  static const real_T dv0[4] = { 1.0, 0.0, 0.0, 1.0 };

  const mxArray *y;
  static const int32_T iv1[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv0[45];
  int32_T i;
  static const char_T cv1[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *b_stress;
  int32_T i5;
  int32_T i6;
  emxArray_real_T *r3;
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  real_T v[4];
  real_T D[16];
  int32_T j;
  int32_T i7;
  int32_T i8;
  int8_T iv3[4];
  int32_T tmp_data[14];
  int32_T tmp_size[2];
  int32_T b_tmp_size[2];
  real_T c_stress[8];
  real_T b_D[8];
  emxArray_real_T *b_temp;
  int32_T i9;
  emxArray_real_T *c_temp;
  real_T b_tmp_data[14];
  real_T c_tmp_data[14];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /*  'stress' here means just a transposed gradient matrix */
  for (i4 = 0; i4 < 2; i4++) {
    uv0[i4] = (uint32_T)stress->size[i4];
  }

  emxInit_real_T(&temp, 2, &h_emlrtRTEI, TRUE);
  i4 = temp->size[0] * temp->size[1];
  temp->size[0] = (int32_T)uv0[0];
  emxEnsureCapacity((emxArray__common *)temp, i4, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  i4 = temp->size[0] * temp->size[1];
  temp->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity((emxArray__common *)temp, i4, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  loop_ub = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    temp->data[i4] = 0.0;
  }

  /*      fun = @(block_struct) block_struct.data\eye(2); */
  /*      trafo = blockproc(trafo,[2 2],fun); */
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);

  /*  function matOut = assemble2by2Blocks(mat) */
  /*   */
  /*      N = size(mat); */
  /*      matOut = zeros(1/2*N); */
  /*       */
  /*      for i=1:1/4*N(1) */
  /*          for j=1:1/4*N(2) */
  /*              matOut(2*i-1:2*i,2*j-1:2*j) = [ trace(mat(4*i-3:4*i-2 , 4*j-3:4*j-2)) trace(mat(4*i-1:4*i , 4*j-3:4*j-2)) ; trace(mat( 4*i-3:4*i-2, 4*j-1:4*j)) trace(mat(4*i-1:4*i , 4*j-1:4*j)) ]'; */
  /*          end */
  /*      end */
  /*   */
  /*  end */
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  for (i4 = 0; i4 < 4; i4++) {
    b_trafo[i4] = trafo[i4];
  }

  mldivide(b_trafo, dv0, trafo);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);

  /*      trafoCell = mat2cell(trafo,2, 2*ones(  1,size(trafo,2)/2  ) ); */
  /*      trafoCell = blkdiag(trafoCell{:}); */
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  if (!(stress->size[1] == 2)) {
    if ((stress->size[0] == 1) && (stress->size[1] == 1)) {
      emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
      y = NULL;
      m0 = mxCreateCharArray(2, iv1);
      for (i = 0; i < 45; i++) {
        cv0[i] = cv1[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m0, cv0);
      emlrtAssign(&y, m0);
      error(message(y, &c_emlrtMCI), &d_emlrtMCI);
      emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
      b_y = NULL;
      m0 = mxCreateCharArray(2, iv2);
      for (i = 0; i < 21; i++) {
        cv2[i] = cv3[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, cv2);
      emlrtAssign(&b_y, m0);
      error(message(b_y, &e_emlrtMCI), &f_emlrtMCI);
      emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
    }
  }

  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emxInit_real_T(&b_stress, 2, &i_emlrtRTEI, TRUE);
  if (stress->size[1] == 1) {
    i4 = b_stress->size[0] * b_stress->size[1];
    b_stress->size[0] = stress->size[0];
    b_stress->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)b_stress, i4, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    loop_ub = stress->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      for (i5 = 0; i5 < 2; i5++) {
        b_stress->data[i4 + b_stress->size[0] * i5] = 0.0;
        i = stress->size[1];
        for (i6 = 0; i6 < i; i6++) {
          b_stress->data[i4 + b_stress->size[0] * i5] += stress->data[i4 +
            stress->size[0] * i6] * trafo[i6 + (i5 << 1)];
        }
      }
    }
  } else {
    emxInit_real_T(&r3, 2, &g_emlrtRTEI, TRUE);
    uv0[0] = (uint32_T)stress->size[0];
    i4 = r3->size[0] * r3->size[1];
    r3->size[0] = (int32_T)uv0[0];
    r3->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)r3, i4, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    loop_ub = (int32_T)uv0[0] << 1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      r3->data[i4] = 0.0;
    }

    emxFree_real_T(&r3);
    emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    i4 = b_stress->size[0] * b_stress->size[1];
    b_stress->size[0] = (int32_T)uv0[0];
    b_stress->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)b_stress, i4, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    loop_ub = (int32_T)uv0[0] << 1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      b_stress->data[i4] = 0.0;
    }

    if ((stress->size[0] < 1) || (stress->size[1] < 1)) {
    } else {
      emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      m_t = (ptrdiff_t)(stress->size[0]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      n_t = (ptrdiff_t)(2);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      k_t = (ptrdiff_t)(stress->size[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      lda_t = (ptrdiff_t)(stress->size[0]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      ldb_t = (ptrdiff_t)(stress->size[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      ldc_t = (ptrdiff_t)(stress->size[0]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
      alpha1_t = (double *)(&alpha1);
      emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
      Aia0_t = (double *)(&stress->data[0]);
      emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      Bib0_t = (double *)(&trafo[0]);
      emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      beta1_t = (double *)(&beta1);
      emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      Cic0_t = (double *)(&b_stress->data[0]);
      emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
      emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 3; i++) {
    i4 = (1 + i) << 1;
    if (i4 == (1 + i) << 1) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &pb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    i5 = (1 + i) << 1;
    if (i5 == (1 + i) << 1) {
    } else {
      emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &qb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    }

    for (i6 = 0; i6 < 2; i6++) {
      v[i6] = u0_loc[(i6 + i4) - 2];
    }

    for (i4 = 0; i4 < 2; i4++) {
      v[i4 + 2] = u0_loc[(i4 + i5) - 2];
    }

    memset(&D[0], 0, sizeof(real_T) << 4);
    for (j = 0; j < 4; j++) {
      D[j + (j << 2)] = v[j];
    }

    /*          fun = @(block_struct) D*block_struct.data; */
    /*          temp(4*i-3:4*i,:) = blockproc(stress(4*i-3:4*i,:),[4 2],fun); */
    i4 = (1 + i) << 2;
    if (i4 == (1 + i) << 2) {
    } else {
      emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &rb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    }

    i5 = (1 + i) << 2;
    if (i5 == (1 + i) << 2) {
    } else {
      emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &sb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    }

    for (i6 = 0; i6 < 4; i6++) {
      i7 = temp->size[0];
      i8 = (i5 + i6) - 3;
      iv3[i6] = (int8_T)((int8_T)emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7,
        &rb_emlrtBCI, emlrtRootTLSGlobal) - 1);
    }

    loop_ub = temp->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      tmp_data[i5] = i5;
    }

    tmp_size[0] = 4;
    tmp_size[1] = loop_ub;
    for (i5 = 0; i5 < 2; i5++) {
      b_tmp_size[i5] = 4 + -2 * i5;
    }

    emlrtSubAssignSizeCheckR2012b(tmp_size, 2, b_tmp_size, 2, &f_emlrtECI,
      emlrtRootTLSGlobal);
    for (i5 = 0; i5 < 4; i5++) {
      i6 = b_stress->size[0];
      i7 = (i4 + i5) - 3;
      emlrtDynamicBoundsCheckFastR2012b(i7, 1, i6, &sb_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    for (i5 = 0; i5 < 2; i5++) {
      for (i6 = 0; i6 < 4; i6++) {
        c_stress[i6 + (i5 << 2)] = b_stress->data[((i4 + i6) + b_stress->size[0]
          * i5) - 4];
      }
    }

    for (i4 = 0; i4 < 4; i4++) {
      for (i5 = 0; i5 < 2; i5++) {
        b_D[i4 + (i5 << 2)] = 0.0;
        for (i6 = 0; i6 < 4; i6++) {
          b_D[i4 + (i5 << 2)] += D[i4 + (i6 << 2)] * c_stress[i6 + (i5 << 2)];
        }
      }
    }

    for (i4 = 0; i4 < loop_ub; i4++) {
      for (i5 = 0; i5 < 4; i5++) {
        temp->data[iv3[i5] + temp->size[0] * tmp_data[i4]] = b_D[i5 + (i4 << 2)];
      }
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&b_stress);
  if (1 > temp->size[0]) {
    i4 = 1;
    i5 = -1;
  } else {
    i4 = 2;
    i5 = temp->size[0];
    i6 = temp->size[0];
    i5 = emlrtDynamicBoundsCheckFastR2012b(i6, 1, i5, &pb_emlrtBCI,
      emlrtRootTLSGlobal) - 1;
  }

  if (2 > temp->size[0]) {
    i6 = 1;
    i7 = 1;
    i8 = 0;
  } else {
    i6 = 2;
    i7 = 2;
    i8 = temp->size[0];
    j = temp->size[0];
    i8 = emlrtDynamicBoundsCheckFastR2012b(j, 1, i8, &qb_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emxInit_real_T(&b_temp, 2, &g_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  loop_ub = temp->size[1];
  j = b_temp->size[0] * b_temp->size[1];
  b_temp->size[0] = div_s32_floor(i5, i4) + 1;
  b_temp->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_temp, j, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  for (j = 0; j < loop_ub; j++) {
    i = div_s32_floor(i5, i4);
    for (i9 = 0; i9 <= i; i9++) {
      b_temp->data[i9 + b_temp->size[0] * j] = temp->data[i4 * i9 + temp->size[0]
        * j];
    }
  }

  emxInit_real_T(&c_temp, 2, &g_emlrtRTEI, TRUE);
  sum(b_temp, b_tmp_data, tmp_size);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  loop_ub = temp->size[1];
  i4 = c_temp->size[0] * c_temp->size[1];
  c_temp->size[0] = div_s32_floor(i8 - i6, i7) + 1;
  c_temp->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)c_temp, i4, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  emxFree_real_T(&b_temp);
  for (i4 = 0; i4 < loop_ub; i4++) {
    i = div_s32_floor(i8 - i6, i7);
    for (i5 = 0; i5 <= i; i5++) {
      c_temp->data[i5 + c_temp->size[0] * i4] = temp->data[((i6 + i7 * i5) +
        temp->size[0] * i4) - 1];
    }
  }

  emxFree_real_T(&temp);
  sum(c_temp, c_tmp_data, b_tmp_size);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtDimSizeEqCheckFastR2012b(tmp_size[1], b_tmp_size[1], &g_emlrtECI,
    emlrtRootTLSGlobal);
  grad_u0_size[0] = 2;
  grad_u0_size[1] = tmp_size[1];
  loop_ub = tmp_size[1];
  emxFree_real_T(&c_temp);
  for (i4 = 0; i4 < loop_ub; i4++) {
    grad_u0_data[i4 << 1] = b_tmp_data[tmp_size[0] * i4];
  }

  loop_ub = b_tmp_size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    grad_u0_data[1 + (i4 << 1)] = c_tmp_data[b_tmp_size[0] * i4];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void gradientMatBaseFun(emxArray_real_T *mat, const real_T inv[4], real_T
  weight)
{
  int32_T N[2];
  int32_T i39;
  real_T d3;
  int32_T j;
  uint32_T u5;
  uint32_T u6;
  int32_T i40;
  int32_T i41;
  int32_T b_mat;
  real_T c_mat[4];
  real_T d_mat[4];
  for (i39 = 0; i39 < 2; i39++) {
    N[i39] = mat->size[i39];
  }

  d3 = 0.5 * (real_T)N[1];
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d3, mxDOUBLE_CLASS, (int32_T)d3,
    &bd_emlrtRTEI, emlrtRootTLSGlobal);
  j = 1;
  while (j - 1 <= (int32_T)d3 - 1) {
    u5 = (uint32_T)j << 1;
    if (u5 == (uint32_T)j << 1) {
    } else {
      emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ad_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
    }

    u6 = (uint32_T)j << 1;
    if (u6 == (uint32_T)j << 1) {
    } else {
      emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &yc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
    }

    for (i39 = 0; i39 < 2; i39++) {
      i40 = mat->size[1];
      i41 = (int32_T)((real_T)u5 + (-1.0 + (real_T)i39));
      emlrtDynamicBoundsCheckFastR2012b(i41, 1, i40, &ad_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    b_mat = mat->size[1];
    for (i39 = 0; i39 < 2; i39++) {
      for (i40 = 0; i40 < 2; i40++) {
        c_mat[i40 + (i39 << 1)] = mat->data[i40 + mat->size[0] * ((int32_T)
          ((real_T)u5 + (-1.0 + (real_T)i39)) - 1)];
      }
    }

    for (i39 = 0; i39 < 2; i39++) {
      for (i40 = 0; i40 < 2; i40++) {
        d_mat[i39 + (i40 << 1)] = 0.0;
        for (i41 = 0; i41 < 2; i41++) {
          d_mat[i39 + (i40 << 1)] += c_mat[i39 + (i41 << 1)] * inv[i41 + (i40 <<
            1)];
        }
      }
    }

    for (i39 = 0; i39 < 2; i39++) {
      for (i40 = 0; i40 < 2; i40++) {
        i41 = (int32_T)((real_T)u6 + (-1.0 + (real_T)i39));
        mat->data[i40 + mat->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i41, 1,
          b_mat, &bd_emlrtBCI, emlrtRootTLSGlobal) - 1)] = d_mat[i40 + (i39 << 1)]
          * weight;
      }
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
}

static void localAssemblingF(real_T grad_u0_data[28], int32_T grad_u0_size[2],
  const real_T sigma_u0_data[28], const int32_T sigma_u0_size[2],
  emxArray_real_T *gradientMatBase, const real_T trafo[4], real_T weights_data[7],
  int32_T weights_size[2], emxArray_real_T *F)
{
  real_T trafoDet;
  int32_T i;
  int32_T i19;
  emxArray_int32_T *r8;
  emxArray_real_T *r9;
  real_T stress[4];
  int32_T i20;
  int32_T i21;
  int32_T i22;
  real_T inv[4];
  static const real_T dv2[4] = { 1.0, 0.0, 0.0, 1.0 };

  int8_T iv14[2];
  int32_T i23;
  int32_T loop_ub;
  int32_T b_stress[2];
  int32_T stress_size[2];
  real_T stress_data[28];
  int32_T grad_u0[2];
  emxArray_real_T *b;
  real_T sigmaCell_data[196];
  const mxArray *y;
  static const int32_T iv15[2] = { 1, 45 };

  const mxArray *m5;
  char_T cv18[45];
  static const char_T cv19[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv16[2] = { 1, 21 };

  char_T cv20[21];
  static const char_T cv21[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *mat;
  int32_T j;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  uint32_T N[2];
  const mxArray *c_y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv18[2] = { 1, 21 };

  uint32_T u4;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /*      fun = @(block_struct) abs(det(block_struct.data)); */
  /*      trafoDet = blockproc(trafo,[2 2],fun); */
  emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  trafoDet = det(trafo);
  trafoDet = muDoubleScalarAbs(trafoDet);
  emlrtPopRtStackR2012b(&bd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);

  /* weights = weights.*trafoDet; */
  i = 0;
  while (i <= weights_size[1] - 1) {
    i19 = 1 + i;
    emlrtDynamicBoundsCheckFastR2012b(i19, 1, 1, &mc_emlrtBCI,
      emlrtRootTLSGlobal);
    i19 = (int32_T)(1.0 + (real_T)i);
    emlrtDynamicBoundsCheckFastR2012b(i19, 1, weights_size[1], &nc_emlrtBCI,
      emlrtRootTLSGlobal);
    i19 = (int32_T)(1.0 + (real_T)i);
    emlrtDynamicBoundsCheckFastR2012b(i19, 1, weights_size[1], &lc_emlrtBCI,
      emlrtRootTLSGlobal);
    weights_data[0] *= trafoDet;
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  i = 1;
  emxInit_int32_T(&r8, 1, &o_emlrtRTEI, TRUE);
  emxInit_real_T(&r9, 2, &o_emlrtRTEI, TRUE);
  while (i - 1 <= weights_size[1] - 1) {
    i19 = i << 1;
    if (i19 == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &mc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    for (i20 = 0; i20 < 2; i20++) {
      for (i21 = 0; i21 < 2; i21++) {
        i22 = (i20 + i19) - 1;
        stress[i21 + (i20 << 1)] = trafo[i21 +
          ((emlrtDynamicBoundsCheckFastR2012b(i22, 1, 2, &sc_emlrtBCI,
             emlrtRootTLSGlobal) - 1) << 1)];
      }
    }

    mldivide(stress, dv2, inv);
    emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);

    /*          fun = @(block_struct) block_struct.data*(inv) * weights(i); */
    /*          gradientMatBase(2*i-1:2*i,:) = blockproc(gradientMatBase(2*i-1:2*i,:),[2 2],fun); */
    i19 = i << 1;
    if (i19 == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &nc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    }

    i20 = i << 1;
    if (i20 == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &oc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    }

    for (i21 = 0; i21 < 2; i21++) {
      i22 = gradientMatBase->size[0];
      i23 = (int32_T)((real_T)i20 + (-1.0 + (real_T)i21));
      iv14[i21] = (int8_T)((int8_T)emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22,
        &tc_emlrtBCI, emlrtRootTLSGlobal) - 1);
    }

    loop_ub = gradientMatBase->size[1];
    i20 = r8->size[0];
    r8->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r8, i20, (int32_T)sizeof(int32_T),
                      &o_emlrtRTEI);
    for (i20 = 0; i20 < loop_ub; i20++) {
      r8->data[i20] = i20;
    }

    emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    loop_ub = gradientMatBase->size[1];
    i20 = r9->size[0] * r9->size[1];
    r9->size[0] = 2;
    r9->size[1] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r9, i20, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    for (i20 = 0; i20 < loop_ub; i20++) {
      for (i21 = 0; i21 < 2; i21++) {
        i22 = gradientMatBase->size[0];
        i23 = (int32_T)((real_T)i19 + (-1.0 + (real_T)i21));
        r9->data[i21 + r9->size[0] * i20] = gradientMatBase->data
          [(emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &uc_emlrtBCI,
             emlrtRootTLSGlobal) + gradientMatBase->size[0] * i20) - 1];
      }
    }

    gradientMatBaseFun(r9, inv, weights_data[emlrtDynamicBoundsCheckFastR2012b(i,
      1, weights_size[1], &vc_emlrtBCI, emlrtRootTLSGlobal) - 1]);
    emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
    b_stress[0] = 2;
    b_stress[1] = r8->size[0];
    emlrtSubAssignSizeCheckR2012b(b_stress, 2, *(int32_T (*)[2])r9->size, 2,
      &j_emlrtECI, emlrtRootTLSGlobal);
    loop_ub = r9->size[1];
    for (i19 = 0; i19 < loop_ub; i19++) {
      for (i20 = 0; i20 < 2; i20++) {
        gradientMatBase->data[iv14[i20] + gradientMatBase->size[0] * r8->
          data[i19]] = r9->data[i20 + r9->size[0] * i19];
      }
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_int32_T(&r8);
  emlrtPushRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
  repmat(0.5 * (real_T)grad_u0_size[1], stress_data, stress_size);
  emlrtPopRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
  for (i19 = 0; i19 < 2; i19++) {
    b_stress[i19] = stress_size[i19];
    grad_u0[i19] = grad_u0_size[i19];
  }

  emlrtSizeEqCheck2DFastR2012b(b_stress, grad_u0, &k_emlrtECI,
    emlrtRootTLSGlobal);
  loop_ub = stress_size[0] * stress_size[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    grad_u0_data[i19] += stress_data[i19];
  }

  emxInit_real_T(&b, 2, &o_emlrtRTEI, TRUE);

  /*      sigmaCell = mat2cell(sigma_u0,2,2*ones(1,size(grad_u0,2)/2)); */
  /*      sigmaCell = blkdiag(sigmaCell{:}); */
  emlrtPushRtStackR2012b(&vc_emlrtRSI, emlrtRootTLSGlobal);
  makeBlockDiag2by2(sigma_u0_data, sigma_u0_size, sigmaCell_data, b_stress);
  emlrtPopRtStackR2012b(&vc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
  i19 = b->size[0] * b->size[1];
  b->size[0] = b_stress[0];
  b->size[1] = b_stress[1];
  emxEnsureCapacity((emxArray__common *)b, i19, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  loop_ub = b_stress[0] * b_stress[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    b->data[i19] = sigmaCell_data[i19];
  }

  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  if (!(stress_size[1] == b_stress[0])) {
    if ((b_stress[0] == 1) && (b_stress[1] == 1)) {
      emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
      y = NULL;
      m5 = mxCreateCharArray(2, iv15);
      for (i = 0; i < 45; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, cv18);
      emlrtAssign(&y, m5);
      error(message(y, &c_emlrtMCI), &d_emlrtMCI);
      emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
      b_y = NULL;
      m5 = mxCreateCharArray(2, iv16);
      for (i = 0; i < 21; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m5, cv20);
      emlrtAssign(&b_y, m5);
      error(message(b_y, &e_emlrtMCI), &f_emlrtMCI);
      emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
    }
  }

  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emxInit_real_T(&mat, 2, &p_emlrtRTEI, TRUE);
  if ((stress_size[1] == 1) || (b_stress[0] == 1)) {
    i19 = mat->size[0] * mat->size[1];
    mat->size[0] = 2;
    mat->size[1] = b_stress[1];
    emxEnsureCapacity((emxArray__common *)mat, i19, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    for (i19 = 0; i19 < 2; i19++) {
      loop_ub = b_stress[1];
      for (i20 = 0; i20 < loop_ub; i20++) {
        mat->data[i19 + mat->size[0] * i20] = 0.0;
        j = stress_size[1];
        for (i21 = 0; i21 < j; i21++) {
          mat->data[i19 + mat->size[0] * i20] += grad_u0_data[i19 + (i21 << 1)] *
            sigmaCell_data[i21 + b_stress[0] * i20];
        }
      }
    }
  } else {
    i19 = r9->size[0] * r9->size[1];
    r9->size[0] = 2;
    emxEnsureCapacity((emxArray__common *)r9, i19, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    i19 = r9->size[0] * r9->size[1];
    r9->size[1] = b_stress[1];
    emxEnsureCapacity((emxArray__common *)r9, i19, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    loop_ub = b_stress[1] << 1;
    for (i19 = 0; i19 < loop_ub; i19++) {
      r9->data[i19] = 0.0;
    }

    emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    i19 = mat->size[0] * mat->size[1];
    mat->size[0] = 2;
    emxEnsureCapacity((emxArray__common *)mat, i19, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    i19 = mat->size[0] * mat->size[1];
    mat->size[1] = b_stress[1];
    emxEnsureCapacity((emxArray__common *)mat, i19, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    loop_ub = b_stress[1] << 1;
    for (i19 = 0; i19 < loop_ub; i19++) {
      mat->data[i19] = 0.0;
    }

    if ((b_stress[1] < 1) || (stress_size[1] < 1)) {
    } else {
      emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
      trafoDet = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      m_t = (ptrdiff_t)(2);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      n_t = (ptrdiff_t)(b_stress[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      k_t = (ptrdiff_t)(stress_size[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      lda_t = (ptrdiff_t)(2);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      ldb_t = (ptrdiff_t)(stress_size[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      ldc_t = (ptrdiff_t)(2);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
      alpha1_t = (double *)(&trafoDet);
      emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
      Aia0_t = (double *)(&grad_u0_data[0]);
      emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      Bib0_t = (double *)(&b->data[0]);
      emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      beta1_t = (double *)(&beta1);
      emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      Cic0_t = (double *)(&mat->data[0]);
      emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
      emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&b);
  emlrtPopRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);

  /*      fun = @(block_struct) block_struct.data'; */
  /*      stress = blockproc(stress,[2 2],fun); */
  emlrtPushRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  stress_size[1] = mat->size[1];
  loop_ub = mat->size[0] * mat->size[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    stress_data[i19] = mat->data[i19];
  }

  for (i19 = 0; i19 < 2; i19++) {
    N[i19] = (uint32_T)mat->size[i19];
  }

  trafoDet = 0.5 * (real_T)N[1];
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, trafoDet, mxDOUBLE_CLASS, (int32_T)
    trafoDet, &rc_emlrtRTEI, emlrtRootTLSGlobal);
  j = 1;
  while (j - 1 <= (int32_T)trafoDet - 1) {
    i19 = j << 1;
    if (i19 == j << 1) {
    } else {
      emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &qc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
    }

    i20 = j << 1;
    if (i20 == j << 1) {
    } else {
      emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &pc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
    }

    for (i21 = 0; i21 < 2; i21++) {
      for (i22 = 0; i22 < 2; i22++) {
        i23 = (int32_T)((real_T)i19 + (-1.0 + (real_T)i22));
        stress[i22 + (i21 << 1)] = stress_data[i21 +
          ((emlrtDynamicBoundsCheckFastR2012b(i23, 1, stress_size[1],
             &qc_emlrtBCI, emlrtRootTLSGlobal) - 1) << 1)];
      }
    }

    for (i19 = 0; i19 < 2; i19++) {
      for (i21 = 0; i21 < 2; i21++) {
        i22 = (int32_T)((real_T)i20 + (-1.0 + (real_T)i19));
        stress_data[i21 + ((emlrtDynamicBoundsCheckFastR2012b(i22, 1,
          stress_size[1], &rc_emlrtBCI, emlrtRootTLSGlobal) - 1) << 1)] =
          stress[i21 + (i19 << 1)];
      }
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  if (!(stress_size[1] == gradientMatBase->size[0])) {
    if ((gradientMatBase->size[0] == 1) && (gradientMatBase->size[1] == 1)) {
      emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m5 = mxCreateCharArray(2, iv17);
      for (i = 0; i < 45; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, cv18);
      emlrtAssign(&c_y, m5);
      error(message(c_y, &c_emlrtMCI), &d_emlrtMCI);
      emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
      d_y = NULL;
      m5 = mxCreateCharArray(2, iv18);
      for (i = 0; i < 21; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m5, cv20);
      emlrtAssign(&d_y, m5);
      error(message(d_y, &e_emlrtMCI), &f_emlrtMCI);
      emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
    }
  }

  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  if ((stress_size[1] == 1) || (gradientMatBase->size[0] == 1)) {
    i19 = mat->size[0] * mat->size[1];
    mat->size[0] = 2;
    mat->size[1] = gradientMatBase->size[1];
    emxEnsureCapacity((emxArray__common *)mat, i19, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    for (i19 = 0; i19 < 2; i19++) {
      loop_ub = gradientMatBase->size[1];
      for (i20 = 0; i20 < loop_ub; i20++) {
        mat->data[i19 + mat->size[0] * i20] = 0.0;
        j = stress_size[1];
        for (i21 = 0; i21 < j; i21++) {
          mat->data[i19 + mat->size[0] * i20] += stress_data[i19 + (i21 << 1)] *
            gradientMatBase->data[i21 + gradientMatBase->size[0] * i20];
        }
      }
    }
  } else {
    N[1] = (uint32_T)gradientMatBase->size[1];
    i19 = r9->size[0] * r9->size[1];
    r9->size[0] = 2;
    emxEnsureCapacity((emxArray__common *)r9, i19, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    i19 = r9->size[0] * r9->size[1];
    r9->size[1] = (int32_T)N[1];
    emxEnsureCapacity((emxArray__common *)r9, i19, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    loop_ub = (int32_T)N[1] << 1;
    for (i19 = 0; i19 < loop_ub; i19++) {
      r9->data[i19] = 0.0;
    }

    emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    i19 = mat->size[0] * mat->size[1];
    mat->size[0] = 2;
    emxEnsureCapacity((emxArray__common *)mat, i19, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    i19 = mat->size[0] * mat->size[1];
    mat->size[1] = (int32_T)N[1];
    emxEnsureCapacity((emxArray__common *)mat, i19, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    loop_ub = (int32_T)N[1] << 1;
    for (i19 = 0; i19 < loop_ub; i19++) {
      mat->data[i19] = 0.0;
    }

    if ((gradientMatBase->size[1] < 1) || (stress_size[1] < 1)) {
    } else {
      emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
      trafoDet = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      m_t = (ptrdiff_t)(2);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      n_t = (ptrdiff_t)(gradientMatBase->size[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      k_t = (ptrdiff_t)(stress_size[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      lda_t = (ptrdiff_t)(2);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      ldb_t = (ptrdiff_t)(stress_size[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      ldc_t = (ptrdiff_t)(2);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
      alpha1_t = (double *)(&trafoDet);
      emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
      Aia0_t = (double *)(&stress_data[0]);
      emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      Bib0_t = (double *)(&gradientMatBase->data[0]);
      emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      beta1_t = (double *)(&beta1);
      emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      Cic0_t = (double *)(&mat->data[0]);
      emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
      emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&r9);
  emlrtPopRtStackR2012b(&yc_emlrtRSI, emlrtRootTLSGlobal);

  /*  size is 2-by-2*k */
  /*       fun = @(block_struct) trace(block_struct.data); */
  /*       F = blockproc(mat,[2 2],fun); */
  emlrtPushRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  for (i19 = 0; i19 < 2; i19++) {
    N[i19] = (uint32_T)mat->size[i19];
  }

  trafoDet = 0.5 * (real_T)N[1];
  i19 = F->size[0] * F->size[1];
  F->size[0] = 1;
  F->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(trafoDet, &n_emlrtDCI,
    emlrtRootTLSGlobal);
  emxEnsureCapacity((emxArray__common *)F, i19, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(trafoDet, &n_emlrtDCI,
    emlrtRootTLSGlobal);
  for (i19 = 0; i19 < loop_ub; i19++) {
    F->data[i19] = 0.0;
  }

  trafoDet = 0.5 * (real_T)N[1];
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, trafoDet, mxDOUBLE_CLASS, (int32_T)
    trafoDet, &sc_emlrtRTEI, emlrtRootTLSGlobal);
  i = 1;
  while (i - 1 <= (int32_T)trafoDet - 1) {
    u4 = (uint32_T)i << 1;
    if (u4 == (uint32_T)i << 1) {
    } else {
      emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &tc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
    }

    for (i19 = 0; i19 < 2; i19++) {
      i20 = mat->size[1];
      i21 = (int32_T)((real_T)u4 + (-1.0 + (real_T)i19));
      emlrtDynamicBoundsCheckFastR2012b(i21, 1, i20, &oc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    beta1 = 0.0;
    for (j = 0; j < 2; j++) {
      beta1 += mat->data[j + mat->size[0] * ((int32_T)((real_T)u4 + (-1.0 +
        (real_T)j)) - 1)];
    }

    i19 = F->size[1];
    F->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i19, &pc_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = beta1;
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&mat);
  emlrtPopRtStackR2012b(&ad_emlrtRSI, emlrtRootTLSGlobal);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void localAssemblingSVK(emxArray_real_T *stress, emxArray_real_T
  *gradientMatBase, const real_T trafo[4], const real_T weights_data[7], const
  int32_T weights_size[2], real_T Mu, real_T Lambda, const real_T grad_u0_data
  [28], const int32_T grad_u0_size[2], const real_T sigma_u0_data[28], const
  int32_T sigma_u0_size[2], emxArray_real_T *localA)
{
  int32_T i;
  emxArray_int32_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *r6;
  emxArray_real_T *b_stress;
  int32_T i10;
  int32_T i11;
  int32_T i12;
  int32_T k;
  int32_T i13;
  int32_T loop_ub;
  int32_T i14;
  int8_T iv9[2];
  int32_T i15;
  int32_T b_k;
  real_T b_trafo[4];
  real_T grad_u0[4];
  real_T sigma_u0[4];
  int32_T iv10[2];
  real_T alpha1;
  uint32_T u0;
  uint32_T u1;
  static const real_T dv1[4] = { 1.0, 0.0, 0.0, 1.0 };

  int32_T iv11[2];
  const mxArray *y;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *m4;
  char_T cv14[45];
  static const char_T cv15[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv13[2] = { 1, 21 };

  char_T cv16[21];
  static const char_T cv17[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *mat;
  emxArray_real_T *r7;
  uint32_T N[2];
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  real_T t;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  i = 1;
  emxInit_int32_T(&r4, 1, &l_emlrtRTEI, TRUE);
  emxInit_real_T(&r5, 2, &l_emlrtRTEI, TRUE);
  emxInit_real_T(&r6, 2, &l_emlrtRTEI, TRUE);
  emxInit_real_T(&b_stress, 2, &l_emlrtRTEI, TRUE);
  while (i - 1 <= weights_size[1] - 1) {
    /*           fun1 = @(block_struct) getStressSVK(block_struct.data*(trafo(:,2*i-1:2*i)\eye(2)),Mu,Lambda,grad_u0(:,2*i-1:2*i),sigma_u0(:,2*i-1:2*i))'*... */
    /*                                                   abs(det(trafo(:,2*i-1:2*i)))   *   weights(i);                                     */
    /*          stress(:,2*i-1:2*i) = blockproc(stress(:,2*i-1:2*i),[2 2],fun1); */
    i10 = i << 1;
    if (i10 == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &tb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    }

    i11 = i << 1;
    if (i11 == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ub_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    }

    i12 = i << 1;
    if (i12 == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &vb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    }

    k = i << 1;
    if (k == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &wb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    }

    i13 = i << 1;
    if (i13 == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &xb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    }

    loop_ub = stress->size[0];
    i14 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r4, i14, (int32_T)sizeof(int32_T),
                      &l_emlrtRTEI);
    for (i14 = 0; i14 < loop_ub; i14++) {
      r4->data[i14] = i14;
    }

    for (i14 = 0; i14 < 2; i14++) {
      i15 = stress->size[1];
      b_k = (int32_T)((real_T)i13 + (-1.0 + (real_T)i14));
      iv9[i14] = (int8_T)((int8_T)emlrtDynamicBoundsCheckFastR2012b(b_k, 1, i15,
        &xb_emlrtBCI, emlrtRootTLSGlobal) - 1);
    }

    emlrtPushRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    loop_ub = stress->size[0];
    i13 = b_stress->size[0] * b_stress->size[1];
    b_stress->size[0] = loop_ub;
    b_stress->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)b_stress, i13, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    for (i13 = 0; i13 < 2; i13++) {
      for (i14 = 0; i14 < loop_ub; i14++) {
        i15 = stress->size[1];
        b_k = (int32_T)((real_T)i10 + (-1.0 + (real_T)i13));
        b_stress->data[i14 + b_stress->size[0] * i13] = stress->data[i14 +
          stress->size[0] * (emlrtDynamicBoundsCheckFastR2012b(b_k, 1, i15,
          &yb_emlrtBCI, emlrtRootTLSGlobal) - 1)];
      }
    }

    for (i10 = 0; i10 < 2; i10++) {
      for (i13 = 0; i13 < 2; i13++) {
        i14 = (i10 + i11) - 1;
        b_trafo[i13 + (i10 << 1)] = trafo[i13 +
          ((emlrtDynamicBoundsCheckFastR2012b(i14, 1, 2, &ac_emlrtBCI,
             emlrtRootTLSGlobal) - 1) << 1)];
      }
    }

    for (i10 = 0; i10 < 2; i10++) {
      for (i11 = 0; i11 < 2; i11++) {
        i13 = (int32_T)((real_T)i12 + (-1.0 + (real_T)i10));
        grad_u0[i11 + (i10 << 1)] = grad_u0_data[i11 + grad_u0_size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i13, 1, grad_u0_size[1],
            &bc_emlrtBCI, emlrtRootTLSGlobal) - 1)];
      }
    }

    for (i10 = 0; i10 < 2; i10++) {
      for (i11 = 0; i11 < 2; i11++) {
        i12 = (int32_T)((real_T)k + (-1.0 + (real_T)i10));
        sigma_u0[i11 + (i10 << 1)] = sigma_u0_data[i11 + sigma_u0_size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i12, 1, sigma_u0_size[1],
            &cc_emlrtBCI, emlrtRootTLSGlobal) - 1)];
      }
    }

    strain2Stress(b_stress, b_trafo, Mu, Lambda, grad_u0, sigma_u0,
                  weights_data[emlrtDynamicBoundsCheckFastR2012b(i, 1,
      weights_size[1], &dc_emlrtBCI, emlrtRootTLSGlobal) - 1], r5);
    emlrtPopRtStackR2012b(&bc_emlrtRSI, emlrtRootTLSGlobal);
    iv10[0] = r4->size[0];
    iv10[1] = 2;
    emlrtSubAssignSizeCheckR2012b(iv10, 2, *(int32_T (*)[2])r5->size, 2,
      &h_emlrtECI, emlrtRootTLSGlobal);
    for (i10 = 0; i10 < 2; i10++) {
      loop_ub = r5->size[0];
      for (i11 = 0; i11 < loop_ub; i11++) {
        stress->data[r4->data[i11] + stress->size[0] * iv9[i10]] = r5->data[i11
          + r5->size[0] * i10];
      }
    }

    /*          fun2 = @(block_struct) 0.5*(block_struct.data*(trafo(:,2*i-1:2*i)\eye(2))+(block_struct.data*(trafo(:,2*i-1:2*i)\eye(2)))'); */
    /*          gradientMatBase(2*i-1:2*i,:) = blockproc(gradientMatBase(2*i-1:2*i,:),[2 2],fun2);        */
    i10 = i << 1;
    if (i10 == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &yb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
    }

    i11 = i << 1;
    if (i11 == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ac_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
    }

    i12 = i << 1;
    if (i12 == i << 1) {
    } else {
      emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &bc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
    }

    for (k = 0; k < 2; k++) {
      i13 = gradientMatBase->size[0];
      i14 = (int32_T)((real_T)i12 + (-1.0 + (real_T)k));
      iv9[k] = (int8_T)((int8_T)emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13,
        &ec_emlrtBCI, emlrtRootTLSGlobal) - 1);
    }

    loop_ub = gradientMatBase->size[1];
    i12 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r4, i12, (int32_T)sizeof(int32_T),
                      &l_emlrtRTEI);
    for (i12 = 0; i12 < loop_ub; i12++) {
      r4->data[i12] = i12;
    }

    emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
    for (i12 = 0; i12 < 2; i12++) {
      k = gradientMatBase->size[0];
      i13 = (int32_T)((real_T)i10 + (-1.0 + (real_T)i12));
      emlrtDynamicBoundsCheckFastR2012b(i13, 1, k, &fc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    for (i12 = 0; i12 < 2; i12++) {
      k = (int32_T)((real_T)i11 + (-1.0 + (real_T)i12));
      emlrtDynamicBoundsCheckFastR2012b(k, 1, 2, &gc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    loop_ub = gradientMatBase->size[1];
    i12 = r6->size[0] * r6->size[1];
    r6->size[0] = 2;
    r6->size[1] = loop_ub;
    emxEnsureCapacity((emxArray__common *)r6, i12, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    for (i12 = 0; i12 < loop_ub; i12++) {
      for (k = 0; k < 2; k++) {
        r6->data[k + r6->size[0] * i12] = gradientMatBase->data[((int32_T)
          ((real_T)i10 + (-1.0 + (real_T)k)) + gradientMatBase->size[0] * i12) -
          1];
      }
    }

    i10 = gradientMatBase->size[1];
    alpha1 = 0.5 * (real_T)i10;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, alpha1, mxDOUBLE_CLASS, (int32_T)
      alpha1, &gc_emlrtRTEI, emlrtRootTLSGlobal);
    b_k = 1;
    while (b_k - 1 <= (int32_T)alpha1 - 1) {
      /* mat(:,2*i-1:2*i) = 0.5*(mat(:,2*i-1:2*i)*(trafo\eye(2))+(mat(:,2*i-1:2*i)*(trafo\eye(2)))'); */
      u0 = (uint32_T)b_k << 1;
      if (u0 == (uint32_T)b_k << 1) {
      } else {
        emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &hc_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
      }

      u1 = (uint32_T)b_k << 1;
      if (u1 == (uint32_T)b_k << 1) {
      } else {
        emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ic_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
      for (i10 = 0; i10 < 2; i10++) {
        i12 = r6->size[1];
        k = (int32_T)((real_T)u0 + (-1.0 + (real_T)i10));
        emlrtDynamicBoundsCheckFastR2012b(k, 1, i12, &hc_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      for (i10 = 0; i10 < 2; i10++) {
        for (i12 = 0; i12 < 2; i12++) {
          b_trafo[i12 + (i10 << 1)] = trafo[i12 + (((i10 + i11) - 2) << 1)];
        }
      }

      mldivide(b_trafo, dv1, sigma_u0);
      i10 = r6->size[1];
      for (i12 = 0; i12 < 2; i12++) {
        for (k = 0; k < 2; k++) {
          grad_u0[k + (i12 << 1)] = r6->data[k + r6->size[0] * ((int32_T)
            ((real_T)u0 + (-1.0 + (real_T)i12)) - 1)];
        }
      }

      for (i12 = 0; i12 < 2; i12++) {
        for (k = 0; k < 2; k++) {
          i13 = (int32_T)((real_T)u1 + (-1.0 + (real_T)k));
          r6->data[i12 + r6->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i13, 1,
            i10, &ic_emlrtBCI, emlrtRootTLSGlobal) - 1)] = 0.0;
          for (i13 = 0; i13 < 2; i13++) {
            i14 = (int32_T)((real_T)u1 + (-1.0 + (real_T)k));
            i15 = (int32_T)((real_T)u1 + (-1.0 + (real_T)k));
            r6->data[i12 + r6->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i14,
              1, i10, &ic_emlrtBCI, emlrtRootTLSGlobal) - 1)] = r6->data[i12 +
              r6->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i15, 1, i10,
              &ic_emlrtBCI, emlrtRootTLSGlobal) - 1)] + grad_u0[i12 + (i13 << 1)]
              * sigma_u0[i13 + (k << 1)];
          }
        }
      }

      emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);

      /*  no symmetrization */
      b_k++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
    iv11[0] = 2;
    iv11[1] = r4->size[0];
    emlrtSubAssignSizeCheckR2012b(iv11, 2, *(int32_T (*)[2])r6->size, 2,
      &i_emlrtECI, emlrtRootTLSGlobal);
    loop_ub = r6->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      for (i11 = 0; i11 < 2; i11++) {
        gradientMatBase->data[iv9[i11] + gradientMatBase->size[0] * r4->data[i10]]
          = r6->data[i11 + r6->size[0] * i10];
      }
    }

    /*  do not do it for nonlinear method (see subfunction) */
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&b_stress);
  emxFree_real_T(&r6);
  emxFree_real_T(&r5);
  emxFree_int32_T(&r4);

  /*      fun = @(block_struct) block_struct.data'; */
  /*      stress = blockproc(stress,[2 2],fun); */
  /* stress = stressTranspose(stress);   % <----- do not do it twice */
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  if (!(stress->size[1] == gradientMatBase->size[0])) {
    if (((stress->size[0] == 1) && (stress->size[1] == 1)) ||
        ((gradientMatBase->size[0] == 1) && (gradientMatBase->size[1] == 1))) {
      emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
      y = NULL;
      m4 = mxCreateCharArray(2, iv12);
      for (i = 0; i < 45; i++) {
        cv14[i] = cv15[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m4, cv14);
      emlrtAssign(&y, m4);
      error(message(y, &c_emlrtMCI), &d_emlrtMCI);
      emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
    } else {
      emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
      b_y = NULL;
      m4 = mxCreateCharArray(2, iv13);
      for (i = 0; i < 21; i++) {
        cv16[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m4, cv16);
      emlrtAssign(&b_y, m4);
      error(message(b_y, &e_emlrtMCI), &f_emlrtMCI);
      emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
    }
  }

  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emxInit_real_T(&mat, 2, &m_emlrtRTEI, TRUE);
  emxInit_real_T(&r7, 2, &l_emlrtRTEI, TRUE);
  if ((stress->size[1] == 1) || (gradientMatBase->size[0] == 1)) {
    i10 = mat->size[0] * mat->size[1];
    mat->size[0] = stress->size[0];
    mat->size[1] = gradientMatBase->size[1];
    emxEnsureCapacity((emxArray__common *)mat, i10, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = stress->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      b_k = gradientMatBase->size[1];
      for (i11 = 0; i11 < b_k; i11++) {
        mat->data[i10 + mat->size[0] * i11] = 0.0;
        k = stress->size[1];
        for (i12 = 0; i12 < k; i12++) {
          mat->data[i10 + mat->size[0] * i11] += stress->data[i10 + stress->
            size[0] * i12] * gradientMatBase->data[i12 + gradientMatBase->size[0]
            * i11];
        }
      }
    }
  } else {
    N[0] = (uint32_T)stress->size[0];
    N[1] = (uint32_T)gradientMatBase->size[1];
    i10 = r7->size[0] * r7->size[1];
    r7->size[0] = (int32_T)N[0];
    emxEnsureCapacity((emxArray__common *)r7, i10, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i10 = r7->size[0] * r7->size[1];
    r7->size[1] = (int32_T)N[1];
    emxEnsureCapacity((emxArray__common *)r7, i10, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)N[0] * (int32_T)N[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      r7->data[i10] = 0.0;
    }

    emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    i10 = mat->size[0] * mat->size[1];
    mat->size[0] = (int32_T)N[0];
    emxEnsureCapacity((emxArray__common *)mat, i10, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i10 = mat->size[0] * mat->size[1];
    mat->size[1] = (int32_T)N[1];
    emxEnsureCapacity((emxArray__common *)mat, i10, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)N[0] * (int32_T)N[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      mat->data[i10] = 0.0;
    }

    if ((stress->size[0] < 1) || (gradientMatBase->size[1] < 1) || (stress->
         size[1] < 1)) {
    } else {
      emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      emlrtPushRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      m_t = (ptrdiff_t)(stress->size[0]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ib_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      n_t = (ptrdiff_t)(gradientMatBase->size[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&jb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      k_t = (ptrdiff_t)(stress->size[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&kb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      lda_t = (ptrdiff_t)(stress->size[0]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&lb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      ldb_t = (ptrdiff_t)(stress->size[1]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      ldc_t = (ptrdiff_t)(stress->size[0]);
      emlrtPopRtStackR2012b(&ub_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
      alpha1_t = (double *)(&alpha1);
      emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
      Aia0_t = (double *)(&stress->data[0]);
      emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      Bib0_t = (double *)(&gradientMatBase->data[0]);
      emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      beta1_t = (double *)(&beta1);
      emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      Cic0_t = (double *)(&mat->data[0]);
      emlrtPopRtStackR2012b(&sb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
      emlrtPopRtStackR2012b(&tb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&r7);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);

  /*  stress - times - test-strain */
  /*      fun = @(block_struct) [trace(block_struct.data(1:2,1:2)) trace(block_struct.data(3:4,1:2));trace(block_struct.data(1:2,3:4)) trace(block_struct.data(3:4,3:4))]; */
  /*      localA = blockproc(mat,[4 4],fun); */
  emlrtPushRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);
  for (i10 = 0; i10 < 2; i10++) {
    N[i10] = (uint32_T)mat->size[i10];
  }

  alpha1 = 0.5 * (real_T)N[0];
  beta1 = 0.5 * (real_T)N[1];
  i10 = localA->size[0] * localA->size[1];
  localA->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(alpha1, &l_emlrtDCI,
    emlrtRootTLSGlobal);
  localA->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(beta1, &m_emlrtDCI,
    emlrtRootTLSGlobal);
  emxEnsureCapacity((emxArray__common *)localA, i10, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  emlrtIntegerCheckFastR2012b(alpha1, &l_emlrtDCI, emlrtRootTLSGlobal);
  emlrtIntegerCheckFastR2012b(beta1, &m_emlrtDCI, emlrtRootTLSGlobal);
  emlrtIntegerCheckFastR2012b(alpha1, &l_emlrtDCI, emlrtRootTLSGlobal);
  emlrtIntegerCheckFastR2012b(beta1, &m_emlrtDCI, emlrtRootTLSGlobal);
  loop_ub = (int32_T)alpha1 * (int32_T)beta1;
  for (i10 = 0; i10 < loop_ub; i10++) {
    localA->data[i10] = 0.0;
  }

  alpha1 = 0.5 * (real_T)N[0];
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, alpha1, mxDOUBLE_CLASS, (int32_T)
    alpha1, &cc_emlrtRTEI, emlrtRootTLSGlobal);
  k = 1;
  while (k - 1 <= (int32_T)alpha1 - 1) {
    beta1 = 0.5 * (real_T)N[1];
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, beta1, mxDOUBLE_CLASS, (int32_T)
      beta1, &dc_emlrtRTEI, emlrtRootTLSGlobal);
    i = 1;
    while (i - 1 <= (int32_T)beta1 - 1) {
      u0 = (uint32_T)k << 1;
      if (u0 == (uint32_T)k << 1) {
      } else {
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ec_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
      }

      u1 = (uint32_T)i << 1;
      if (u1 == (uint32_T)i << 1) {
      } else {
        emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &fc_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
      }

      for (i10 = 0; i10 < 2; i10++) {
        i11 = mat->size[0];
        i12 = (int32_T)((real_T)u0 + (-1.0 + (real_T)i10));
        emlrtDynamicBoundsCheckFastR2012b(i12, 1, i11, &tb_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      for (i10 = 0; i10 < 2; i10++) {
        i11 = mat->size[1];
        i12 = (int32_T)((real_T)u1 + (-1.0 + (real_T)i10));
        emlrtDynamicBoundsCheckFastR2012b(i12, 1, i11, &ub_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      t = 0.0;
      for (b_k = 0; b_k < 2; b_k++) {
        t += mat->data[((int32_T)((real_T)u0 + (-1.0 + (real_T)b_k)) + mat->
                        size[0] * ((int32_T)((real_T)u1 + (-1.0 + (real_T)b_k))
          - 1)) - 1];
      }

      i10 = localA->size[0];
      i11 = localA->size[1];
      localA->data[(emlrtDynamicBoundsCheckFastR2012b(k, 1, i10, &vb_emlrtBCI,
        emlrtRootTLSGlobal) + localA->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(i, 1, i11, &wb_emlrtBCI,
        emlrtRootTLSGlobal) - 1)) - 1] = t;
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    k++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&mat);
  emlrtPopRtStackR2012b(&ec_emlrtRSI, emlrtRootTLSGlobal);

  /* assemble2by2Blocks(mat); */
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

static void makeBlockDiag2by2(const real_T trafo_data[28], const int32_T
  trafo_size[2], real_T trafoCell_data[196], int32_T trafoCell_size[2])
{
  int32_T loop_ub;
  int32_T i24;
  real_T d2;
  int32_T i25;
  int32_T i26;
  int32_T i27;
  int32_T i28;
  int32_T i29;
  int32_T i30;
  int32_T i31;
  trafoCell_size[0] = trafo_size[1];
  trafoCell_size[1] = trafo_size[1];
  loop_ub = trafo_size[1] * trafo_size[1];
  for (i24 = 0; i24 < loop_ub; i24++) {
    trafoCell_data[i24] = 0.0;
  }

  d2 = 0.5 * (real_T)trafo_size[1];
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d2, mxDOUBLE_CLASS, (int32_T)d2,
    &uc_emlrtRTEI, emlrtRootTLSGlobal);
  loop_ub = 1;
  while (loop_ub - 1 <= (int32_T)d2 - 1) {
    i24 = loop_ub << 1;
    if (i24 == loop_ub << 1) {
    } else {
      emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &vc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
    }

    i25 = loop_ub << 1;
    if (i25 == loop_ub << 1) {
    } else {
      emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &wc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
    }

    i26 = loop_ub << 1;
    if (i26 == loop_ub << 1) {
    } else {
      emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &xc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
    }

    for (i27 = 0; i27 < 2; i27++) {
      for (i28 = 0; i28 < 2; i28++) {
        i29 = (int32_T)((real_T)i24 + (-1.0 + (real_T)i27));
        i30 = (int32_T)((real_T)i25 + (-1.0 + (real_T)i28));
        i31 = (int32_T)((real_T)i26 + (-1.0 + (real_T)i27));
        trafoCell_data[(emlrtDynamicBoundsCheckFastR2012b(i30, 1, trafo_size[1],
          &xc_emlrtBCI, emlrtRootTLSGlobal) + trafo_size[1] *
                        (emlrtDynamicBoundsCheckFastR2012b(i31, 1, trafo_size[1],
          &yc_emlrtBCI, emlrtRootTLSGlobal) - 1)) - 1] = trafo_data[i28 +
          trafo_size[0] * (emlrtDynamicBoundsCheckFastR2012b(i29, 1, trafo_size
          [1], &wc_emlrtBCI, emlrtRootTLSGlobal) - 1)];
      }
    }

    loop_ub++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }
}

static void strain2Stress(const emxArray_real_T *strain, const real_T trafo[4],
  real_T Mu, real_T Lambda, const real_T grad_u0[4], const real_T sigma_u0[4],
  real_T weight, emxArray_real_T *stress)
{
  uint32_T uv1[2];
  int32_T i16;
  int32_T loop_ub;
  real_T d1;
  int32_T i;
  uint32_T u2;
  uint32_T u3;
  int32_T i17;
  int32_T i18;
  real_T eps[4];
  static const real_T b[4] = { 1.0, 0.0, 0.0, 1.0 };

  real_T b_strain[4];
  real_T y[4];
  int8_T I[4];
  real_T t;
  real_T b_y[4];
  real_T c_y;
  real_T d_y;
  real_T e_y;
  real_T f_y[4];
  real_T g_y[4];
  real_T b_I[4];
  real_T h_y[4];
  real_T c_I[4];
  for (i16 = 0; i16 < 2; i16++) {
    uv1[i16] = (uint32_T)strain->size[i16];
  }

  i16 = stress->size[0] * stress->size[1];
  stress->size[0] = (int32_T)uv1[0];
  stress->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)stress, i16, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  loop_ub = (int32_T)uv1[0] << 1;
  for (i16 = 0; i16 < loop_ub; i16++) {
    stress->data[i16] = 0.0;
  }

  d1 = 0.5 * (real_T)strain->size[0];
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d1, mxDOUBLE_CLASS, (int32_T)d1,
    &jc_emlrtRTEI, emlrtRootTLSGlobal);
  i = 1;
  while (i - 1 <= (int32_T)d1 - 1) {
    u2 = (uint32_T)i << 1;
    if (u2 == (uint32_T)i << 1) {
    } else {
      emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &kc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    }

    u3 = (uint32_T)i << 1;
    if (u3 == (uint32_T)i << 1) {
    } else {
      emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &lc_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    for (i16 = 0; i16 < 2; i16++) {
      i17 = strain->size[0];
      i18 = (int32_T)((real_T)u2 + (-1.0 + (real_T)i16));
      emlrtDynamicBoundsCheckFastR2012b(i18, 1, i17, &jc_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    mldivide(trafo, b, eps);
    for (i16 = 0; i16 < 2; i16++) {
      for (i17 = 0; i17 < 2; i17++) {
        b_strain[i17 + (i16 << 1)] = strain->data[((int32_T)((real_T)u2 + (-1.0
          + (real_T)i17)) + strain->size[0] * i16) - 1];
      }
    }

    for (i16 = 0; i16 < 2; i16++) {
      for (i17 = 0; i17 < 2; i17++) {
        y[i16 + (i17 << 1)] = 0.0;
        for (i18 = 0; i18 < 2; i18++) {
          y[i16 + (i17 << 1)] += b_strain[i16 + (i18 << 1)] * eps[i18 + (i17 <<
            1)];
        }
      }
    }

    for (i16 = 0; i16 < 2; i16++) {
      for (i17 = 0; i17 < 2; i17++) {
        eps[i17 + (i16 << 1)] = 0.5 * (y[i17 + (i16 << 1)] + y[i16 + (i17 << 1)]);
      }
    }

    for (i16 = 0; i16 < 4; i16++) {
      I[i16] = 0;
    }

    t = 0.0;
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      I[loop_ub + (loop_ub << 1)] = 1;
      t += eps[loop_ub + (loop_ub << 1)];
      for (i16 = 0; i16 < 2; i16++) {
        b_y[loop_ub + (i16 << 1)] = 0.0;
        for (i17 = 0; i17 < 2; i17++) {
          b_y[loop_ub + (i16 << 1)] += grad_u0[i17 + (loop_ub << 1)] * y[i17 +
            (i16 << 1)];
        }
      }
    }

    c_y = Lambda * t;
    d_y = 2.0 * Mu;
    t = 0.0;
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      t += b_y[loop_ub + (loop_ub << 1)];
    }

    e_y = Lambda * t;
    t = det(trafo);
    t = muDoubleScalarAbs(t);
    loop_ub = stress->size[0];
    for (i16 = 0; i16 < 2; i16++) {
      for (i17 = 0; i17 < 2; i17++) {
        b_strain[i16 + (i17 << 1)] = 0.0;
        for (i18 = 0; i18 < 2; i18++) {
          b_strain[i16 + (i17 << 1)] += grad_u0[i18 + (i16 << 1)] * y[i18 + (i17
            << 1)];
        }

        f_y[i16 + (i17 << 1)] = 0.0;
        for (i18 = 0; i18 < 2; i18++) {
          f_y[i16 + (i17 << 1)] += y[i18 + (i16 << 1)] * grad_u0[i18 + (i17 << 1)];
        }

        b_I[i17 + (i16 << 1)] = (real_T)I[i17 + (i16 << 1)] + grad_u0[i17 + (i16
          << 1)];
      }
    }

    for (i16 = 0; i16 < 2; i16++) {
      for (i17 = 0; i17 < 2; i17++) {
        g_y[i17 + (i16 << 1)] = ((c_y * b[i17 + (i16 << 1)] + d_y * eps[i17 +
          (i16 << 1)]) + e_y * b[i17 + (i16 << 1)]) + Mu * (b_strain[i17 + (i16 <<
          1)] + f_y[i17 + (i16 << 1)]);
        h_y[i16 + (i17 << 1)] = 0.0;
        for (i18 = 0; i18 < 2; i18++) {
          h_y[i16 + (i17 << 1)] += y[i17 + (i18 << 1)] * sigma_u0[i18 + (i16 <<
            1)];
        }
      }

      for (i17 = 0; i17 < 2; i17++) {
        c_I[i16 + (i17 << 1)] = 0.0;
        for (i18 = 0; i18 < 2; i18++) {
          c_I[i16 + (i17 << 1)] += b_I[i17 + (i18 << 1)] * g_y[i18 + (i16 << 1)];
        }
      }
    }

    for (i16 = 0; i16 < 2; i16++) {
      for (i17 = 0; i17 < 2; i17++) {
        i18 = (int32_T)((real_T)u3 + (-1.0 + (real_T)i17));
        stress->data[(emlrtDynamicBoundsCheckFastR2012b(i18, 1, loop_ub,
          &kc_emlrtBCI, emlrtRootTLSGlobal) + stress->size[0] * i16) - 1] =
          (h_y[i17 + (i16 << 1)] + c_I[i17 + (i16 << 1)]) * t * weight;
      }
    }

    emlrtPopRtStackR2012b(&fc_emlrtRSI, emlrtRootTLSGlobal);
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }
}

void assemblingSVK_m_file(const emxArray_real_T *DOF, const emxArray_real_T
  *trafo, const emxArray_real_T *pAll, const emxArray_real_T *t, const real_T
  gradientMatBase0_data[42], const int32_T gradientMatBase0_size[3], real_T
  lengthBasis, const real_T points_data[14], const int32_T points_size[2], const
  real_T weights_data[7], const int32_T weights_size[2], const emxArray_real_T
  *u0, const struct_T *matConst, emxArray_real_T *A, emxArray_real_T *F)
{
  emxArray_real_T *positions;
  int32_T DOF_idx_0;
  int32_T i0;
  emxArray_int32_T *r0;
  emxArray_real_T *r1;
  int32_T iv0[2];
  int32_T i1;
  int32_T grad_u0_size[2];
  uint32_T y;
  uint32_T b_y;
  emxArray_real_T *gradientMatBase;
  real_T c_y;
  real_T d0;
  emxArray_real_T *stress;
  int32_T j;
  int32_T i;
  int32_T b_A;
  int32_T i2;
  int32_T i3;
  int32_T c_A;
  int32_T count;
  int32_T b_count;
  int32_T c_count;
  int32_T d_A;
  int32_T d_count;
  int32_T e_count;
  emxArray_real_T *localA;
  emxArray_real_T *localF;
  emxArray_real_T *r2;
  emxArray_real_T *b_gradientMatBase;
  emxArray_real_T *b_stress;
  emxArray_real_T *c_gradientMatBase;
  real_T b_u0[6];
  real_T b_trafo[4];
  real_T grad_u0_data[28];
  int8_T N[2];
  int32_T sigma_u0_size[2];
  real_T sigma_u0_data[28];
  real_T grad_u0[4];
  real_T E[4];
  real_T d_y;
  static const int8_T b[4] = { 1, 0, 0, 1 };

  real_T b_weights_data[7];
  int32_T b_weights_size[2];
  real_T e_A[36];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&positions, 2, &b_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  DOF_idx_0 = DOF->size[0];
  i0 = positions->size[0] * positions->size[1];
  positions->size[0] = DOF_idx_0;
  positions->size[1] = 6;
  emxEnsureCapacity((emxArray__common *)positions, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  DOF_idx_0 = DOF->size[0] * 6;
  for (i0 = 0; i0 < DOF_idx_0; i0++) {
    positions->data[i0] = 0.0;
  }

  emxInit_int32_T(&r0, 1, &emlrtRTEI, TRUE);
  DOF_idx_0 = DOF->size[0];
  i0 = r0->size[0];
  r0->size[0] = DOF_idx_0;
  emxEnsureCapacity((emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < DOF_idx_0; i0++) {
    r0->data[i0] = i0;
  }

  emxInit_real_T(&r1, 2, &emlrtRTEI, TRUE);
  i0 = r1->size[0] * r1->size[1];
  r1->size[0] = DOF->size[0];
  r1->size[1] = 3;
  emxEnsureCapacity((emxArray__common *)r1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  DOF_idx_0 = DOF->size[0] * DOF->size[1];
  for (i0 = 0; i0 < DOF_idx_0; i0++) {
    r1->data[i0] = 2.0 * DOF->data[i0];
  }

  iv0[0] = r0->size[0];
  iv0[1] = 3;
  emlrtSubAssignSizeCheckR2012b(iv0, 2, *(int32_T (*)[2])r1->size, 2,
    &d_emlrtECI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 < 3; i0++) {
    DOF_idx_0 = r1->size[0];
    for (i1 = 0; i1 < DOF_idx_0; i1++) {
      positions->data[r0->data[i1] + positions->size[0] * (i0 << 1)] = r1->
        data[i1 + r1->size[0] * i0] - 1.0;
    }
  }

  DOF_idx_0 = positions->size[0];
  i0 = r0->size[0];
  r0->size[0] = DOF_idx_0;
  emxEnsureCapacity((emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < DOF_idx_0; i0++) {
    r0->data[i0] = i0;
  }

  i0 = r1->size[0] * r1->size[1];
  r1->size[0] = DOF->size[0];
  r1->size[1] = 3;
  emxEnsureCapacity((emxArray__common *)r1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  DOF_idx_0 = DOF->size[0] * DOF->size[1];
  for (i0 = 0; i0 < DOF_idx_0; i0++) {
    r1->data[i0] = 2.0 * DOF->data[i0];
  }

  grad_u0_size[0] = r0->size[0];
  grad_u0_size[1] = 3;
  emlrtSubAssignSizeCheckR2012b(grad_u0_size, 2, *(int32_T (*)[2])r1->size, 2,
    &e_emlrtECI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 < 3; i0++) {
    DOF_idx_0 = r1->size[0];
    for (i1 = 0; i1 < DOF_idx_0; i1++) {
      positions->data[r0->data[i1] + positions->size[0] * (1 + (i0 << 1))] =
        r1->data[i1 + r1->size[0] * i0];
    }
  }

  emxFree_real_T(&r1);
  emxFree_int32_T(&r0);
  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  y = (uint32_T)pAll->size[1] << 1;
  b_y = (uint32_T)pAll->size[1] << 1;
  i0 = A->size[0] * A->size[1];
  A->size[0] = (int32_T)y;
  A->size[1] = (int32_T)b_y;
  emxEnsureCapacity((emxArray__common *)A, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  DOF_idx_0 = (int32_T)y * (int32_T)b_y;
  for (i0 = 0; i0 < DOF_idx_0; i0++) {
    A->data[i0] = 0.0;
  }

  y = (uint32_T)pAll->size[1] << 1;
  i0 = F->size[0];
  F->size[0] = (int32_T)y;
  emxEnsureCapacity((emxArray__common *)F, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  DOF_idx_0 = (int32_T)y;
  for (i0 = 0; i0 < DOF_idx_0; i0++) {
    F->data[i0] = 0.0;
  }

  emxInit_real_T(&gradientMatBase, 2, &c_emlrtRTEI, TRUE);
  DOF_idx_0 = points_size[1] << 1;
  c_y = 4.0 * lengthBasis;
  i0 = gradientMatBase->size[0] * gradientMatBase->size[1];
  gradientMatBase->size[0] = DOF_idx_0;
  d0 = emlrtNonNegativeCheckFastR2012b(c_y, &b_emlrtDCI, emlrtRootTLSGlobal);
  gradientMatBase->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(d0, &emlrtDCI,
    emlrtRootTLSGlobal);
  emxEnsureCapacity((emxArray__common *)gradientMatBase, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  d0 = emlrtNonNegativeCheckFastR2012b(c_y, &b_emlrtDCI, emlrtRootTLSGlobal);
  DOF_idx_0 *= (int32_T)emlrtIntegerCheckFastR2012b(d0, &emlrtDCI,
    emlrtRootTLSGlobal);
  for (i0 = 0; i0 < DOF_idx_0; i0++) {
    gradientMatBase->data[i0] = 0.0;
  }

  emxInit_real_T(&stress, 2, &d_emlrtRTEI, TRUE);
  c_y = 4.0 * lengthBasis;
  DOF_idx_0 = points_size[1] << 1;
  i0 = stress->size[0] * stress->size[1];
  d0 = emlrtNonNegativeCheckFastR2012b(c_y, &d_emlrtDCI, emlrtRootTLSGlobal);
  stress->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(d0, &c_emlrtDCI,
    emlrtRootTLSGlobal);
  stress->size[1] = DOF_idx_0;
  emxEnsureCapacity((emxArray__common *)stress, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  d0 = emlrtNonNegativeCheckFastR2012b(c_y, &d_emlrtDCI, emlrtRootTLSGlobal);
  DOF_idx_0 *= (int32_T)emlrtIntegerCheckFastR2012b(d0, &c_emlrtDCI,
    emlrtRootTLSGlobal);
  for (i0 = 0; i0 < DOF_idx_0; i0++) {
    stress->data[i0] = 0.0;
  }

  j = 1;
  while (j - 1 <= points_size[1] - 1) {
    /*  index of evaluation point */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, lengthBasis, mxDOUBLE_CLASS,
      (int32_T)lengthBasis, &u_emlrtRTEI, emlrtRootTLSGlobal);
    i = 0;
    while (i <= (int32_T)lengthBasis - 1) {
      /*  index of base function */
      i0 = j << 1;
      if (i0 == j << 1) {
      } else {
        emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &v_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
      }

      d0 = 4.0 * (1.0 + (real_T)i);
      if (d0 == 4.0 * (1.0 + (real_T)i)) {
      } else {
        emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &w_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
      }

      DOF_idx_0 = gradientMatBase->size[0];
      b_A = gradientMatBase->size[1];
      i1 = 1 + i;
      i2 = (int32_T)((real_T)i0 + -1.0);
      i3 = (int32_T)(d0 + -3.0);
      gradientMatBase->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, DOF_idx_0,
        &fb_emlrtBCI, emlrtRootTLSGlobal) + gradientMatBase->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(i3, 1, b_A, &gb_emlrtBCI,
        emlrtRootTLSGlobal) - 1)) - 1] = gradientMatBase0_data
        [(emlrtDynamicBoundsCheckFastR2012b(i1, 1, 3, &w_emlrtBCI,
           emlrtRootTLSGlobal) + gradientMatBase0_size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(j, 1, gradientMatBase0_size[1],
            &x_emlrtBCI, emlrtRootTLSGlobal) - 1)) - 1];
      i1 = 1 + i;
      i2 = (int32_T)((real_T)i0 + -1.0);
      i3 = (int32_T)(d0 + -2.0);
      gradientMatBase->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, DOF_idx_0,
        &fb_emlrtBCI, emlrtRootTLSGlobal) + gradientMatBase->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(i3, 1, b_A, &gb_emlrtBCI,
        emlrtRootTLSGlobal) - 1)) - 1] = gradientMatBase0_data
        [((emlrtDynamicBoundsCheckFastR2012b(i1, 1, 3, &y_emlrtBCI,
            emlrtRootTLSGlobal) + gradientMatBase0_size[0] *
           (emlrtDynamicBoundsCheckFastR2012b(j, 1, gradientMatBase0_size[1],
             &ab_emlrtBCI, emlrtRootTLSGlobal) - 1)) + gradientMatBase0_size[0] *
          gradientMatBase0_size[1]) - 1];
      i1 = (int32_T)((real_T)i0 + -1.0);
      i2 = (int32_T)(d0 + -1.0);
      gradientMatBase->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, DOF_idx_0,
        &fb_emlrtBCI, emlrtRootTLSGlobal) + gradientMatBase->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(i2, 1, b_A, &gb_emlrtBCI,
        emlrtRootTLSGlobal) - 1)) - 1] = 0.0;
      i1 = (int32_T)((real_T)i0 + -1.0);
      i2 = (int32_T)d0;
      gradientMatBase->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, DOF_idx_0,
        &fb_emlrtBCI, emlrtRootTLSGlobal) + gradientMatBase->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(i2, 1, b_A, &gb_emlrtBCI,
        emlrtRootTLSGlobal) - 1)) - 1] = 0.0;
      i1 = i0;
      i2 = (int32_T)(d0 + -3.0);
      gradientMatBase->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, DOF_idx_0,
        &fb_emlrtBCI, emlrtRootTLSGlobal) + gradientMatBase->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(i2, 1, b_A, &gb_emlrtBCI,
        emlrtRootTLSGlobal) - 1)) - 1] = 0.0;
      i1 = i0;
      i2 = (int32_T)(d0 + -2.0);
      gradientMatBase->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, DOF_idx_0,
        &fb_emlrtBCI, emlrtRootTLSGlobal) + gradientMatBase->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(i2, 1, b_A, &gb_emlrtBCI,
        emlrtRootTLSGlobal) - 1)) - 1] = 0.0;
      i1 = 1 + i;
      i2 = i0;
      i3 = (int32_T)(d0 + -1.0);
      gradientMatBase->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, DOF_idx_0,
        &fb_emlrtBCI, emlrtRootTLSGlobal) + gradientMatBase->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(i3, 1, b_A, &gb_emlrtBCI,
        emlrtRootTLSGlobal) - 1)) - 1] = gradientMatBase0_data
        [(emlrtDynamicBoundsCheckFastR2012b(i1, 1, 3, &bb_emlrtBCI,
           emlrtRootTLSGlobal) + gradientMatBase0_size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(j, 1, gradientMatBase0_size[1],
            &cb_emlrtBCI, emlrtRootTLSGlobal) - 1)) - 1];
      i1 = 1 + i;
      i2 = (int32_T)d0;
      gradientMatBase->data[(emlrtDynamicBoundsCheckFastR2012b(i0, 1, DOF_idx_0,
        &fb_emlrtBCI, emlrtRootTLSGlobal) + gradientMatBase->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(i2, 1, b_A, &gb_emlrtBCI,
        emlrtRootTLSGlobal) - 1)) - 1] = gradientMatBase0_data
        [((emlrtDynamicBoundsCheckFastR2012b(i1, 1, 3, &db_emlrtBCI,
            emlrtRootTLSGlobal) + gradientMatBase0_size[0] *
           (emlrtDynamicBoundsCheckFastR2012b(j, 1, gradientMatBase0_size[1],
             &eb_emlrtBCI, emlrtRootTLSGlobal) - 1)) + gradientMatBase0_size[0] *
          gradientMatBase0_size[1]) - 1];
      i0 = j << 1;
      if (i0 == j << 1) {
      } else {
        emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &x_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
      }

      d0 = 4.0 * (1.0 + (real_T)i);
      if (d0 == 4.0 * (1.0 + (real_T)i)) {
      } else {
        emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &y_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
      }

      c_y = 4.0 * (1.0 + (real_T)i);
      if (c_y == 4.0 * (1.0 + (real_T)i)) {
      } else {
        emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &cb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
      }

      i1 = j << 1;
      if (i1 == j << 1) {
      } else {
        emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &db_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
      }

      DOF_idx_0 = stress->size[0];
      b_A = stress->size[1];
      for (i2 = 0; i2 < 2; i2++) {
        for (i3 = 0; i3 < 2; i3++) {
          c_A = gradientMatBase->size[0];
          count = (int32_T)((real_T)i0 + (-1.0 + (real_T)i3));
          b_count = gradientMatBase->size[1];
          c_count = (int32_T)(d0 + (-3.0 + (real_T)i2));
          d_A = (int32_T)(c_y + (-3.0 + (real_T)i3));
          d_count = (int32_T)((real_T)i1 + (-1.0 + (real_T)i2));
          stress->data[(emlrtDynamicBoundsCheckFastR2012b(d_A, 1, DOF_idx_0,
            &jb_emlrtBCI, emlrtRootTLSGlobal) + stress->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(d_count, 1, b_A,
            &kb_emlrtBCI, emlrtRootTLSGlobal) - 1)) - 1] = gradientMatBase->
            data[(emlrtDynamicBoundsCheckFastR2012b(count, 1, c_A, &hb_emlrtBCI,
                   emlrtRootTLSGlobal) + gradientMatBase->size[0] *
                  (emlrtDynamicBoundsCheckFastR2012b(c_count, 1, b_count,
                    &ib_emlrtBCI, emlrtRootTLSGlobal) - 1)) - 1];
        }
      }

      i0 = j << 1;
      if (i0 == j << 1) {
      } else {
        emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ab_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
      }

      d0 = 4.0 * (1.0 + (real_T)i);
      if (d0 == 4.0 * (1.0 + (real_T)i)) {
      } else {
        emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &bb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
      }

      c_y = 4.0 * (1.0 + (real_T)i);
      if (c_y == 4.0 * (1.0 + (real_T)i)) {
      } else {
        emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &eb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
      }

      i1 = j << 1;
      if (i1 == j << 1) {
      } else {
        emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &fb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
      }

      DOF_idx_0 = stress->size[0];
      b_A = stress->size[1];
      for (i2 = 0; i2 < 2; i2++) {
        for (i3 = 0; i3 < 2; i3++) {
          c_A = gradientMatBase->size[0];
          count = (int32_T)((real_T)i0 + (-1.0 + (real_T)i3));
          b_count = gradientMatBase->size[1];
          c_count = (int32_T)(d0 + (-1.0 + (real_T)i2));
          d_A = (int32_T)(c_y + (-1.0 + (real_T)i3));
          d_count = (int32_T)((real_T)i1 + (-1.0 + (real_T)i2));
          stress->data[(emlrtDynamicBoundsCheckFastR2012b(d_A, 1, DOF_idx_0,
            &nb_emlrtBCI, emlrtRootTLSGlobal) + stress->size[0] *
                        (emlrtDynamicBoundsCheckFastR2012b(d_count, 1, b_A,
            &ob_emlrtBCI, emlrtRootTLSGlobal) - 1)) - 1] = gradientMatBase->
            data[(emlrtDynamicBoundsCheckFastR2012b(count, 1, c_A, &lb_emlrtBCI,
                   emlrtRootTLSGlobal) + gradientMatBase->size[0] *
                  (emlrtDynamicBoundsCheckFastR2012b(c_count, 1, b_count,
                    &mb_emlrtBCI, emlrtRootTLSGlobal) - 1)) - 1];
        }
      }

      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  e_count = 1;
  emxInit_real_T(&localA, 2, &e_emlrtRTEI, TRUE);
  emxInit_real_T(&localF, 2, &f_emlrtRTEI, TRUE);
  b_emxInit_real_T(&r2, 1, &emlrtRTEI, TRUE);
  emxInit_real_T(&b_gradientMatBase, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(&b_stress, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(&c_gradientMatBase, 2, &emlrtRTEI, TRUE);
  while (e_count - 1 <= t->size[1] - 1) {
    emlrtVectorVectorIndexCheckR2012b(u0->size[0], 1, 1, 6, &emlrtECI,
      emlrtRootTLSGlobal);
    i0 = positions->size[0];
    count = emlrtDynamicBoundsCheckFastR2012b(e_count, 1, i0, &emlrtBCI,
      emlrtRootTLSGlobal);
    for (i0 = 0; i0 < 6; i0++) {
      i1 = u0->size[0];
      d0 = positions->data[(count + positions->size[0] * i0) - 1];
      i2 = (int32_T)emlrtIntegerCheckFastR2012b(d0, &e_emlrtDCI,
        emlrtRootTLSGlobal);
      emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &h_emlrtBCI,
        emlrtRootTLSGlobal);
    }

    y = (uint32_T)e_count << 1;
    if (y == (uint32_T)e_count << 1) {
    } else {
      emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &gb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    for (i0 = 0; i0 < 6; i0++) {
      b_u0[i0] = u0->data[(int32_T)positions->data[(e_count + positions->size[0]
        * i0) - 1] - 1];
    }

    for (i0 = 0; i0 < 2; i0++) {
      for (i1 = 0; i1 < 2; i1++) {
        i2 = trafo->size[0];
        i3 = (int32_T)((real_T)y + (-1.0 + (real_T)i1));
        b_trafo[i1 + (i0 << 1)] = trafo->data[(emlrtDynamicBoundsCheckFastR2012b
          (i3, 1, i2, &i_emlrtBCI, emlrtRootTLSGlobal) + trafo->size[0] * i0) -
          1];
      }
    }

    giveGradient(stress, b_u0, b_trafo, grad_u0_data, grad_u0_size);
    emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);

    /*      fun = @(block_struct) Lambda*trace(block_struct.data)*eye(2) + Mu*(block_struct.data+block_struct.data') +... */
    /*                                              0.5*Lambda*trace(block_struct.data'*block_struct.data)*eye(2) + Mu*(block_struct.data'*block_struct.data); */
    /*      sigma_u0 = blockproc(grad_u0,[2 2],fun); */
    for (i0 = 0; i0 < 2; i0++) {
      N[i0] = (int8_T)grad_u0_size[i0];
    }

    sigma_u0_size[0] = 2;
    sigma_u0_size[1] = N[1];
    DOF_idx_0 = N[1] << 1;
    for (i0 = 0; i0 < DOF_idx_0; i0++) {
      sigma_u0_data[i0] = 0.0;
    }

    d0 = 0.5 * (real_T)N[1];
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d0, mxDOUBLE_CLASS, (int32_T)d0,
      &ob_emlrtRTEI, emlrtRootTLSGlobal);
    j = 1;
    while (j - 1 <= (int32_T)d0 - 1) {
      i0 = j << 1;
      if (i0 == j << 1) {
      } else {
        emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &nb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
      }

      i1 = j << 1;
      if (i1 == j << 1) {
      } else {
        emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &mb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
      }

      i2 = j << 1;
      if (i2 == j << 1) {
      } else {
        emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &lb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
      }

      i3 = j << 1;
      if (i3 == j << 1) {
      } else {
        emlrtPushRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &kb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&ac_emlrtRSI, emlrtRootTLSGlobal);
      }

      for (c_A = 0; c_A < 2; c_A++) {
        for (count = 0; count < 2; count++) {
          b_count = (int32_T)((real_T)i2 + (-1.0 + (real_T)count));
          b_trafo[count + (c_A << 1)] = grad_u0_data[c_A + grad_u0_size[0] *
            (emlrtDynamicBoundsCheckFastR2012b(b_count, 1, grad_u0_size[1],
              &r_emlrtBCI, emlrtRootTLSGlobal) - 1)];
        }
      }

      for (i2 = 0; i2 < 2; i2++) {
        c_A = (int32_T)((real_T)i3 + (-1.0 + (real_T)i2));
        emlrtDynamicBoundsCheckFastR2012b(c_A, 1, grad_u0_size[1], &s_emlrtBCI,
          emlrtRootTLSGlobal);
      }

      for (i2 = 0; i2 < 2; i2++) {
        for (c_A = 0; c_A < 2; c_A++) {
          grad_u0[c_A + (i2 << 1)] = grad_u0_data[c_A + grad_u0_size[0] *
            ((int32_T)((real_T)i3 + (-1.0 + (real_T)i2)) - 1)];
        }
      }

      for (i2 = 0; i2 < 2; i2++) {
        for (i3 = 0; i3 < 2; i3++) {
          c_y = 0.0;
          for (c_A = 0; c_A < 2; c_A++) {
            c_y += b_trafo[i2 + (c_A << 1)] * grad_u0[c_A + (i3 << 1)];
          }

          c_A = (int32_T)((real_T)i0 + (-1.0 + (real_T)i3));
          count = (int32_T)((real_T)i1 + (-1.0 + (real_T)i2));
          E[i2 + (i3 << 1)] = (grad_u0_data[i2 + grad_u0_size[0] *
                               (emlrtDynamicBoundsCheckFastR2012b(c_A, 1,
            grad_u0_size[1], &t_emlrtBCI, emlrtRootTLSGlobal) - 1)] +
                               grad_u0_data[i3 + grad_u0_size[0] *
                               (emlrtDynamicBoundsCheckFastR2012b(count, 1,
            grad_u0_size[1], &u_emlrtBCI, emlrtRootTLSGlobal) - 1)]) + c_y;
        }
      }

      for (i0 = 0; i0 < 4; i0++) {
        E[i0] *= 0.5;
      }

      i0 = j << 1;
      if (i0 == j << 1) {
      } else {
        emlrtPushRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
        emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &jb_emlrtRTEI,
          "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
        emlrtPopRtStackR2012b(&yb_emlrtRSI, emlrtRootTLSGlobal);
      }

      c_y = 0.0;
      for (DOF_idx_0 = 0; DOF_idx_0 < 2; DOF_idx_0++) {
        c_y += E[DOF_idx_0 + (DOF_idx_0 << 1)];
      }

      c_y *= matConst->Lambda;
      d_y = 2.0 * matConst->Mu;
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < 2; i2++) {
          i3 = N[1];
          c_A = (int32_T)((real_T)i0 + (-1.0 + (real_T)i1));
          sigma_u0_data[i2 + ((emlrtDynamicBoundsCheckFastR2012b(c_A, 1, i3,
            &v_emlrtBCI, emlrtRootTLSGlobal) - 1) << 1)] = c_y * (real_T)b[i2 +
            (i1 << 1)] + d_y * E[i2 + (i1 << 1)];
        }
      }

      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
    y = (uint32_T)e_count << 1;
    if (y == (uint32_T)e_count << 1) {
    } else {
      emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &hb_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    i0 = b_stress->size[0] * b_stress->size[1];
    b_stress->size[0] = stress->size[0];
    b_stress->size[1] = stress->size[1];
    emxEnsureCapacity((emxArray__common *)b_stress, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    DOF_idx_0 = stress->size[0] * stress->size[1];
    for (i0 = 0; i0 < DOF_idx_0; i0++) {
      b_stress->data[i0] = stress->data[i0];
    }

    i0 = c_gradientMatBase->size[0] * c_gradientMatBase->size[1];
    c_gradientMatBase->size[0] = gradientMatBase->size[0];
    c_gradientMatBase->size[1] = gradientMatBase->size[1];
    emxEnsureCapacity((emxArray__common *)c_gradientMatBase, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    DOF_idx_0 = gradientMatBase->size[0] * gradientMatBase->size[1];
    for (i0 = 0; i0 < DOF_idx_0; i0++) {
      c_gradientMatBase->data[i0] = gradientMatBase->data[i0];
    }

    for (i0 = 0; i0 < 2; i0++) {
      for (i1 = 0; i1 < 2; i1++) {
        i2 = trafo->size[0];
        i3 = (int32_T)((real_T)y + (-1.0 + (real_T)i1));
        b_trafo[i1 + (i0 << 1)] = trafo->data[(emlrtDynamicBoundsCheckFastR2012b
          (i3, 1, i2, &j_emlrtBCI, emlrtRootTLSGlobal) + trafo->size[0] * i0) -
          1];
      }
    }

    localAssemblingSVK(b_stress, c_gradientMatBase, b_trafo, weights_data,
                       weights_size, matConst->Mu, matConst->Lambda,
                       grad_u0_data, grad_u0_size, sigma_u0_data, sigma_u0_size,
                       localA);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    y = (uint32_T)e_count << 1;
    if (y == (uint32_T)e_count << 1) {
    } else {
      emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
      emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &ib_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
      emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    i0 = b_gradientMatBase->size[0] * b_gradientMatBase->size[1];
    b_gradientMatBase->size[0] = gradientMatBase->size[0];
    b_gradientMatBase->size[1] = gradientMatBase->size[1];
    emxEnsureCapacity((emxArray__common *)b_gradientMatBase, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    DOF_idx_0 = gradientMatBase->size[0] * gradientMatBase->size[1];
    for (i0 = 0; i0 < DOF_idx_0; i0++) {
      b_gradientMatBase->data[i0] = gradientMatBase->data[i0];
    }

    for (i0 = 0; i0 < 2; i0++) {
      for (i1 = 0; i1 < 2; i1++) {
        i2 = trafo->size[0];
        i3 = (int32_T)((real_T)y + (-1.0 + (real_T)i1));
        b_trafo[i1 + (i0 << 1)] = trafo->data[(emlrtDynamicBoundsCheckFastR2012b
          (i3, 1, i2, &k_emlrtBCI, emlrtRootTLSGlobal) + trafo->size[0] * i0) -
          1];
      }
    }

    b_weights_size[0] = 1;
    b_weights_size[1] = weights_size[1];
    DOF_idx_0 = weights_size[0] * weights_size[1];
    for (i0 = 0; i0 < DOF_idx_0; i0++) {
      b_weights_data[i0] = weights_data[i0];
    }

    localAssemblingF(grad_u0_data, grad_u0_size, sigma_u0_data, sigma_u0_size,
                     b_gradientMatBase, b_trafo, b_weights_data, b_weights_size,
                     localF);
    emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 0; i < 2; i++) {
      iv0[i] = 6;
    }

    for (i0 = 0; i0 < 2; i0++) {
      grad_u0_size[i0] = localA->size[i0];
    }

    emlrtSizeEqCheck2DFastR2012b(iv0, grad_u0_size, &b_emlrtECI,
      emlrtRootTLSGlobal);
    i0 = positions->size[0];
    count = emlrtDynamicBoundsCheckFastR2012b(e_count, 1, i0, &d_emlrtBCI,
      emlrtRootTLSGlobal);
    DOF_idx_0 = A->size[0];
    i0 = positions->size[0];
    b_count = emlrtDynamicBoundsCheckFastR2012b(e_count, 1, i0, &e_emlrtBCI,
      emlrtRootTLSGlobal);
    b_A = A->size[1];
    i0 = positions->size[0];
    c_count = emlrtDynamicBoundsCheckFastR2012b(e_count, 1, i0, &b_emlrtBCI,
      emlrtRootTLSGlobal);
    d_A = A->size[0];
    i0 = positions->size[0];
    d_count = emlrtDynamicBoundsCheckFastR2012b(e_count, 1, i0, &c_emlrtBCI,
      emlrtRootTLSGlobal);
    c_A = A->size[1];
    for (i0 = 0; i0 < 6; i0++) {
      for (i1 = 0; i1 < 6; i1++) {
        d0 = positions->data[(c_count + positions->size[0] * i1) - 1];
        i2 = (int32_T)emlrtIntegerCheckFastR2012b(d0, &f_emlrtDCI,
          emlrtRootTLSGlobal);
        d0 = positions->data[(d_count + positions->size[0] * i0) - 1];
        i3 = (int32_T)emlrtIntegerCheckFastR2012b(d0, &g_emlrtDCI,
          emlrtRootTLSGlobal);
        e_A[i1 + 6 * i0] = A->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, d_A,
          &l_emlrtBCI, emlrtRootTLSGlobal) + A->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(i3, 1, c_A, &m_emlrtBCI,
          emlrtRootTLSGlobal) - 1)) - 1] + localA->data[i1 + 6 * i0];
      }
    }

    for (i0 = 0; i0 < 6; i0++) {
      for (i1 = 0; i1 < 6; i1++) {
        d0 = positions->data[(count + positions->size[0] * i1) - 1];
        i2 = (int32_T)emlrtIntegerCheckFastR2012b(d0, &h_emlrtDCI,
          emlrtRootTLSGlobal);
        d0 = positions->data[(b_count + positions->size[0] * i0) - 1];
        i3 = (int32_T)emlrtIntegerCheckFastR2012b(d0, &i_emlrtDCI,
          emlrtRootTLSGlobal);
        A->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, DOF_idx_0, &n_emlrtBCI,
                  emlrtRootTLSGlobal) + A->size[0] *
                 (emlrtDynamicBoundsCheckFastR2012b(i3, 1, b_A, &o_emlrtBCI,
                   emlrtRootTLSGlobal) - 1)) - 1] = e_A[i1 + 6 * i0];
      }
    }

    emlrtVectorVectorIndexCheckR2012b(F->size[0], 1, 1, 6, &c_emlrtECI,
      emlrtRootTLSGlobal);
    i0 = r2->size[0];
    r2->size[0] = localF->size[1];
    emxEnsureCapacity((emxArray__common *)r2, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    DOF_idx_0 = localF->size[1];
    for (i0 = 0; i0 < DOF_idx_0; i0++) {
      r2->data[i0] = localF->data[i0];
    }

    i0 = r2->size[0];
    emlrtSizeEqCheck1DFastR2012b(6, i0, &c_emlrtECI, emlrtRootTLSGlobal);
    i0 = positions->size[0];
    count = emlrtDynamicBoundsCheckFastR2012b(e_count, 1, i0, &g_emlrtBCI,
      emlrtRootTLSGlobal);
    DOF_idx_0 = F->size[0];
    i0 = positions->size[0];
    b_count = emlrtDynamicBoundsCheckFastR2012b(e_count, 1, i0, &f_emlrtBCI,
      emlrtRootTLSGlobal);
    b_A = F->size[0];
    for (i0 = 0; i0 < 6; i0++) {
      d0 = positions->data[(b_count + positions->size[0] * i0) - 1];
      i1 = (int32_T)emlrtIntegerCheckFastR2012b(d0, &j_emlrtDCI,
        emlrtRootTLSGlobal);
      b_u0[i0] = F->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, b_A,
        &p_emlrtBCI, emlrtRootTLSGlobal) - 1] + r2->data[i0];
    }

    for (i0 = 0; i0 < 6; i0++) {
      d0 = positions->data[(count + positions->size[0] * i0) - 1];
      i1 = (int32_T)emlrtIntegerCheckFastR2012b(d0, &k_emlrtDCI,
        emlrtRootTLSGlobal);
      F->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, DOF_idx_0, &q_emlrtBCI,
        emlrtRootTLSGlobal) - 1] = b_u0[i0];
    }

    e_count++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&c_gradientMatBase);
  emxFree_real_T(&b_stress);
  emxFree_real_T(&b_gradientMatBase);
  emxFree_real_T(&r2);
  emxFree_real_T(&localF);
  emxFree_real_T(&localA);
  emxFree_real_T(&stress);
  emxFree_real_T(&gradientMatBase);
  emxFree_real_T(&positions);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (assemblingSVK_m_file.c) */
