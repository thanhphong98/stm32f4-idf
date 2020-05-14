// MIT License

// Copyright (c) 2020 thanhphong98

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef _TIMER_MAPPING_STM32F4_H_
#define _TIMER_MAPPING_STM32F4_H_

#ifdef __cplusplus
extern "C" {
#endif

#define SYSTEM_CLOCK                168000000                   /*!< System clock */
#define APB1_CLOCK                  (SYSTEM_CLOCK/2)            /*!< APB1 clock */
#define APB2_CLOCK                  (SYSTEM_CLOCK)              /*!< APB2 clock */

#define TIM1_CH1_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_8}

#define TIM1_CH1_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOEEN,  \
                                     .port = GPIOE,                             \
                                     .pin = GPIO_PIN_9}

#define TIM1_CH2_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_9}

#define TIM1_CH2_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOEEN,  \
                                     .port = GPIOE,                             \
                                     .pin = GPIO_PIN_10}

#define TIM1_CH3_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_10}

#define TIM1_CH3_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOEEN,  \
                                     .port = GPIOE,                             \
                                     .pin = GPIO_PIN_13}

#define TIM1_CH4_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_11}

#define TIM1_CH4_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOEEN,  \
                                     .port = GPIOE,                             \
                                     .pin = GPIO_PIN_14}

#define TIM2_CH1_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_0}

#define TIM2_CH1_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_5}

#define TIM2_CH1_PP3_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_15}

#define TIM2_CH2_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_1}

#define TIM2_CH2_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_3}

#define TIM2_CH3_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_2}

#define TIM2_CH3_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_10}

#define TIM2_CH4_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_3}

#define TIM2_CH4_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_11}

#define TIM3_CH1_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_6}

#define TIM3_CH1_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_4}

#define TIM3_CH1_PP3_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOCEN,  \
                                     .port = GPIOC,                             \
                                     .pin = GPIO_PIN_6}

#define TIM3_CH2_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_7}

#define TIM3_CH2_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_5}

#define TIM3_CH2_PP3_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOCEN,  \
                                     .port = GPIOC,                             \
                                     .pin = GPIO_PIN_7}

#define TIM3_CH3_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_0}

#define TIM3_CH3_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOCEN,  \
                                     .port = GPIOC,                             \
                                     .pin = GPIO_PIN_8}

#define TIM3_CH4_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_1}

#define TIM3_CH4_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOCEN,  \
                                     .port = GPIOC,                             \
                                     .pin = GPIO_PIN_9}


#define TIM4_CH1_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_6}

#define TIM4_CH1_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIODEN,  \
                                     .port = GPIOD,                             \
                                     .pin = GPIO_PIN_12}

#define TIM4_CH2_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_7}

#define TIM4_CH2_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIODEN,  \
                                     .port = GPIOD,                             \
                                     .pin = GPIO_PIN_13}

#define TIM4_CH3_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_8}

#define TIM4_CH3_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIODEN,  \
                                     .port = GPIOD,                             \
                                     .pin = GPIO_PIN_14}

#define TIM4_CH4_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_9}

#define TIM4_CH4_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIODEN,  \
                                     .port = GPIOD,                             \
                                     .pin = GPIO_PIN_15}

#define TIM5_CH1_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_0}

#define TIM5_CH1_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOHEN,  \
                                     .port = GPIOH,                             \
                                     .pin = GPIO_PIN_10}

#define TIM5_CH2_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                     \
                                     .pin = GPIO_PIN_1}

#define TIM5_CH2_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOHEN,  \
                                     .port = GPIOH,                             \
                                     .pin = GPIO_PIN_11}

#define TIM5_CH3_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_2}

#define TIM5_CH3_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOHEN,  \
                                     .port = GPIOH,                             \
                                     .pin = GPIO_PIN_12}

#define TIM5_CH4_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_3}

#define TIM5_CH4_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOIEN,  \
                                     .port = GPIOI,                             \
                                     .pin = GPIO_PIN_0}

#define TIM8_CH1_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOCEN,  \
                                     .port = GPIOC,                             \
                                     .pin = GPIO_PIN_6}

