/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#if defined(CRAZYBEEF3FS)
#define TARGET_BOARD_IDENTIFIER "CBFS"
#define USBD_PRODUCT_STRING     "CrazyBee F3 FS"
#elif defined(CRAZYBEEF3DX)
#define TARGET_BOARD_IDENTIFIER "CBDX"
#define USBD_PRODUCT_STRING     "CrazyBee F3 DX"
#else
#define TARGET_BOARD_IDENTIFIER "CBFR"
#define USBD_PRODUCT_STRING     "CrazyBee F3 FR"
#endif

#define ENABLE_DSHOT_DMAR       DSHOT_DMAR_OFF

#define LED0_PIN                PB3
#define USE_BEEPER 
#define BEEPER_PIN              PC15
#define BEEPER_INVERTED

#define USE_EXTI
#define USE_GYRO_EXTI
#define GYRO_1_EXTI_PIN         PC13
#define USE_MPU_DATA_READY_SIGNAL
#define GYRO_1_SPI_INSTANCE     SPI1
#define GYRO_1_CS_PIN           PA4
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define GYRO_1_ALIGN            CW90_DEG
#define USE_ACC
#define USE_ACC_SPI_MPU6000

#define USE_VCP
#define USE_SOFTSERIAL1
#define USE_UART3
#define UART3_TX_PIN            PB10
#define UART3_RX_PIN            PB11
#define SOFTSERIAL1_TX_PIN      PB4

#if defined(CRAZYBEEF3DX)
#define USE_UART2
#define UART2_TX_PIN            PA14
#define UART2_RX_PIN            PA15
#define SERIAL_PORT_COUNT       4
#else
#define SERIAL_PORT_COUNT       3
#endif

#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#if defined(USE_RX_SPI)
#define USE_SPI_DEVICE_2 
#define SPI2_NSS_PIN            PB12
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define RX_SPI_INSTANCE         SPI2
#define RX_NSS_PIN              SPI2_NSS_PIN
#define RX_SPI_EXTI_PIN         PA8
#define RX_SPI_BIND_PIN         PA9
#define RX_SPI_LED_PIN          PA10
#define DEFAULT_RX_FEATURE      FEATURE_RX_SPI
#else
#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_UART           SERIAL_PORT_USART3
#endif

#if defined(CRAZYBEEF3FS)
#if defined(USE_RX_SPI)
#define RX_SPI_DEFAULT_PROTOCOL RX_SPI_A7105_FLYSKY_2A
#endif
#define DEFAULT_FEATURES        (FEATURE_TELEMETRY | FEATURE_OSD)
#elif defined(CRAZYBEEF3DX)
#define SERIALRX_PROVIDER       SERIALRX_SPEKTRUM2048
#define DEFAULT_FEATURES        (FEATURE_OSD)
#else
#if defined(USE_RX_SPI)
#define RX_SPI_DEFAULT_PROTOCOL RX_SPI_FRSKY_D
#endif
#define DEFAULT_FEATURES        (FEATURE_TELEMETRY | FEATURE_OSD)
#endif

#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI1
#define MAX7456_SPI_CS_PIN      PB1

#define USE_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define VBAT_ADC_PIN            PA0
#define CURRENT_METER_ADC_PIN   PA1
#define ADC_INSTANCE            ADC1
#define CURRENT_METER_SCALE_DEFAULT 2350

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         (BIT(13)|BIT(14)|BIT(15))
#define TARGET_IO_PORTF         (BIT(0)|BIT(1)|BIT(4))
#define USABLE_TIMER_CHANNEL_COUNT 6
#define USED_TIMERS             (TIM_N(2) |TIM_N(3) |TIM_N(4) | TIM_N(8))
