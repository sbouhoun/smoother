#ifndef SMOOTH_H
#define SMOOTH_H
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class smoother {
  private:
  int data[128];
  int total = 0;
  int average = 0;
  int lastRead = 0;

  public:
  smoother(int arraylength = 8);
  int compute(int measure);
  int numReadings;
  
};
#endif