#define TIM8_CH1_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOIEN,  \
                                     .port = GPIOI,                             \
                                     .pin = GPIO_PIN_15}

#define TIM8_CH2_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOCEN,  \
                                     .port = GPIOC,                             \
                                     .pin = GPIO_PIN_7}

#define TIM8_CH2_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOIEN,  \
                                     .port = GPIOI,                             \
                                     .pin = GPIO_PIN_6}

#define TIM8_CH3_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOCEN,  \
                                     .port = GPIOC,                             \
                                     .pin = GPIO_PIN_8}

#define TIM8_CH3_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOIEN,  \
                                     .port = GPIOI,                             \
                                     .pin = GPIO_PIN_7}

#define TIM8_CH4_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOCEN,  \
                                     .port = GPIOC,                             \
                                     .pin = GPIO_PIN_9}

#define TIM8_CH4_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOIEN,  \
                                     .port = GPIOI,                             \
                                     .pin = GPIO_PIN_2}

#define TIM9_CH1_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_2}

#define TIM9_CH1_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOEEN,  \
                                     .port = GPIOE,                             \
                                     .pin = GPIO_PIN_5}

#define TIM9_CH2_PP1_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_3}

#define TIM9_CH2_PP2_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOEEN,  \
                                     .port = GPIOE,                             \
                                     .pin = GPIO_PIN_6}

#define TIM10_CH1_PP1_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_8}

#define TIM10_CH1_PP2_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOFEN,  \
                                     .port = GPIOF,                             \
                                     .pin = GPIO_PIN_6}

#define TIM11_CH1_PP1_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_9}

#define TIM11_CH1_PP2_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOFEN,  \
                                     .port = GPIOF,                             \
                                     .pin = GPIO_PIN_7}

#define TIM12_CH1_PP1_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_14}

#define TIM12_CH1_PP2_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOHEN,  \
                                     .port = GPIOH,                             \
                                     .pin = GPIO_PIN_6}

#define TIM12_CH2_PP1_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOBEN,  \
                                     .port = GPIOB,                             \
                                     .pin = GPIO_PIN_15}

#define TIM12_CH2_PP2_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOHEN,  \
                                     .port = GPIOH,                             \
                                     .pin = GPIO_PIN_9}

#define TIM13_CH1_PP1_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_6}

#define TIM13_CH1_PP2_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOFEN,  \
                                     .port = GPIOF,                             \
                                     .pin = GPIO_PIN_8}

#define TIM14_CH1_PP1_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_7}

#define TIM14_CH1_PP2_HW_INFO       {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOFEN,  \
                                     .port = GPIOF,                             \
                                     .pin = GPIO_PIN_9}

/*
 * Timer External Counter Hardware Information.
 */
#define TIM1_PP1_ETR_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_12}

#define TIM1_PP2_ETR_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOEEN,  \
                                     .port = GPIOE,                             \
                                     .pin = GPIO_PIN_7}

#define TIM2_PP1_ETR_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_0}

#define TIM2_PP2_ETR_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_5}

#define TIM2_PP3_ETR_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_15}

#define TIM3_PP1_ETR_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIODEN,  \
                                     .port = GPIOD,                             \
                                     .pin = GPIO_PIN_2}

#define TIM4_PP1_ETR_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOEEN,  \
                                     .port = GPIOE,                             \
                                     .pin = GPIO_PIN_0}

#define TIM8_PP1_ETR_HW_INFO        {.rcc_ahbenr_gpioen = RCC_AHB1ENR_GPIOAEN,  \
                                     .port = GPIOA,                             \
                                     .pin = GPIO_PIN_0}

typedef struct {
    uint32_t        rcc_ahbenr_gpioen;      /*!< GPIO RCC AHPENR register */
    GPIO_TypeDef    *port;                  /*!< General Purpose I/O */
    uint16_t        pin;                    /*!< Pin */
} tim_hw_info_t;

