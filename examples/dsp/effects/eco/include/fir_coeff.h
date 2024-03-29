/**
 * @file fir_coeff.h
 * @author David A. Aguirre M. <daguirre.m@outlook.com
 * @brief Coeficientes generados por coeff_generator.m
 * @version r1.0
 * @date 2023-02-18
 * 
 * @copyright MIT License, Copyright (c) 2023 David A. Aguirre M. @n @n
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions: @n @n
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software. @n @n

 * THE SOFTWARE IS PROVIDED  "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 */

#ifndef _FIR_COEFF_H_
#define _FIR_COEFF_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "system.h"

/* Orden del filtro */
#define FIR_ORDER 150

/*----------------------------------------------------------------------------*/
/* Variables */
/*----------------------------------------------------------------------------*/

__CCM_VAR_I float b_low[] =
{
    -0.00005,   -0.00006,   -0.00006,   -0.00007,   -0.00007, 
    -0.00008,   -0.00009,   -0.00009,   -0.00010,   -0.00010, 
    -0.00011,   -0.00011,   -0.00011,   -0.00011,   -0.00011, 
    -0.00010,   -0.00009,   -0.00007,   -0.00006,   -0.00003, 
    +0.00000,   +0.00004,   +0.00009,   +0.00014,   +0.00021, 
    +0.00029,   +0.00038,   +0.00048,   +0.00060,   +0.00074, 
    +0.00089,   +0.00107,   +0.00126,   +0.00147,   +0.00171, 
    +0.00197,   +0.00226,   +0.00257,   +0.00291,   +0.00327, 
    +0.00366,   +0.00408,   +0.00453,   +0.00500,   +0.00551, 
    +0.00603,   +0.00659,   +0.00716,   +0.00776,   +0.00838, 
    +0.00902,   +0.00968,   +0.01035,   +0.01103,   +0.01171, 
    +0.01241,   +0.01310,   +0.01379,   +0.01448,   +0.01515, 
    +0.01581,   +0.01645,   +0.01707,   +0.01766,   +0.01822, 
    +0.01875,   +0.01924,   +0.01969,   +0.02009,   +0.02044, 
    +0.02075,   +0.02100,   +0.02120,   +0.02134,   +0.02143, 
    +0.02146,   +0.02143,   +0.02134,   +0.02120,   +0.02100, 
    +0.02075,   +0.02044,   +0.02009,   +0.01969,   +0.01924, 
    +0.01875,   +0.01822,   +0.01766,   +0.01707,   +0.01645, 
    +0.01581,   +0.01515,   +0.01448,   +0.01379,   +0.01310, 
    +0.01241,   +0.01171,   +0.01103,   +0.01035,   +0.00968, 
    +0.00902,   +0.00838,   +0.00776,   +0.00716,   +0.00659, 
    +0.00603,   +0.00551,   +0.00500,   +0.00453,   +0.00408, 
    +0.00366,   +0.00327,   +0.00291,   +0.00257,   +0.00226, 
    +0.00197,   +0.00171,   +0.00147,   +0.00126,   +0.00107, 
    +0.00089,   +0.00074,   +0.00060,   +0.00048,   +0.00038, 
    +0.00029,   +0.00021,   +0.00014,   +0.00009,   +0.00004, 
    +0.00000,   -0.00003,   -0.00006,   -0.00007,   -0.00009, 
    -0.00010,   -0.00011,   -0.00011,   -0.00011,   -0.00011, 
    -0.00011,   -0.00010,   -0.00010,   -0.00009,   -0.00009, 
    -0.00008,   -0.00007,   -0.00007,   -0.00006,   -0.00006,
    -0.00005
};

