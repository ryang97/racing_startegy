#ifndef _RACE_H_
#define _RACE_H_

#include "time.h"
 
class Race {
  int lap;
  float soft_time;
  float med_time;
  float hard_time;
  float pitTime;
  float raceTime;
  Time::Time t;
 public:
  Race(int lap, float soft_time, float med_time, float hard_time, float pitTime);
  ~Race();
  virtual float shortestTime () = 0;
};

#endif
