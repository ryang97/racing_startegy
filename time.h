#ifndef _TIME_H_
#define _TIME_H_


class Time {
  int startLap;
  int endLap;
  char tyre;
  float fuelConsumption;
  //int tyreAge;  
  float softTime;
  float medTime;
  float hardTime;
  float softLapTime(int age);
  float medLapTime(int age);
  float hardLapTime(int age);
 public:
  Time(int startLap, int endLap, char tyre, float fuelComsumption, float softTime,
       float medTime, float hardTime);
  ~Time();
  float stintTime();
  void setLap(int startLap, int endLap);
};
    
#endif