__CCM_VAR_I float b_high[] =
{
    +0.00005,   +0.00005,   +0.00005,   +0.00005,   +0.00005, 
    +0.00005,   +0.00004,   +0.00003,   +0.00002,   -0.00000, 
    -0.00002,   -0.00005,   -0.00009,   -0.00013,   -0.00017, 
    -0.00023,   -0.00028,   -0.00034,   -0.00040,   -0.00046, 
    -0.00051,   -0.00057,   -0.00061,   -0.00064,   -0.00066, 
    -0.00065,   -0.00062,   -0.00057,   -0.00048,   -0.00036, 
    -0.00020,   -0.00000,   +0.00024,   +0.00052,   +0.00084, 
    +0.00120,   +0.00158,   +0.00199,   +0.00242,   +0.00285, 
    +0.00328,   +0.00368,   +0.00404,   +0.00434,   +0.00457, 
    +0.00470,   +0.00471,   +0.00459,   +0.00431,   +0.00385, 
    +0.00321,   +0.00236,   +0.00129,   -0.00000,   -0.00152, 
    -0.00326,   -0.00521,   -0.00738,   -0.00973,   -0.01225, 
    -0.01491,   -0.01768,   -0.02052,   -0.02340,   -0.02627, 
    -0.02909,   -0.03181,   -0.03439,   -0.03679,   -0.03896, 
    -0.04087,   -0.04248,   -0.04376,   -0.04470,   -0.04527, 
    +0.95459,   -0.04527,   -0.04470,   -0.04376,   -0.04248, 
    -0.04087,   -0.03896,   -0.03679,   -0.03439,   -0.03181, 
    -0.02909,   -0.02627,   -0.02340,   -0.02052,   -0.01768, 
    -0.01491,   -0.01225,   -0.00973,   -0.00738,   -0.00521, 
    -0.00326,   -0.00152,   -0.00000,   +0.00129,   +0.00236, 
    +0.00321,   +0.00385,   +0.00431,   +0.00459,   +0.00471, 
    +0.00470,   +0.00457,   +0.00434,   +0.00404,   +0.00368, 
    +0.00328,   +0.00285,   +0.00242,   +0.00199,   +0.00158, 
    +0.00120,   +0.00084,   +0.00052,   +0.00024,   -0.00000, 
    -0.00020,   -0.00036,   -0.00048,   -0.00057,   -0.00062, 
    -0.00065,   -0.00066,   -0.00064,   -0.00061,   -0.00057, 
    -0.00051,   -0.00046,   -0.00040,   -0.00034,   -0.00028, 
    -0.00023,   -0.00017,   -0.00013,   -0.00009,   -0.00005, 
    -0.00002,   -0.00000,   +0.00002,   +0.00003,   +0.00004, 
    +0.00005,   +0.00005,   +0.00005,   +0.00005,   +0.00005,
    +0.00005
};

__CCM_VAR_I float b_pass[] =
{
    +0.00008,   +0.00009,   +0.00003,   -0.00001,   +0.00005, 
    +0.00015,   +0.00014,   +0.00002,   -0.00004,   +0.00009, 
    +0.00025,   +0.00019,   -0.00005,   -0.00012,   +0.00013, 
    +0.00038,   +0.00021,   -0.00022,   -0.00030,   +0.00016, 
    +0.00051,   +0.00013,   -0.00061,   -0.00065,   +0.00015, 
    +0.00061,   -0.00018,   -0.00136,   -0.00127,   +0.00006, 
    +0.00059,   -0.00090,   -0.00269,   -0.00225,   -0.00013, 
    +0.00034,   -0.00226,   -0.00479,   -0.00366,   -0.00040, 
    -0.00023,   -0.00451,   -0.00787,   -0.00548,   -0.00066, 
    -0.00121,   -0.00791,   -0.01208,   -0.00751,   -0.00062, 
    -0.00259,   -0.01272,   -0.01746,   -0.00934,   +0.00029, 
    -0.00426,   -0.01932,   -0.02410,   -0.01015,   +0.00321, 
    -0.00603,   -0.02863,   -0.03245,   -0.00830,   +0.01083, 
    -0.00761,   -0.04418,   -0.04524,   +0.00114,   +0.03370, 
    -0.00870,   -0.08925,   -0.08694,   +0.06768,   +0.28699, 
    +0.39087,   +0.28699,   +0.06768,   -0.08694,   -0.08925, 
    -0.00870,   +0.03370,   +0.00114,   -0.04524,   -0.04418, 
    -0.00761,   +0.01083,   -0.00830,   -0.03245,   -0.02863, 
    -0.00603,   +0.00321,   -0.01015,   -0.02410,   -0.01932, 
    -0.00426,   +0.00029,   -0.00934,   -0.01746,   -0.01272, 
    -0.00259,   -0.00062,   -0.00751,   -0.01208,   -0.00791, 
    -0.00121,   -0.00066,   -0.00548,   -0.00787,   -0.00451, 
    -0.00023,   -0.00040,   -0.00366,   -0.00479,   -0.00226, 
    +0.00034,   -0.00013,   -0.00225,   -0.00269,   -0.00090, 
    +0.00059,   +0.00006,   -0.00127,   -0.00136,   -0.00018, 
    +0.00061,   +0.00015,   -0.00065,   -0.00061,   +0.00013, 
    +0.00051,   +0.00016,   -0.00030,   -0.00022,   +0.00021, 
    +0.00038,   +0.00013,   -0.00012,   -0.00005,   +0.00019, 
    +0.00025,   +0.00009,   -0.00004,   +0.00002,   +0.00014, 
    +0.00015,   +0.00005,   -0.00001,   +0.00003,   +0.00009,
    +0.00008
};

