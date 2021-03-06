#ifndef UTIL_H
#define UTIL_H
#include <TFT_eSPI.h>


// src: https://github.com/Xinyuan-LilyGO/LilyGO-T-Wristband/blob/master/LilyGO-T-Wristband.ino
#define TP_PIN_PIN 33
#define I2C_SDA_PIN 21
#define I2C_SCL_PIN 22
#define IMU_INT_PIN 38
#define RTC_INT_PIN 34
#define BATT_ADC_PIN 35
#define VBUS_PIN 36
#define TP_PWR_PIN 25
#define LED_PIN 4
#define CHARGE_PIN 32

void setMinCPUSpeed();
void setMaxCPUSpeed();

void setupWatch();
void initGPIOs();
void initRTC();
void initSensor();
void initScreen();

void disableRadios();
void deepSleep();

void clearScreen();
void drawDateRow();
void drawTime();
void drawInfoRow();
void drawCompass();

bool isCharging();
bool isButtonDown();

#endif