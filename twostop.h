#ifndef _TWOSTOP_H_
#define _TWOSTOP_H_
#include "race.h"

class twoStop: public Race {
  int firstStop;
  int secondStop;
 public:
  twoStop(int lap, float soft_time, float med_time, float hard_time, float pitTime, float fuelConsumption, int firstStop, int secondStop);
  ~twoStop();
  float shortestTime() override;
};

#endif
