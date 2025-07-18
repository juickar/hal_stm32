# Copyright (C) 2025 Savoir-faire Linux, Inc.
#
# SPDX-License-Identifier: Apache-2.0

if(CORE_CA35)
        zephyr_library_sources(soc/system_stm32mp2xx_a35.c)
else()
        zephyr_library_sources(soc/system_stm32mp2xx_m33.c)
endif()
zephyr_library_sources(drivers/src/stm32mp2xx_hal.c)
zephyr_library_sources(drivers/src/stm32mp2xx_hal_rcc.c)
zephyr_library_sources(drivers/src/stm32mp2xx_hal_rcc_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_ADC drivers/src/stm32mp2xx_hal_adc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_ADC_EX drivers/src/stm32mp2xx_hal_adc_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_BSEC drivers/src/stm32mp2xx_hal_bsec.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_CORTEX drivers/src/stm32mp2xx_hal_cortex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_CRC drivers/src/stm32mp2xx_hal_crc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_CRC_EX drivers/src/stm32mp2xx_hal_crc_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_CRYP drivers/src/stm32mp2xx_hal_cryp.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_CRYP_EX drivers/src/stm32mp2xx_hal_cryp_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_DCACHE drivers/src/stm32mp2xx_hal_dcache.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_DCMI drivers/src/stm32mp2xx_hal_dcmi.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_DCMIPP drivers/src/stm32mp2xx_hal_dcmipp.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_DMA drivers/src/stm32mp2xx_hal_dma.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_DMA_EX drivers/src/stm32mp2xx_hal_dma_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_DSI drivers/src/stm32mp2xx_hal_dsi.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_ETH drivers/src/stm32mp2xx_hal_eth.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_ETH_EX drivers/src/stm32mp2xx_hal_eth_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_EXTI drivers/src/stm32mp2xx_hal_exti.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_FDCAN drivers/src/stm32mp2xx_hal_fdcan.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_GPIO drivers/src/stm32mp2xx_hal_gpio.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_HASH drivers/src/stm32mp2xx_hal_hash.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_HCD drivers/src/stm32mp2xx_hal_hcd.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_HSEM drivers/src/stm32mp2xx_hal_hsem.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_I2C drivers/src/stm32mp2xx_hal_i2c.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_I2C_EX drivers/src/stm32mp2xx_hal_i2c_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_I2S drivers/src/stm32mp2xx_hal_i2s.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_I2S_EX drivers/src/stm32mp2xx_hal_i2s_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_I3C drivers/src/stm32mp2xx_hal_i3c.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_ICACHE drivers/src/stm32mp2xx_hal_icache.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_IPCC drivers/src/stm32mp2xx_hal_ipcc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_IRDA drivers/src/stm32mp2xx_hal_irda.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_IWDG drivers/src/stm32mp2xx_hal_iwdg.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_LPTIM drivers/src/stm32mp2xx_hal_lptim.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_LTDC drivers/src/stm32mp2xx_hal_ltdc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_LTDC_EX drivers/src/stm32mp2xx_hal_ltdc_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_MDF drivers/src/stm32mp2xx_hal_mdf.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_MMC drivers/src/stm32mp2xx_hal_mmc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_MMC_EX drivers/src/stm32mp2xx_hal_mmc_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_NAND drivers/src/stm32mp2xx_hal_nand.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_NOR drivers/src/stm32mp2xx_hal_nor.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_OSPI drivers/src/stm32mp2xx_hal_ospi.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_OTFDEC drivers/src/stm32mp2xx_hal_otfdec.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_PCD drivers/src/stm32mp2xx_hal_pcd.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_PCD_DRD drivers/src/stm32mp2xx_hal_pcd_drd.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_PCD_DRD_EX drivers/src/stm32mp2xx_hal_pcd_drd_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_PCD_EX drivers/src/stm32mp2xx_hal_pcd_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_PCD_OTG drivers/src/stm32mp2xx_hal_pcd_otg.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_PCD_OTG_EX drivers/src/stm32mp2xx_hal_pcd_otg_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_PKA drivers/src/stm32mp2xx_hal_pka.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_PSSI drivers/src/stm32mp2xx_hal_pssi.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_PWR drivers/src/stm32mp2xx_hal_pwr.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_PWR_EX drivers/src/stm32mp2xx_hal_pwr_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_RAMCFG drivers/src/stm32mp2xx_hal_ramcfg.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_RIF drivers/src/stm32mp2xx_hal_rif.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_RNG drivers/src/stm32mp2xx_hal_rng.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_RNG_EX drivers/src/stm32mp2xx_hal_rng_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_RTC drivers/src/stm32mp2xx_hal_rtc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_RTC_EX drivers/src/stm32mp2xx_hal_rtc_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SAI drivers/src/stm32mp2xx_hal_sai.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SAI_EX drivers/src/stm32mp2xx_hal_sai_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SD drivers/src/stm32mp2xx_hal_sd.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SD_EX drivers/src/stm32mp2xx_hal_sd_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SMARTCARD drivers/src/stm32mp2xx_hal_smartcard.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SMARTCARD_EX drivers/src/stm32mp2xx_hal_smartcard_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SMBUS drivers/src/stm32mp2xx_hal_smbus.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SMBUS_EX drivers/src/stm32mp2xx_hal_smbus_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SPDIFRX drivers/src/stm32mp2xx_hal_spdifrx.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SPI drivers/src/stm32mp2xx_hal_spi.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SPI_EX drivers/src/stm32mp2xx_hal_spi_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_SRAM drivers/src/stm32mp2xx_hal_sram.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_TIM drivers/src/stm32mp2xx_hal_tim.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_TIM_EX drivers/src/stm32mp2xx_hal_tim_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_UART drivers/src/stm32mp2xx_hal_uart.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_UART_EX drivers/src/stm32mp2xx_hal_uart_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_USART drivers/src/stm32mp2xx_hal_usart.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_USART_EX drivers/src/stm32mp2xx_hal_usart_ex.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_HAL_WWDG drivers/src/stm32mp2xx_hal_wwdg.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_ADC drivers/src/stm32mp2xx_ll_adc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_CRC drivers/src/stm32mp2xx_ll_crc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_DMA drivers/src/stm32mp2xx_ll_dma.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_EXTI drivers/src/stm32mp2xx_ll_exti.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_FMC drivers/src/stm32mp2xx_ll_fmc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_GPIO drivers/src/stm32mp2xx_ll_gpio.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_I2C drivers/src/stm32mp2xx_ll_i2c.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_I3C drivers/src/stm32mp2xx_ll_i3c.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_ICACHE drivers/src/stm32mp2xx_ll_icache.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_LPTIM drivers/src/stm32mp2xx_ll_lptim.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_LPUART drivers/src/stm32mp2xx_ll_lpuart.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_PKA drivers/src/stm32mp2xx_ll_pka.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_PWR drivers/src/stm32mp2xx_ll_pwr.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_RCC drivers/src/stm32mp2xx_ll_rcc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_RNG drivers/src/stm32mp2xx_ll_rng.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_RTC drivers/src/stm32mp2xx_ll_rtc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_SDMMC drivers/src/stm32mp2xx_ll_sdmmc.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_SPI drivers/src/stm32mp2xx_ll_spi.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_TIM drivers/src/stm32mp2xx_ll_tim.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_UCPD drivers/src/stm32mp2xx_ll_ucpd.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_USART drivers/src/stm32mp2xx_ll_usart.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_USB drivers/src/stm32mp2xx_ll_usb.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_USB_DRD drivers/src/stm32mp2xx_ll_usb_drd.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_LL_USB_OTG drivers/src/stm32mp2xx_ll_usb_otg.c)
zephyr_library_sources_ifdef(CONFIG_USE_STM32_UTIL_I3C drivers/src/stm32mp2xx_util_i3c.c)

