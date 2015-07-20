/*
 * assemblingSVK_m_file_types.h
 *
 * Code generation for function 'assemblingSVK_m_file'
 *
 * C source code generated on: Sun Jun 14 18:03:01 2015
 *
 */

#ifndef __ASSEMBLINGSVK_M_FILE_TYPES_H__
#define __ASSEMBLINGSVK_M_FILE_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_ResolvedFunctionInfo
#define typedef_ResolvedFunctionInfo
typedef struct
{
    const char * context;
    const char * name;
    const char * dominantType;
    const char * resolved;
    uint32_T fileTimeLo;
    uint32_T fileTimeHi;
    uint32_T mFileTimeLo;
    uint32_T mFileTimeHi;
} ResolvedFunctionInfo;
#endif /*typedef_ResolvedFunctionInfo*/
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T
{
    int32_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_int32_T*/
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /*typedef_emxArray_int32_T*/
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    real_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef struct_emxArray_real_T_1x14
#define struct_emxArray_real_T_1x14
struct emxArray_real_T_1x14
{
    real_T data[14];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_1x14*/
#ifndef typedef_emxArray_real_T_1x14
#define typedef_emxArray_real_T_1x14
typedef struct emxArray_real_T_1x14 emxArray_real_T_1x14;
#endif /*typedef_emxArray_real_T_1x14*/
#ifndef struct_emxArray_real_T_1x7
#define struct_emxArray_real_T_1x7
struct emxArray_real_T_1x7
{
    real_T data[7];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_1x7*/
#ifndef typedef_emxArray_real_T_1x7
#define typedef_emxArray_real_T_1x7
typedef struct emxArray_real_T_1x7 emxArray_real_T_1x7;
#endif /*typedef_emxArray_real_T_1x7*/
#ifndef struct_emxArray_real_T_2x14
#define struct_emxArray_real_T_2x14
struct emxArray_real_T_2x14
{
    real_T data[28];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_2x14*/
#ifndef typedef_emxArray_real_T_2x14
#define typedef_emxArray_real_T_2x14
typedef struct emxArray_real_T_2x14 emxArray_real_T_2x14;
#endif /*typedef_emxArray_real_T_2x14*/
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct
{
    real_T Mu;
    real_T Lambda;
} struct_T;
#endif /*typedef_struct_T*/

#endif
/* End of code generation (assemblingSVK_m_file_types.h) */
