/**
  ******************************************************************************
  * @file    stm32mp2xx_hal_conf.h
  * @author  MCD Application Team
  * @brief   HAL configuration template file.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32MP2xx_HAL_CONF_H
#define STM32MP2xx_HAL_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

/* ########################## Module Selection ############################## */
/**
  * @brief This is the list of modules to be used in the HAL driver
  */
#define HAL_MODULE_ENABLED
#if defined (CORE_CA35)
/* #define HAL_A35_WRAPPER_ENABLED */
#endif /* CORE_CA35 */
#define HAL_ADC_MODULE_ENABLED
#define HAL_BSEC_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED
#define HAL_CRC_MODULE_ENABLED
#define HAL_CRYP_MODULE_ENABLED
#define HAL_DCACHE_MODULE_ENABLED
#define HAL_DCMI_MODULE_ENABLED
#define HAL_DCMIPP_MODULE_ENABLED
/* #define HAL_DDR_MODULE_ENABLED */
#define HAL_DMA_MODULE_ENABLED
#define HAL_DSI_MODULE_ENABLED
#define HAL_ETH_MODULE_ENABLED
#define HAL_EXTI_MODULE_ENABLED
#define HAL_FDCAN_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_HASH_MODULE_ENABLED
#define HAL_HSEM_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
#define HAL_I2S_MODULE_ENABLED
/* #define HAL_I3C_MODULE_ENABLED */ /* Disabled because I3C HAL not available yet */
#define HAL_ICACHE_MODULE_ENABLED
#define HAL_IPCC_MODULE_ENABLED
#define HAL_IRDA_MODULE_ENABLED
#define HAL_IWDG_MODULE_ENABLED
#define HAL_LPTIM_MODULE_ENABLED
#define HAL_LTDC_MODULE_ENABLED
/* #define HAL_LVDS_MODULE_ENABLED */ /* Disabled because LVDS HAL not available yet */
#define HAL_MDF_MODULE_ENABLED
#define HAL_MMC_MODULE_ENABLED
#define HAL_NAND_MODULE_ENABLED
#define HAL_NOR_MODULE_ENABLED
#define HAL_OSPI_MODULE_ENABLED
#define HAL_OTFDEC_MODULE_ENABLED
#define HAL_PCD_MODULE_ENABLED
#define HAL_PKA_MODULE_ENABLED
#define HAL_PSSI_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_RAMCFG_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
#define HAL_RIF_MODULE_ENABLED
#define HAL_RNG_MODULE_ENABLED
#define HAL_RTC_MODULE_ENABLED
#define HAL_SAI_MODULE_ENABLED
#define HAL_SD_MODULE_ENABLED
#define HAL_SMARTCARD_MODULE_ENABLED
#define HAL_SMBUS_MODULE_ENABLED
#define HAL_SPDIFRX_MODULE_ENABLED
#define HAL_SPI_MODULE_ENABLED
#define HAL_SRAM_MODULE_ENABLED
#define HAL_TIM_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_USART_MODULE_ENABLED
#define HAL_WWDG_MODULE_ENABLED

/* ########################## Register Callbacks selection ############################## */
/**
  * @brief This is the list of modules where register callback can be used
  */