tim_hw_info_t TIM_HW_INFO_MAPPING[TIMER_NUM_MAX][TIMER_CHNL_MAX][TIMER_PINS_PACK_MAX] = {
    {   {TIM1_CH1_PP1_HW_INFO , TIM1_CH1_PP2_HW_INFO ,                  {0}},
        {TIM1_CH2_PP1_HW_INFO , TIM1_CH2_PP2_HW_INFO ,                  {0}},
        {TIM1_CH3_PP1_HW_INFO , TIM1_CH3_PP2_HW_INFO ,                  {0}},
        {TIM1_CH4_PP1_HW_INFO , TIM1_CH4_PP2_HW_INFO ,                  {0}}
    },

    {   {TIM2_CH1_PP1_HW_INFO , TIM2_CH1_PP2_HW_INFO , TIM2_CH1_PP3_HW_INFO},
        {TIM2_CH2_PP1_HW_INFO , TIM2_CH2_PP2_HW_INFO ,                  {0}},
        {TIM2_CH3_PP1_HW_INFO , TIM2_CH3_PP2_HW_INFO ,                  {0}},
        {TIM2_CH4_PP1_HW_INFO , TIM2_CH4_PP2_HW_INFO ,                  {0}}
    },

    {   {TIM3_CH1_PP1_HW_INFO , TIM3_CH1_PP2_HW_INFO , TIM3_CH1_PP3_HW_INFO},
        {TIM3_CH2_PP1_HW_INFO , TIM3_CH2_PP2_HW_INFO , TIM3_CH2_PP3_HW_INFO},
        {TIM3_CH3_PP1_HW_INFO , TIM3_CH3_PP2_HW_INFO ,                  {0}},
        {TIM3_CH4_PP1_HW_INFO , TIM3_CH4_PP2_HW_INFO ,                  {0}}
    },

    {   {TIM4_CH1_PP1_HW_INFO , TIM4_CH1_PP2_HW_INFO ,                  {0}},
        {TIM4_CH2_PP1_HW_INFO , TIM4_CH2_PP2_HW_INFO ,                  {0}},
        {TIM4_CH3_PP1_HW_INFO , TIM4_CH3_PP2_HW_INFO ,                  {0}},
        {TIM4_CH4_PP1_HW_INFO , TIM4_CH4_PP2_HW_INFO ,                  {0}}
    },

    {   {TIM5_CH1_PP1_HW_INFO , TIM5_CH1_PP2_HW_INFO ,                  {0}},
        {TIM5_CH2_PP1_HW_INFO , TIM5_CH2_PP2_HW_INFO ,                  {0}},
        {TIM5_CH3_PP1_HW_INFO , TIM5_CH3_PP2_HW_INFO ,                  {0}},
        {TIM5_CH4_PP1_HW_INFO , TIM5_CH4_PP2_HW_INFO ,                  {0}}
    },

    {   {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}}
    },

    {   {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}}
    },

    {   {TIM8_CH1_PP1_HW_INFO , TIM8_CH1_PP2_HW_INFO ,                  {0}},
        {TIM8_CH2_PP1_HW_INFO , TIM8_CH2_PP2_HW_INFO ,                  {0}},
        {TIM8_CH3_PP1_HW_INFO , TIM8_CH3_PP2_HW_INFO ,                  {0}},
        {TIM8_CH4_PP1_HW_INFO , TIM8_CH4_PP2_HW_INFO ,                  {0}}
    },

    {   {TIM9_CH1_PP1_HW_INFO , TIM9_CH1_PP2_HW_INFO ,                  {0}},
        {TIM9_CH2_PP1_HW_INFO , TIM9_CH2_PP2_HW_INFO ,                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}}
    },

    {   {TIM10_CH1_PP1_HW_INFO, TIM10_CH1_PP2_HW_INFO,                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}}
    },

    {   {TIM11_CH1_PP1_HW_INFO, TIM11_CH1_PP2_HW_INFO,                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}}
    },

    {   {TIM12_CH1_PP1_HW_INFO, TIM12_CH1_PP2_HW_INFO,                  {0}},
        {TIM12_CH2_PP1_HW_INFO, TIM12_CH2_PP2_HW_INFO,                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}}
    },

    {   {TIM13_CH1_PP1_HW_INFO, TIM13_CH1_PP2_HW_INFO,                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}}
    },

    {   {TIM14_CH1_PP1_HW_INFO, TIM14_CH1_PP2_HW_INFO,                     },
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}},
        {                  {0},                   {0},                  {0}}
    }
};

