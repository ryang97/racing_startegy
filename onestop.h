#ifndef _ONESTOP_H_
#define _ONESTOP_H_
#include "race.h"

class oneStop: public Race {
  int firstStop;
 public:
  oneStop(int lap, float soft_time, float med_time, float hard_time, float pitTime, float fuelConsumption, int firstStop);
  ~oneStop();
  float shortestTime() override;
};

#endif
