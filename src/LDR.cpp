#include "LDR.h"

#include <Arduino.h>
#include <math.h>

#include "M5Stack.h"
#undef LDR

LDR::LDR() {
}
void LDR::readLdr(int *ldrValue, float *voltage) {
  *ldrValue = analogRead(36); // 读取LDR的模拟值
  *voltage = *ldrValue * (5.0 / 1023.0); // 转换为电压                       
}