#include "time.h"
#include <iostream>
using namespace std;

Time::Time(int startLap, int endLap, char tyre, float fuelConsumption, float softTime,
       float medTime, float hardTime):startLap{startLap}, endLap{endLap}, tyre{tyre},
       fuelConsumption{fuelConsumption}, softTime{softTime}, medTime{medTime},
       hardTime{hardTime} {}

Time::~Time(){}


float Time::softLapTime(int age) { 
  return age * 0.22;
}

float Time::medLapTime(int age) { 
  return age * 0.13;
}

float Time::hardLapTime(int age) { 
  return age * 0.05;
}

float Time::stintTime() {
  float totalTime = 0;
  int lap = endLap - startLap;
  for ( int i = 0; i < lap ; ++i ) {
    if ((tyre == 'S') or (tyre == 's')) {
      totalTime = totalTime + softTime + softLapTime(i) - fuelConsumption * (startLap - 1 + i) * 0.03; // every 10 kg fuel saves 0.3 // second per lap
    }
    else if ((tyre == 'M') or (tyre == 'm')) {
      totalTime = totalTime + medTime + medLapTime(i)
                  - fuelConsumption * (startLap - 1 + i) * 0.03;  
    }                                                        
    else if ((tyre == 'H') or (tyre == 'h')) {
      totalTime = totalTime + hardTime + hardLapTime(i)
                  - fuelConsumption * (startLap - 1 + i) * 0.03;
    }
  }
  
  return totalTime;
}                                                           

void Time::setLap(int startLap, int endLap) {
  this->startLap = startLap;
  this->endLap = endLap;
} 
    
