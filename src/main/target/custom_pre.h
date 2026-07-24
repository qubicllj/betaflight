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

// Custom config for STM32F3, only crsf protocol, no gps, no sdcard
#ifdef F3_CUSTOM1

// #undef USE_D_MIN
// #undef USE_SIMPLIFIED_TUNING

// #undef USE_RX_RSSI_DBM
// #undef USE_RX_RSNR
// #undef USE_RX_LINK_QUALITY_INFO
// #undef USE_RX_LINK_UPLINK_POWER
#undef USE_CRSF_CMS_TELEMETRY
// #undef USE_CRSF_LINK_STATISTICS

#undef USE_SERIALRX_GHST
#undef USE_SERIALRX_IBUS
#undef USE_SERIALRX_SBUS
#undef USE_SERIALRX_SPEKTRUM
#undef USE_SERIALRX_FPORT
#undef USE_SERIALRX_XBUS
#undef USE_SERIALRX_SRXL2

#undef USE_TELEMETRY_FRSKY_HUB
#undef USE_TELEMETRY_SMARTPORT
#undef USE_TELEMETRY_GHST
#undef USE_TELEMETRY_SRXL

#undef USE_RX_SPI
#undef USE_RX_CC2500
#undef USE_RX_EXPRESSLRS
#undef USE_RX_SX1280
#undef USE_RX_SX127X

#undef USE_RX_PPM
#undef USE_RX_PWM

// #undef USE_BRUSHED_ESC_AUTODETECT

#undef USE_RX_MSP
#undef USE_RX_MSP_OVERRIDE

#undef USE_CMS_FAILSAFE_MENU
#undef USE_EXTENDED_CMS_MENUS

// #undef USE_VTX_CONTROL
// #undef USE_VTX_SMARTAUDIO
// #undef USE_VTX_TRAMP
// #undef USE_VTX_MSP
// #undef USE_VTX_TABLE

// #undef USE_OSD_HD
// #undef USE_OSD_PROFILES

// #undef USE_SERIAL_4WAY_BLHELI_BOOTLOADER

#undef USE_MAG
#undef USE_BARO

#undef USE_ACC_MPU6500
#undef USE_GYRO_MPU6500
#undef USE_ACC_SPI_MPU6500
#undef USE_GYRO_SPI_MPU6500
#undef USE_ACC_SPI_ICM20689
#undef USE_GYRO_SPI_ICM20689
#undef USE_ACCGYRO_LSM6DSO
#undef USE_ACCGYRO_BMI270
#undef USE_GYRO_SPI_ICM42605
#undef USE_GYRO_SPI_ICM42688P
#undef USE_ACC_SPI_ICM42605
#undef USE_ACC_SPI_ICM42688P

#undef USE_FLASHFS

#undef USE_FLASH_TOOLS
#undef USE_FLASH_M25P16
#undef USE_FLASH_W25N01G
#undef USE_FLASH_W25M
#undef USE_FLASH_W25M512
#undef USE_FLASH_W25M02G
#undef USE_FLASH_W25Q128FV

#undef USE_ESC_SENSOR
#undef USE_ESC_SENSOR_INFO
#undef USE_ESC_SENSOR_TELEMETRY
#undef USE_SENSOR_NAMES

#undef USE_SDCARD

#undef USE_PINIO

#undef USE_SERVOS

#undef USE_BLACKBOX

#undef USE_SDCARD_SPI

#undef USE_PINIOBOX
#undef USE_PIN_PULL_UP_DOWN

#undef PID_PROFILE_COUNT
#define PID_PROFILE_COUNT 2
#undef CONTROL_RATE_PROFILE_COUNT
#define CONTROL_RATE_PROFILE_COUNT  2

#undef USE_VIRTUAL_CURRENT_METER
#undef USE_RCDEVICE

#undef USE_RTC_TIME

#undef USE_MULTI_GYRO
#undef USE_UNCOMMON_MIXERS
#undef USE_SIGNATURE
#undef USE_HOTT_TEXTMODE
#undef USE_TELEMETRY_SENSORS_DISABLED_DETAILS
#undef USE_PROFILE_NAMES
#undef USE_CUSTOM_BOX_NAMES
#undef USE_CRAFTNAME_MSGS

#undef USE_LAUNCH_CONTROL
#undef USE_OSD_STICK_OVERLAY
#endif

// Custom config for STM32F3, only crsf protocol, only tramp vtx, no vtx table, no external osd, only NMEA gps, no blheli 4way boot loader, no sdcard, no osd profiles, no rsnr and up link power for crsf
#ifdef F3_CUSTOM2

