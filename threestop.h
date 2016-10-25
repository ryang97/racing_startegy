#ifndef _THREESTOP_H_
#define _THREESTOP_H_
#include "race.h"

class threeStop: public Race {
  int firstStop;
  int secondStop;
  int thirdStop;
 public:
  threeStop(int lap, float soft_time, float med_time, float hard_time, float pitTime, float fuelConsumption, int firstStop, int secondStop, int thirdStop);
  ~threeStop();
  float shortestTime() override;
};

#endif
