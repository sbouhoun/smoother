#include "smooth.h"

smoother::smoother(int arraylength)
{
  numReadings = arraylength;
  lastRead = 0;
  for(int i=0; i<128; i++)
  data[i] = 0;
  total = 0;
  average = 0;
}

int smoother::compute(int measure)
{
  total -= data[lastRead];
  data[lastRead] = measure;
  total += data[lastRead];
  lastRead++;
  if(lastRead >= numReadings)
  lastRead = 0;

  average = total / numReadings;

  return average;
  
}