// #undef USE_D_MIN
// #undef USE_SIMPLIFIED_TUNING

// #undef USE_RX_RSSI_DBM
#undef USE_RX_RSNR
// #undef USE_RX_LINK_QUALITY_INFO
#undef USE_RX_LINK_UPLINK_POWER
#undef USE_CRSF_CMS_TELEMETRY
// #undef USE_CRSF_LINK_STATISTICS

#undef USE_SERIALRX_GHST
#undef USE_SERIALRX_IBUS
#undef USE_SERIALRX_SBUS
#undef USE_SERIALRX_SPEKTRUM
#undef USE_SERIALRX_FPORT
#undef USE_SERIALRX_XBUS
#undef USE_SERIALRX_SRXL2

#undef USE_TELEMETRY_FRSKY_HUB
#undef USE_TELEMETRY_SMARTPORT
#undef USE_TELEMETRY_GHST
#undef USE_TELEMETRY_SRXL

#undef USE_RX_SPI
#undef USE_RX_CC2500
#undef USE_RX_EXPRESSLRS
#undef USE_RX_SX1280
#undef USE_RX_SX127X

#undef USE_RX_PPM
#undef USE_RX_PWM

// #undef USE_BRUSHED_ESC_AUTODETECT

#undef USE_RX_MSP
#undef USE_RX_MSP_OVERRIDE

#undef USE_CMS_FAILSAFE_MENU
#undef USE_EXTENDED_CMS_MENUS

// #undef USE_VTX_CONTROL
#undef USE_VTX_SMARTAUDIO
// #undef USE_VTX_TRAMP
#undef USE_VTX_MSP
#undef USE_VTX_TABLE

#undef USE_OSD_HD
#undef USE_OSD_PROFILES

#undef USE_SERIAL_4WAY_BLHELI_BOOTLOADER

#undef USE_MAG
#undef USE_BARO

#undef USE_ACC_MPU6500
#undef USE_GYRO_MPU6500
#undef USE_ACC_SPI_MPU6500
#undef USE_GYRO_SPI_MPU6500
#undef USE_ACC_SPI_ICM20689
#undef USE_GYRO_SPI_ICM20689
#undef USE_ACCGYRO_LSM6DSO
#undef USE_ACCGYRO_BMI270
#undef USE_GYRO_SPI_ICM42605
#undef USE_GYRO_SPI_ICM42688P
#undef USE_ACC_SPI_ICM42605
#undef USE_ACC_SPI_ICM42688P

#undef USE_FLASHFS

#undef USE_FLASH_TOOLS
#undef USE_FLASH_M25P16
#undef USE_FLASH_W25N01G
#undef USE_FLASH_W25M
#undef USE_FLASH_W25M512
#undef USE_FLASH_W25M02G
#undef USE_FLASH_W25Q128FV

#undef USE_ESC_SENSOR
#undef USE_ESC_SENSOR_INFO
#undef USE_ESC_SENSOR_TELEMETRY
#undef USE_SENSOR_NAMES

#undef USE_SDCARD

#undef USE_PINIO

#undef USE_SERVOS

#undef USE_BLACKBOX

#undef USE_SDCARD_SPI

#undef USE_PINIOBOX
#undef USE_PIN_PULL_UP_DOWN

#undef PID_PROFILE_COUNT
#define PID_PROFILE_COUNT 2
#undef CONTROL_RATE_PROFILE_COUNT
#define CONTROL_RATE_PROFILE_COUNT  2

#undef USE_VIRTUAL_CURRENT_METER
#undef USE_RCDEVICE

#undef USE_RTC_TIME

#undef USE_MULTI_GYRO
#undef USE_UNCOMMON_MIXERS
#undef USE_SIGNATURE
#undef USE_HOTT_TEXTMODE
#undef USE_TELEMETRY_SENSORS_DISABLED_DETAILS
#undef USE_PROFILE_NAMES
#undef USE_CUSTOM_BOX_NAMES
#undef USE_CRAFTNAME_MSGS

#undef USE_LAUNCH_CONTROL
#undef USE_OSD_STICK_OVERLAY

#undef USE_MSP_DISPLAYPORT
#undef USE_OSD_OVER_MSP_DISPLAYPORT

// #undef USE_GPS_NMEA
#undef USE_GPS_UBLOX
// #undef USE_GPS_RESCUE
#undef USE_CMS_GPS_RESCUE_MENU
#endif
