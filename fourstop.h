#ifndef _FOURSTOP_H_
#define _FOURSTOP_H_
#include "race.h"

class fourStop: public Race {
  int firstStop;
  int secondStop;
  int thirdStop;
  int fourthStop;
 public:
  fourStop(int lap, float soft_time, float med_time, float hard_time, float pitTime, float fuelConsumption, int firstStop, int secondStop, int thirdStop, int fourthStop);
  ~fourStop();
  float shortestTime() override;
};

#endif