__CCM_VAR_I float b_stop[] =
{
    -0.00010,   -0.00010,   -0.00003,   +0.00001,   -0.00006, 
    -0.00018,   -0.00017,   -0.00002,   +0.00005,   -0.00010, 
    -0.00030,   -0.00023,   +0.00005,   +0.00015,   -0.00015, 
    -0.00045,   -0.00025,   +0.00026,   +0.00036,   -0.00018, 
    -0.00061,   -0.00015,   +0.00072,   +0.00077,   -0.00017, 
    -0.00072,   +0.00022,   +0.00161,   +0.00150,   -0.00007, 
    -0.00069,   +0.00107,   +0.00317,   +0.00265,   +0.00015, 
    -0.00040,   +0.00267,   +0.00565,   +0.00432,   +0.00048, 
    +0.00028,   +0.00532,   +0.00930,   +0.00646,   +0.00078, 
    +0.00143,   +0.00933,   +0.01426,   +0.00887,   +0.00073, 
    +0.00305,   +0.01502,   +0.02061,   +0.01103,   -0.00035, 
    +0.00503,   +0.02280,   +0.02844,   +0.01198,   -0.00379, 
    +0.00712,   +0.03379,   +0.03831,   +0.00980,   -0.01278, 
    +0.00898,   +0.05215,   +0.05341,   -0.00135,   -0.03978, 
    +0.01027,   +0.10536,   +0.10263,   -0.07989,   -0.33877, 
    +0.71893,   -0.33877,   -0.07989,   +0.10263,   +0.10536, 
    +0.01027,   -0.03978,   -0.00135,   +0.05341,   +0.05215, 
    +0.00898,   -0.01278,   +0.00980,   +0.03831,   +0.03379, 
    +0.00712,   -0.00379,   +0.01198,   +0.02844,   +0.02280, 
    +0.00503,   -0.00035,   +0.01103,   +0.02061,   +0.01502, 
    +0.00305,   +0.00073,   +0.00887,   +0.01426,   +0.00933, 
    +0.00143,   +0.00078,   +0.00646,   +0.00930,   +0.00532, 
    +0.00028,   +0.00048,   +0.00432,   +0.00565,   +0.00267, 
    -0.00040,   +0.00015,   +0.00265,   +0.00317,   +0.00107, 
    -0.00069,   -0.00007,   +0.00150,   +0.00161,   +0.00022, 
    -0.00072,   -0.00017,   +0.00077,   +0.00072,   -0.00015, 
    -0.00061,   -0.00018,   +0.00036,   +0.00026,   -0.00025, 
    -0.00045,   -0.00015,   +0.00015,   +0.00005,   -0.00023, 
    -0.00030,   -0.00010,   +0.00005,   -0.00002,   -0.00017, 
    -0.00018,   -0.00006,   +0.00001,   -0.00003,   -0.00010,
    -0.00010
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _FIR_COEFF_H_ */