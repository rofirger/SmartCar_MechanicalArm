/*
 * Config.h
 *       Brief: ��е����������Ŷ���
 *  Created on: 2022��5��15��
 *      Author: ���
 */

#ifndef CONFIG_H_
#define CONFIG_H_

// TFT ��������Ŷ���
#define TFT_SCL                  B13                                      // SPI CLK
#define TFT_SDA                  B15                                      // SPI MOSI
#define TFT_RES                  D10                                      // Һ����λ���Ŷ���
#define TFT_DC                   D8                                       // Һ������λ���Ŷ���
#define TFT_CS                   B12                                      // CS Ƭѡ����
#define TFT_BL                   D12                                      // Һ���������Ŷ���

// CAN ������Ŷ���
#define CAN1_TX                  A12
#define CAN1_RX                  A11
#define CAN2_TX                  B13
#define CAN2_RX                  B12

// ����128K flash ������Ŷ���
#define FLASH_SPI_PRESCALER              SPI_BaudRatePrescaler_8
#define FLASH_SPI                        SPI1
#define FLASH_SPI_GPIO                   GPIOA
#define FLASH_SPI_CS                     GPIO_Pin_4
#define FLASH_SPI_CS_GPIO                GPIOA
#define FLASH_SPI_SCK                    GPIO_Pin_5
#define FLASH_SPI_MISO                   GPIO_Pin_6
#define FLASH_SPI_MOSI                   GPIO_Pin_7

// BLINK ָʾ�����Ŷ���
#define LED_INDICATOR            A10

// ����������Ŷ���
#define BUTTON1                  A2
#define BUTTON2                  A3

// 5KEY ������Ŷ���
#define KEY_UP                   E1
#define KEY_DOWN                 E2
#define KEY_MID                  D13
#define KEY_LEFT                 D6
#define KEY_RIGHT                E3

// ���������Ŷ���
#define BEEP                     E15

// USB ������Ŷ���
#define DN1                      A11
#define DP1                      A12
#define DN2                      B6
#define DP2                      B7

// ETH ������Ŷ���
#define TXN                      C9
#define TXP                      C8
#define RXN                      C7
#define RXP                      C6
#define EGREEN_LED               E11
#define EYELLOW_LED              E12

// CH9141-BLE ������Ŷ���
#define BLE_SLEEP                C13
#define BLE_RST
#define BLE_RX                   C2
#define BLE_TX                   C3
#define BLE_AT                   A7

// MyESP32 ������Ŷ���
#define MYESP_RX                 B10
#define MYESP_TX                 B11
#define MYESP_SCLK               B3
#define MYESP_MOSI               B5
#define MYESP_MISO               B4
#define MYESP_CS                 D7

#endif /* CONFIG_H_ */