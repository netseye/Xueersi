#ifndef __NTC_H__
#define __NTC_H__

#include <Arduino.h>

class NTC {
   public:
    NTC();
    int Init(void);
    int readTemperature();
};

#endif
