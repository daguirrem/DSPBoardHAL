/**
 * @file main.c
 * @author David A. Aguirre M. <daguirre.m@outlook.com>
 * @brief Blink led example.
 * @version d0.1
 * @date 2022-07-10
 * 
 * @copyright MIT License, Copyright (c) 2022 David A. Aguirre M. @n @n
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

#include "system.h"
#include "gpio.h"

int main (void)
{
    /* GPIO Configuration */
    gpio_clk_en(GPIOH_RCC);
    gpio_config_mode(GPIOH, GPIO_MODE_OUTPUT, GPIO_IO10 | GPIO_IO11);

    /* Initial GPIO Pins states */
    gpio_port_clr(GPIOH, GPIO_IO10);
    gpio_port_set(GPIOH, GPIO_IO11);

    while(1)
    {
        /* Toggle GPIOH IO 10 & 11 every second */
        gpio_port_tgl(GPIOH, GPIO_IO10 | GPIO_IO11);
        delay_ms(1000);
    }
}