tim_hw_info_t TIM_ETR_HW_INFO_MAPPING[TIMER_NUM_MAX][TIMER_PINS_PACK_MAX] = {
    { TIM1_PP1_ETR_HW_INFO, TIM1_PP2_ETR_HW_INFO,                  {0}},
    { TIM2_PP1_ETR_HW_INFO, TIM2_PP2_ETR_HW_INFO, TIM2_PP3_ETR_HW_INFO},
    { TIM3_PP1_ETR_HW_INFO,                  {0},                  {0}},
    { TIM4_PP1_ETR_HW_INFO,                  {0},                  {0}},
    {                  {0},                  {0},                  {0}},
    {                  {0},                  {0},                  {0}},
    {                  {0},                  {0},                  {0}},
    { TIM8_PP1_ETR_HW_INFO,                  {0},                  {0}},
    {                  {0},                  {0},                  {0}},
    {                  {0},                  {0},                  {0}},
    {                  {0},                  {0},                  {0}},
    {                  {0},                  {0},                  {0}},
    {                  {0},                  {0},                  {0}},
    {                  {0},                  {0},                  {0}},
};

static TIM_TypeDef* TIM_MAPPING[TIMER_NUM_MAX] = {
    TIM1,
    TIM2,
    TIM3,
    TIM4,
    TIM5,
    TIM6,
    TIM7,
    TIM8,
    TIM9,
    TIM10,
    TIM11,
    TIM12,
    TIM13,
    TIM14
};

uint32_t TIM_ALTERNATE_FUNC_MAPPING[TIMER_NUM_MAX] = {
    GPIO_AF1_TIM1,
    GPIO_AF1_TIM2,
    GPIO_AF2_TIM3,
    GPIO_AF2_TIM4,
    GPIO_AF2_TIM5,
    0,
    0,
    GPIO_AF3_TIM8,
    GPIO_AF3_TIM9,
    GPIO_AF3_TIM10,
    GPIO_AF3_TIM11,
    GPIO_AF9_TIM12,
    GPIO_AF9_TIM13,
    GPIO_AF9_TIM14
};

uint32_t TIM_CHANNEL_x_MAPPING[TIMER_CHNL_MAX] = {
    TIM_CHANNEL_1,      
    TIM_CHANNEL_2,      
    TIM_CHANNEL_3,      
    TIM_CHANNEL_4       
};

uint32_t TIMER_COUNTER_MODE_MAPPING[TIMER_COUNTER_MODE_MAX] = {
    TIM_COUNTERMODE_UP,
    TIM_COUNTERMODE_DOWN
};

uint32_t APBx_CLOCK_MAPPING[TIMER_NUM_MAX] = {
    APB2_CLOCK,         
    APB1_CLOCK,         
    APB1_CLOCK,         
    APB1_CLOCK,         
    APB1_CLOCK,         
    APB1_CLOCK,         
    APB1_CLOCK,         
    APB1_CLOCK,         
    APB2_CLOCK,         
    APB2_CLOCK,         
    APB2_CLOCK,         
    APB1_CLOCK,         
    APB1_CLOCK,         
    APB1_CLOCK          
};

uint32_t RCC_APBENR_TIMEN_MAPPING[TIMER_NUM_MAX] = {
    RCC_APB2ENR_TIM1EN,
    RCC_APB1ENR_TIM2EN,
    RCC_APB1ENR_TIM3EN,
    RCC_APB1ENR_TIM4EN,
    RCC_APB1ENR_TIM5EN,
    0,
    0,
    RCC_APB2ENR_TIM8EN,
    RCC_APB2ENR_TIM9EN,
    RCC_APB2ENR_TIM10EN,
    RCC_APB2ENR_TIM11EN,
    RCC_APB1ENR_TIM12EN,
    RCC_APB1ENR_TIM13EN,
    RCC_APB1ENR_TIM14EN
};

#ifdef __cplusplus
}
#endif

#endif /* _TIMER_MAPPING_STM32F4_H_ */