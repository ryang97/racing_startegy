#ifndef _RACE_H_
#define _RACE_H_

#include "time.h"

class Race {
 protected:
  int lap;
  float soft_time;
  float med_time;
  float hard_time;
  float pitTime;
  float fuelConsumption;
 public:
  Race(int lap, float soft_time, float med_time, float hard_time, float pitTime, float fuelConsumption);
  ~Race();
  virtual float shortestTime() = 0;
};

#endif