#define USE_HAL_ADC_REGISTER_CALLBACKS         	0U
#define USE_HAL_CRYP_REGISTER_CALLBACKS         0U
#define USE_HAL_DCMI_REGISTER_CALLBACKS         0U
#define USE_HAL_DCMIPP_REGISTER_CALLBACKS       0U
#define USE_HAL_DSI_REGISTER_CALLBACKS          0U
#define USE_HAL_HASH_REGISTER_CALLBACKS         0U
#define USE_HAL_I2C_REGISTER_CALLBACKS          0U
#define USE_HAL_I2S_REGISTER_CALLBACKS          0U
#define USE_HAL_I3C_REGISTER_CALLBACKS          0U
#define USE_HAL_IRDA_REGISTER_CALLBACKS         0U
#define USE_HAL_IWDG_REGISTER_CALLBACKS         0U
#define USE_HAL_LPTIM_REGISTER_CALLBACKS        0U
#define USE_HAL_LTDC_REGISTER_CALLBACKS         0U
#define USE_HAL_MDF_REGISTER_CALLBACKS          0U
#define USE_HAL_MMC_REGISTER_CALLBACKS          0U
#define USE_HAL_NAND_REGISTER_CALLBACKS         0U
#define USE_HAL_NOR_REGISTER_CALLBACKS          0U
#define USE_HAL_OSPI_REGISTER_CALLBACKS         0U
#define USE_HAL_OTFDEC_REGISTER_CALLBACKS       0U
#define USE_HAL_PKA_REGISTER_CALLBACKS          0U
#define USE_HAL_RAMCFG_REGISTER_CALLBACKS       0U
#define USE_HAL_RNG_REGISTER_CALLBACKS          0U
#define USE_HAL_RTC_REGISTER_CALLBACKS          0U
#define USE_HAL_SAI_REGISTER_CALLBACKS          0U
#define USE_HAL_SD_REGISTER_CALLBACKS           0U
#define USE_HAL_SMARTCARD_REGISTER_CALLBACKS    0U
#define USE_HAL_SMBUS_REGISTER_CALLBACKS        0U
#define USE_HAL_SPDIFRX_REGISTER_CALLBACKS      0U
#define USE_HAL_SPI_REGISTER_CALLBACKS          0U
#define USE_HAL_SRAM_REGISTER_CALLBACKS         0U
#define USE_HAL_TIM_REGISTER_CALLBACKS          0U
#define USE_HAL_UART_REGISTER_CALLBACKS         0U
#define USE_HAL_USART_REGISTER_CALLBACKS        0U
#define USE_HAL_WWDG_REGISTER_CALLBACKS         0U
#define USE_HAL_ETH_REGISTER_CALLBACKS          0U

/* ######################### Oscillator Values adaptation ################### */
/**
  * @brief Adjust the value of External High Speed oscillator (HSE) used in your application.
  *        This value is used by the RCC HAL module to compute the system frequency
  *        (when HSE is used as system clock source, directly or through the PLL).
  */
#if !defined (HSE_VALUE)
#define HSE_VALUE             ((uint32_t) 40000000U)  /*!< Value of the External High Speed oscillator in Hz */
#endif /* HSE_VALUE */

/**
  * @brief In the following line adjust the External High Speed oscillator (HSE) Startup
  *        Timeout value
  */
#if !defined (HSE_STARTUP_TIMEOUT)
#define HSE_STARTUP_TIMEOUT   ((uint32_t)100U)        /*!< Time out for HSE start up, in ms */
#endif /* HSE_STARTUP_TIMEOUT */

/**
  * @brief Internal High Speed oscillator (HSI) value.
  *        This value is used by the RCC HAL module to compute the system frequency
  *        (when HSI is used as system clock source, directly or through the PLL).
  */
#if !defined (HSI_VALUE)
#define HSI_VALUE             ((uint32_t) 64000000U)  /*!< Value of the Internal High Speed oscillator in Hz*/
#endif /* HSI_VALUE */

/**
  * @brief In the following line adjust the Internal High Speed oscillator (HSI) Startup
  *        Timeout value
  */
#if !defined (HSI_STARTUP_TIMEOUT)
#define HSI_STARTUP_TIMEOUT   ((uint32_t)5000U)       /*!< Time out for HSI start up */
#endif /* HSI_STARTUP_TIMEOUT */


/**
  * @brief Internal Low Speed oscillator (LSI) value.
  */
#if !defined (LSI_VALUE)
#define LSI_VALUE             ((uint32_t)32000U)      /*!< LSI Typical Value in Hz*/
#endif /* LSI_VALUE */                                  /*!< Value of the Internal Low Speed oscillator in Hz
The real value may vary depending on the variations
in voltage and temperature. */
/**
  * @brief In the following line adjust the Internal Low Speed oscillator (LSI) Startup
  *        Timeout value
  */
#if !defined (LSI_STARTUP_TIMEOUT)
#define LSI_STARTUP_TIMEOUT   ((uint32_t)1000U)       /*!< Time out for LSI start up, in ms*/
#define LSI_STARTUP_TIME   LSI_STARTUP_TIMEOUT        /*!< legacy name used inside iWDG driver*/
#endif /* LSI_STARTUP_TIME */

/**
  * @brief External Low Speed oscillator (LSE) value.
  */
#if !defined (LSE_VALUE)
#define LSE_VALUE             ((uint32_t)32768U)      /*!< Value of the External Low Speed oscillator in Hz*/
#endif /* LSE_VALUE */

