#include "NTC.h"

#include <Arduino.h>
#include <math.h>

#include "M5Stack.h"
#undef NTC

NTC::NTC() {
}

int NTC::readTemperature() {
	// 常温下热敏电阻的阻值
	const float nominalResistance = 10000;
	// 常温（25°C）下的温度
	const float nominalTemperature = 25.0;
	// 热敏电阻的B值
	const float bCoefficient = 3950;
	// 串联电阻值
	const float seriesResistor = 10000;
	// ADC最大值
	const int adcMaxValue = 4095;
	// Arduino的参考电压
	const float referenceVoltage = 3.3;
	// 读取热敏电阻的ADC值
	int adcValue = analogRead(39);
	// 计算热敏电阻的电压
	float voltage = (adcValue / (float)adcMaxValue) * referenceVoltage;
	// 计算热敏电阻的阻值
	float resistance = (seriesResistor * (referenceVoltage / voltage - 1.0));
	// 计算温度（使用Steinhart-Hart方程）
  	float steinhart;
  	steinhart = resistance / nominalResistance;              // (R/Ro)
  	steinhart = log(steinhart);                              // ln(R/Ro)
  	steinhart /= bCoefficient;                               // 1/B * ln(R/Ro)
  	steinhart += 1.0 / (nominalTemperature + 273.15);        // + (1/To)
  	steinhart = 1.0 / steinhart;                             // Invert
  	steinhart -= 273.15;                                     // convert to Celsius

	return (steinhart);
}