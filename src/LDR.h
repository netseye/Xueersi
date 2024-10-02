#ifndef __LDR_H__
#define __LDR_H__

#include <Arduino.h>

class LDR {
   public:
    LDR();
    int Init(void);
    void readLdr(int *ldrValue, float *voltage);
};

#endif