/**
  * @brief Time out for LSE start up value in ms.
  */
#if !defined (LSE_STARTUP_TIMEOUT)
#define LSE_STARTUP_TIMEOUT   ((uint32_t)5000U)       /*!< Time out for LSE start up, in ms */
#endif /* LSE_STARTUP_TIMEOUT */

/**
  * @brief Internal  oscillator (MSI) default value.
  *        This value is the default MSI value after Reset.
  */
#if !defined (MSI_VALUE)
#define MSI_VALUE             ((uint32_t)4000000U)    /*!< Value of the Internal oscillator in Hz*/
#endif /* MSI_VALUE */

/**
  * @brief External clock source for I2S peripheral
  *        This value is used by the I2S HAL module to compute the I2S clock source
  *        frequency, this source is inserted directly through I2S_CKIN pad.
  */
#if !defined (EXTERNAL_CLOCK_VALUE)
#define EXTERNAL_CLOCK_VALUE  ((uint32_t)12288000U)   /*!< Value of the External clock in Hz*/
#endif /* EXTERNAL_CLOCK_VALUE */

/* Tip: To avoid modifying this file each time you need to use different HSE,
   ===  you can define the HSE value in your toolchain compiler preprocessor. */

/* ########################### System Configuration ######################### */
/**
  * @brief This is the HAL system configuration section
  */
#define  VDD_VALUE            3300U  /*!< Value of VDD in mv */
#ifdef CORE_CA35
#define  TICK_INT_PRIORITY    (((uint32_t)1<<(GIC_PRIO_BITS-1)) - 1)  /*!< tick interrupt priority set by default */
/*!< to GIC400 lowest (highest value) in secure mode */
#else
#define  TICK_INT_PRIORITY    (((uint32_t)1<<__NVIC_PRIO_BITS) - 1)   /*!< tick interrupt priority set by default */
/*!< to NVIC lowest (highest value)         */
/*  Warning: Must be set to higher priority for HAL_Delay() */
/*  and HAL_GetTick() usage under interrupt context         */
#endif /*CORE_CA35*/

#define  USE_RTOS                     0U
#define  PREFETCH_ENABLE              0U
#define  INSTRUCTION_CACHE_ENABLE     0U
#define  DATA_CACHE_ENABLE            0U

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1 */

/* Includes ------------------------------------------------------------------*/
/**
  * @brief Include module's header file
  */

#ifdef HAL_A35_WRAPPER_ENABLED
#include "stm32mp2xx_hal_wrapper_for_a35.h"
#endif /* HAL_A35_WRAPPER_ENABLED */

#ifdef HAL_RCC_MODULE_ENABLED
#include "stm32mp2xx_hal_rcc.h"
#endif /* HAL_RCC_MODULE_ENABLED */

#ifdef HAL_DMA_MODULE_ENABLED
#include "stm32mp2xx_hal_dma.h"
#endif /* HAL_DMA_MODULE_ENABLED */

#ifdef HAL_ADC_MODULE_ENABLED
#include "stm32mp2xx_hal_adc.h"
#endif /* HAL_ADC_MODULE_ENABLED */

#ifdef HAL_BSEC_MODULE_ENABLED
#include "stm32mp2xx_hal_bsec.h"
#endif /* HAL_BSEC_MODULE_ENABLED */

#ifdef HAL_CORTEX_MODULE_ENABLED
#include "stm32mp2xx_hal_cortex.h"
#endif /* HAL_CORTEX_MODULE_ENABLED */

#ifdef HAL_CRC_MODULE_ENABLED
#include "stm32mp2xx_hal_crc.h"
#endif /* HAL_CRC_MODULE_ENABLED */

#ifdef HAL_CRYP_MODULE_ENABLED
#include "stm32mp2xx_hal_cryp.h"
#endif /* HAL_CRYP_MODULE_ENABLED */

#ifdef HAL_DCACHE_MODULE_ENABLED
#include "stm32mp2xx_hal_dcache.h"
#endif /* HAL_DCACHE_MODULE_ENABLED */

#ifdef HAL_DCMI_MODULE_ENABLED
#include "stm32mp2xx_hal_dcmi.h"
#endif /* HAL_DCMI_MODULE_ENABLED */

#ifdef HAL_DCMIPP_MODULE_ENABLED
#include "stm32mp2xx_hal_dcmipp.h"
#endif /* HAL_DCMIPP_MODULE_ENABLED */

