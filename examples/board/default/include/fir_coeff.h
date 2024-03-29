/**
 * @file fir_coeff.h
 * @author David A. Aguirre M. <daguirre.m@outlook.com>
 * @brief Coeficientes generados por coeff_generator.m
 * @version r1.0
 * @date 
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
#define FIR_ORDER 84

/*----------------------------------------------------------------------------*/
/* Variables */
/*----------------------------------------------------------------------------*/

__CCM_VAR_I float b_low[] = {
    +0.00025, +0.00032, +0.00039, +0.00049, +0.00060, 
    +0.00074, +0.00090, +0.00108, +0.00131, +0.00156, 
    +0.00186, +0.00221, +0.00260, +0.00305, +0.00356, 
    +0.00413, +0.00476, +0.00546, +0.00623, +0.00707, 
    +0.00798, +0.00896, +0.01000, +0.01111, +0.01227, 
    +0.01348, +0.01473, +0.01601, +0.01731, +0.01861, 
    +0.01990, +0.02117, +0.02240, +0.02357, +0.02468, 
    +0.02569, +0.02660, +0.02740, +0.02807, +0.02861, 
    +0.02899, +0.02923, +0.02931, +0.02923, +0.02899, 
    +0.02861, +0.02807, +0.02740, +0.02660, +0.02569, 
    +0.02468, +0.02357, +0.02240, +0.02117, +0.01990, 
    +0.01861, +0.01731, +0.01601, +0.01473, +0.01348, 
    +0.01227, +0.01111, +0.01000, +0.00896, +0.00798, 
    +0.00707, +0.00623, +0.00546, +0.00476, +0.00413, 
    +0.00356, +0.00305, +0.00260, +0.00221, +0.00186, 
    +0.00156, +0.00131, +0.00108, +0.00090, +0.00074, 
    +0.00060, +0.00049, +0.00039, +0.00032
};

__CCM_VAR_I float b_high[] = {
    +0.00002, +0.00005, +0.00007, +0.00011, +0.00016, 
    +0.00022, +0.00030, +0.00038, +0.00049, +0.00060, 
    +0.00072, +0.00085, +0.00097, +0.00107, +0.00115, 
    +0.00119, +0.00116, +0.00105, +0.00084, +0.00048, 
    -0.00003, -0.00073, -0.00165, -0.00281, -0.00422, 
    -0.00590, -0.00786, -0.01009, -0.01257, -0.01528, 
    -0.01819, -0.02125, -0.02440, -0.02758, -0.03070, 
    -0.03371, -0.03651, -0.03904, -0.04122, -0.04298, 
    -0.04429, -0.04508, +0.95463, -0.04508, -0.04429, 
    -0.04298, -0.04122, -0.03904, -0.03651, -0.03371, 
    -0.03070, -0.02758, -0.02440, -0.02125, -0.01819, 
    -0.01528, -0.01257, -0.01009, -0.00786, -0.00590, 
    -0.00422, -0.00281, -0.00165, -0.00073, -0.00003, 
    +0.00048, +0.00084, +0.00105, +0.00116, +0.00119, 
    +0.00115, +0.00107, +0.00097, +0.00085, +0.00072, 
    +0.00060, +0.00049, +0.00038, +0.00030, +0.00022, 
    +0.00016, +0.00011, +0.00007, +0.00005
};

__CCM_VAR_I float b_pass[] = {
    -0.00003, -0.00005, -0.00007, -0.00008, -0.00007, 
    -0.00002, +0.00008, +0.00026, +0.00053, +0.00090, 
    +0.00138, +0.00197, +0.00262, +0.00330, +0.00393, 
    +0.00441, +0.00460, +0.00437, +0.00359, +0.00212, 
    -0.00013, -0.00320, -0.00707, -0.01160, -0.01658, 
    -0.02169, -0.02655, -0.03069, -0.03362, -0.03489, 
    -0.03409, -0.03096, -0.02539, -0.01744, -0.00741, 
    +0.00421, +0.01675, +0.02943, +0.04137, +0.05173, 
    +0.05975, +0.06482, +0.06655, +0.06482, +0.05975, 
    +0.05173, +0.04137, +0.02943, +0.01675, +0.00421, 
    -0.00741, -0.01744, -0.02539, -0.03096, -0.03409, 
    -0.03489, -0.03362, -0.03069, -0.02655, -0.02169, 
    -0.01658, -0.01160, -0.00707, -0.00320, -0.00013, 
    +0.00212, +0.00359, +0.00437, +0.00460, +0.00441, 
    +0.00393, +0.00330, +0.00262, +0.00197, +0.00138, 
    +0.00090, +0.00053, +0.00026, +0.00008, -0.00002, 
    -0.00007, -0.00008, -0.00007, -0.00005
};

__CCM_VAR_I float b_stop[] = {
    -0.00002, -0.00000, -0.00000, -0.00002, -0.00009, 
    -0.00020, -0.00037, -0.00057, -0.00078, -0.00095, 
    -0.00101, -0.00090, -0.00056, +0.00001, +0.00079, 
    +0.00169, +0.00255, +0.00321, +0.00346, +0.00320, 
    +0.00240, +0.00121, -0.00005, -0.00091, -0.00078, 
    +0.00091, +0.00456, +0.01031, +0.01785, +0.02642, 
    +0.03479, +0.04144, +0.04474, +0.04324, +0.03599, 
    +0.02275, +0.00418, -0.01818, -0.04202, -0.06464, 
    -0.08326, -0.09550, +0.90023, -0.09550, -0.08326, 
    -0.06464, -0.04202, -0.01818, +0.00418, +0.02275, 
    +0.03599, +0.04324, +0.04474, +0.04144, +0.03479, 
    +0.02642, +0.01785, +0.01031, +0.00456, +0.00091, 
    -0.00078, -0.00091, -0.00005, +0.00121, +0.00240, 
    +0.00320, +0.00346, +0.00321, +0.00255, +0.00169, 
    +0.00079, +0.00001, -0.00056, -0.00090, -0.00101, 
    -0.00095, -0.00078, -0.00057, -0.00037, -0.00020, 
    -0.00009, -0.00002, -0.00000, -0.00000
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _FIR_COEFF_H_ */