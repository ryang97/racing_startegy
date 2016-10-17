#include "twostop.h"
#include <iostream>
#include "time.h"
using namespace std;

twoStop::twoStop(int lap, float soft_time, float med_time, float hard_time, float pitTime, float fuelConsumption, int firstStop, int secondStop):
      Race{lap, soft_time, med_time, hard_time, pitTime, fuelConsumption}, firstStop{firstStop}, secondStop{secondStop} {}

twoStop::~twoStop(){}

float twoStop::shortestTime() {
  char char_arr[3] = {'S', 'M', 'H'};
  int finalFirstStop = 2;
  int finalSecondStop = 4;
  float totalTime = 36000;
  char finalFirstTyre = ' ';
  char finalSecondTyre = ' ';
  char finalThirdTyre = ' ';
  for (int i=2; i < (lap-1); ++i) {
    firstStop = i;
    for (int j = i; j < (lap -1); ++j) {
      secondStop = j;
      for (int a = 0; a < 3; ++a) {
        char firstTyre = char_arr[a];
        for (int b = 0; b < 3; ++b) {
          char secondTyre = char_arr[b];
          for (int c = 0; c < 3; ++c) {
            char thirdTyre = char_arr[c];
            Time t1{1, firstStop, firstTyre, fuelConsumption, soft_time, med_time, hard_time};
            Time t2{firstStop+1, secondStop, secondTyre, fuelConsumption, soft_time, med_time, hard_time};
            Time t3{secondStop+1, lap, thirdTyre, fuelConsumption, soft_time, med_time, hard_time};    
            if (((firstTyre != secondTyre) or (secondTyre != thirdTyre) or (thirdTyre != firstTyre)) and 
                (totalTime > t1.stintTime() + t2.stintTime() + t3.stintTime() + (pitTime * 2))) {
              totalTime = t1.stintTime() + t2.stintTime() + t3.stintTime() + pitTime;
              finalFirstTyre = firstTyre;
              finalSecondTyre = secondTyre;
              finalThirdTyre = thirdTyre;
              finalFirstStop = firstStop;
              finalSecondStop = secondStop;
        }
      }
    }
  }
  cout<<"the first stop should happen in lap "<<finalFirstStop<<endl;
  cout<<"the second stop should happen in lap"<<finalSecondStop<<endl;
  cout<<"the first tyre is: "<<finalFirstTyre
      <<" and the second tyre is: "<<finalSecondTyre
      <<" and the third tyre is "<<finalThirdTyre<<endl; 
  return totalTime;
}
 
      