#ifdef HAL_DDR_MODULE_ENABLED
#include "stm32mp2xx_hal_ddr.h"
#endif /* HAL_DDR_MODULE_ENABLED */

#ifdef HAL_DSI_MODULE_ENABLED
#include "stm32mp2xx_hal_dsi.h"
#endif /* HAL_DSI_MODULE_ENABLED */

#ifdef HAL_ETH_MODULE_ENABLED
#include "stm32mp2xx_hal_eth.h"
#endif /* HAL_ETH_MODULE_ENABLED */

#ifdef HAL_EXTI_MODULE_ENABLED
#include "stm32mp2xx_hal_exti.h"
#endif /* HAL_EXTI_MODULE_ENABLED */

#ifdef HAL_FDCAN_MODULE_ENABLED
#include "stm32mp2xx_hal_fdcan.h"
#endif /* HAL_FDCAN_MODULE_ENABLED */

#ifdef HAL_GPIO_MODULE_ENABLED
#include "stm32mp2xx_hal_gpio.h"
#endif /* HAL_GPIO_MODULE_ENABLED */

#ifdef HAL_HASH_MODULE_ENABLED
#include "stm32mp2xx_hal_hash.h"
#endif /* HAL_HASH_MODULE_ENABLED */

#ifdef HAL_HSEM_MODULE_ENABLED
#include "stm32mp2xx_hal_hsem.h"
#endif /* HAL_HSEM_MODULE_ENABLED */

#ifdef HAL_I2C_MODULE_ENABLED
#include "stm32mp2xx_hal_i2c.h"
#endif /* HAL_I2C_MODULE_ENABLED */

#ifdef HAL_I2S_MODULE_ENABLED
#include "stm32mp2xx_hal_i2s.h"
#endif /* HAL_I2S_MODULE_ENABLED */

#ifdef HAL_I3C_MODULE_ENABLED
#include "stm32mp2xx_hal_i3c.h"
#endif /* HAL_I3C_MODULE_ENABLED */

#ifdef HAL_ICACHE_MODULE_ENABLED
#include "stm32mp2xx_hal_icache.h"
#endif /* HAL_ICACHE_MODULE_ENABLED */

#ifdef HAL_IPCC_MODULE_ENABLED
#include "stm32mp2xx_hal_ipcc.h"
#endif /* HAL_IPCC_MODULE_ENABLED */

#ifdef HAL_IRDA_MODULE_ENABLED
#include "stm32mp2xx_hal_irda.h"
#endif /* HAL_IRDA_MODULE_ENABLED */

#ifdef HAL_IWDG_MODULE_ENABLED
#include "stm32mp2xx_hal_iwdg.h"
#endif /* HAL_IWDG_MODULE_ENABLED */

#ifdef HAL_LPTIM_MODULE_ENABLED
#include "stm32mp2xx_hal_lptim.h"
#endif /* HAL_LPTIM_MODULE_ENABLED */

#ifdef HAL_LTDC_MODULE_ENABLED
#include "stm32mp2xx_hal_ltdc.h"
#endif /* HAL_LTDC_MODULE_ENABLED */

#ifdef HAL_LVDS_MODULE_ENABLED
#include "stm32mp2xx_hal_lvds.h"
#endif /* HAL_LVDS_MODULE_ENABLED */

#ifdef HAL_MDF_MODULE_ENABLED
#include "stm32mp2xx_hal_mdf.h"
#endif /* HAL_MDF_MODULE_ENABLED */

#ifdef HAL_MMC_MODULE_ENABLED
#include "stm32mp2xx_hal_mmc.h"
#endif /* HAL_MMC_MODULE_ENABLED */

#ifdef HAL_NAND_MODULE_ENABLED
#include "stm32mp2xx_hal_nand.h"
#endif /* HAL_NAND_MODULE_ENABLED */

#ifdef HAL_NOR_MODULE_ENABLED
#include "stm32mp2xx_hal_nor.h"
#endif /* HAL_NOR_MODULE_ENABLED */

#ifdef HAL_OSPI_MODULE_ENABLED
#include "stm32mp2xx_hal_ospi.h"
#endif /* HAL_OSPI_MODULE_ENABLED */

#ifdef HAL_OTFDEC_MODULE_ENABLED
#include "stm32mp2xx_hal_otfdec.h"
#endif /* HAL_OTFDEC_MODULE_ENABLED */

