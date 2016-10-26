#include "onestop.h"
#include <iostream>
#include "time.h"
using namespace std;

oneStop::oneStop(int lap, float soft_time, float med_time, float hard_time, float pitTime, float fuelConsumption, int firstStop):
      Race{lap, soft_time, med_time, hard_time, pitTime, fuelConsumption}, firstStop{firstStop} {}

oneStop::~oneStop(){}

float oneStop::shortestTime() {
  char char_arr[3] = {'S', 'M', 'H'};
  int finalFirstStop = 2;
  float totalTime = 36000;
  char finalFirstTyre = ' ';
  char finalSecondTyre = ' ';
  for (int i=2; i < (lap-1); ++i) {
    firstStop = i;
    for (int a = 0; a < 3; ++a) {
      char firstTyre = char_arr[a];
      for (int b = 0; b < 3; ++b) {
        char secondTyre = char_arr[b];
        Time t1{1, firstStop, firstTyre, fuelConsumption, soft_time, med_time, hard_time};
        Time t2{firstStop, lap, secondTyre, fuelConsumption, soft_time, med_time, hard_time};
        if ((firstTyre != secondTyre) and 
            (totalTime > t1.stintTime() + t2.stintTime() + pitTime)) {
          totalTime = t1.stintTime() + t2.stintTime() + pitTime;
          finalFirstTyre = firstTyre;
          finalSecondTyre = secondTyre;
          finalFirstStop = firstStop;
        }
      }
    }
  }
  cout<<"the first stop should happen in lap "<<finalFirstStop<<endl;
  cout<<"the first tyre is: "<<finalFirstTyre
      <<" and the second tyre is: "<<finalSecondTyre<<endl;
  return totalTime;
}
 
      
