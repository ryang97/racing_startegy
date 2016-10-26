#include "fourstop.h"
#include <iostream>
#include "time.h"
using namespace std;

fourStop::fourStop(int lap, float soft_time, float med_time, float hard_time, float pitTime, float fuelConsumption, int firstStop, int secondStop, int thirdStop, int fourthStop):
      Race{lap, soft_time, med_time, hard_time, pitTime, fuelConsumption}, firstStop{firstStop}, secondStop{secondStop}, thirdStop{thirdStop}, fourthStop{fourthStop} {}

fourStop::~fourStop(){}

float fourStop::shortestTime() {
  char char_arr[3] = {'S', 'M', 'H'};
  int finalFirstStop = 2;
  int finalSecondStop = 4;
  int finalThirdStop = 6;
  int finalFourthStop = 8;
  float totalTime = 36000;
  char finalFirstTyre = ' ';
  char finalSecondTyre = ' ';
  char finalThirdTyre = ' ';
  char finalFourthTyre = ' ';
  char finalFifthTyre = ' '; 
  for (int i=2; i < (lap-1); ++i) {
    firstStop = i;
    for (int j = i; j < (lap - 1); ++j) {
      secondStop = j;
      for (int k = j; k < (lap - 1); ++k) {
        thirdStop = k;
        for (int q = k; q < (lap - 1); ++q) {
          fourthStop = q;
          for (int a = 0; a < 3; ++a) {
            char firstTyre = char_arr[a];
            for (int b = 0; b < 3; ++b) {
              char secondTyre = char_arr[b];
              for (int c = 0; c < 3; ++c) {
                char thirdTyre = char_arr[c];
                for (int d = 0; d < 3; ++d) {
                  char fourthTyre = char_arr[d];
                  for (int e = 0; e < 3; ++e) {
                    char fifthTyre = char_arr[e];
                    Time t1{1, firstStop, firstTyre, fuelConsumption, soft_time, med_time, hard_time};
                    Time t2{firstStop, secondStop, secondTyre, fuelConsumption, soft_time, med_time, hard_time};
                    Time t3{secondStop, thirdStop, thirdTyre, fuelConsumption, soft_time, med_time, hard_time}; 
                    Time t4{thirdStop, fourthStop, fourthTyre, fuelConsumption, soft_time, med_time, hard_time};   
                    Time t5{fourthStop, lap, fifthTyre, fuelConsumption, soft_time, med_time, hard_time};
                    if (((firstTyre != secondTyre) or (firstTyre != thirdTyre) or (firstTyre != fourthTyre) or (firstTyre != fifthTyre) or 
                         (secondTyre != thirdTyre) or (secondTyre != fourthTyre) or (secondTyre != fifthTyre) or 
                         (thirdTyre != fourthTyre) or (thirdTyre != fifthTyre) or
                         (fourthTyre != fifthTyre)) and 
                        (totalTime > t1.stintTime() + t2.stintTime() + t3.stintTime() + t4.stintTime() + t5.stintTime() + (pitTime * 4))) {
                      totalTime = t1.stintTime() + t2.stintTime() + t3.stintTime() + t4.stintTime() + t5.stintTime() + (pitTime * 4);
                      finalFirstTyre = firstTyre;
                      finalSecondTyre = secondTyre;
                      finalThirdTyre = thirdTyre;
                      finalFourthTyre = fourthTyre;
                      finalFifthTyre = fifthTyre;
                      finalFirstStop = firstStop;
                      finalSecondStop = secondStop;
                      finalThirdStop = thirdStop;
                      finalFourthStop = fourthStop;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cout<<"the first stop should happen in lap "<<finalFirstStop<<endl;
  cout<<"the second stop should happen in lap "<<finalSecondStop<<endl;
  cout<<"the third stop should happen in lap "<<finalThirdStop<<endl;
  cout<<"the fourth stop should happen in lap "<<finalFourthStop<<endl;
  cout<<"the first tyre is: "<<finalFirstTyre
      <<" and the second tyre is: "<<finalSecondTyre
      <<" and the third tyre is "<<finalThirdTyre
      <<" and the fourth tyre is "<<finalFourthTyre
      <<" and the fifth tyre is "<<finalFifthTyre<<endl; 
  return totalTime;
}
 
      
