#ifndef SMOOTH_H
#define SMOOTH_H

#include "Arduino.h"


class smoother {
  private:
  int data[16];
  int total = 0;
  int average = 0;
  int lastRead = 0;

  public:
  smoother(int arraylength = 8);
  int compute(int measure);
  int numReadings;
  
};
#endif