#ifdef HAL_PCD_MODULE_ENABLED
#include "stm32mp2xx_hal_pcd.h"
#endif /* HAL_PCD_MODULE_ENABLED */

#ifdef HAL_PKA_MODULE_ENABLED
#include "stm32mp2xx_hal_pka.h"
#endif /* HAL_PKA_MODULE_ENABLED */

#ifdef HAL_PSSI_MODULE_ENABLED
#include "stm32mp2xx_hal_pssi.h"
#endif /* HAL_PSSI_MODULE_ENABLED */

#ifdef HAL_PWR_MODULE_ENABLED
#include "stm32mp2xx_hal_pwr.h"
#endif /* HAL_PWR_MODULE_ENABLED */

#ifdef HAL_RAMCFG_MODULE_ENABLED
#include "stm32mp2xx_hal_ramcfg.h"
#endif /* HAL_RAMCFG_MODULE_ENABLED */

#ifdef HAL_RNG_MODULE_ENABLED
#include "stm32mp2xx_hal_rng.h"
#endif /* HAL_RNG_MODULE_ENABLED */

#ifdef HAL_RIF_MODULE_ENABLED
#include "stm32mp2xx_hal_rif.h"
#endif /* HAL_RIF_MODULE_ENABLED */

#ifdef HAL_RTC_MODULE_ENABLED
#include "stm32mp2xx_hal_rtc.h"
#endif /* HAL_RTC_MODULE_ENABLED */

#ifdef HAL_SAI_MODULE_ENABLED
#include "stm32mp2xx_hal_sai.h"
#endif /* HAL_SAI_MODULE_ENABLED */

#ifdef HAL_SD_MODULE_ENABLED
#include "stm32mp2xx_hal_sd.h"
#endif /* HAL_SD_MODULE_ENABLED */

#ifdef HAL_SMARTCARD_MODULE_ENABLED
#include "stm32mp2xx_hal_smartcard.h"
#endif /* HAL_SMARTCARD_MODULE_ENABLED */

#ifdef HAL_SMBUS_MODULE_ENABLED
#include "stm32mp2xx_hal_smbus.h"
#endif /* HAL_SMBUS_MODULE_ENABLED */

#ifdef HAL_SPDIFRX_MODULE_ENABLED
#include "stm32mp2xx_hal_spdifrx.h"
#endif /* HAL_SPDIFRX_MODULE_ENABLED */

#ifdef HAL_SPI_MODULE_ENABLED
#include "stm32mp2xx_hal_spi.h"
#endif /* HAL_SPI_MODULE_ENABLED */

#ifdef HAL_SRAM_MODULE_ENABLED
#include "stm32mp2xx_hal_sram.h"
#endif /* HAL_SRAM_MODULE_ENABLED */

#ifdef HAL_TIM_MODULE_ENABLED
#include "stm32mp2xx_hal_tim.h"
#endif /* HAL_TIM_MODULE_ENABLED */

#ifdef HAL_UART_MODULE_ENABLED
#include "stm32mp2xx_hal_uart.h"
#endif /* HAL_UART_MODULE_ENABLED */

#ifdef HAL_USART_MODULE_ENABLED
#include "stm32mp2xx_hal_usart.h"
#endif /* HAL_USART_MODULE_ENABLED */

#ifdef HAL_WWDG_MODULE_ENABLED
#include "stm32mp2xx_hal_wwdg.h"
#endif /* HAL_WWDG_MODULE_ENABLED */

/* Exported macro ------------------------------------------------------------*/
#ifdef  USE_FULL_ASSERT
/**
  * @brief  The assert_param macro is used for function's parameters check.
  * @param  expr: If expr is false, it calls assert_failed function
  *         which reports the name of the source file and the source
  *         line number of the call that failed.
  *         If expr is true, it returns no value.
  * @retval None
  */
#define assert_param(expr) ((expr) ? (void)0U : assert_failed((uint8_t *)__FILE__, __LINE__))
/* Exported functions ------------------------------------------------------- */
void assert_failed(uint8_t *file, uint32_t line);
#else
#define assert_param(expr) ((void)0U)
#endif /* USE_FULL_ASSERT */

#ifdef __cplusplus
}
#endif

#endif /* STM32MP2xx_HAL_CONF_H */
