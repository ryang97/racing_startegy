#include "threestop.h"
#include <iostream>
#include "time.h"
using namespace std;

threeStop::threeStop(int lap, float soft_time, float med_time, float hard_time, float pitTime, float fuelConsumption, int firstStop, int secondStop, int thirdStop):
      Race{lap, soft_time, med_time, hard_time, pitTime, fuelConsumption}, firstStop{firstStop}, secondStop{secondStop}, thirdStop{thirdStop} {}

threeStop::~threeStop(){}

float threeStop::shortestTime() {
  char char_arr[3] = {'S', 'M', 'H'};
  int finalFirstStop = 2;
  int finalSecondStop = 4;
  int finalThirdStop = 6;
  float totalTime = 36000;
  char finalFirstTyre = ' ';
  char finalSecondTyre = ' ';
  char finalThirdTyre = ' ';
  char finalFourthTyre = ' '; 
  for (int i=2; i < (lap-1); ++i) {
    firstStop = i;
    for (int j = i; j < (lap - 1); ++j) {
      secondStop = j;
      for (int k = j; k < (lap - 1); ++k) {
        thirdStop = k;
        for (int a = 0; a < 3; ++a) {
          char firstTyre = char_arr[a];
          for (int b = 0; b < 3; ++b) {
            char secondTyre = char_arr[b];
            for (int c = 0; c < 3; ++c) {
              char thirdTyre = char_arr[c];
              for (int d = 0; d < 3; ++d) {
                char fourthTyre = char_arr[d];
                Time t1{1, firstStop, firstTyre, fuelConsumption, soft_time, med_time, hard_time};
                Time t2{firstStop+1, secondStop, secondTyre, fuelConsumption, soft_time, med_time, hard_time};
                Time t3{secondStop+1, thirdStop, thirdTyre, fuelConsumption, soft_time, med_time, hard_time}; 
                Time t4{thirdStop+1, lap, fourthTyre, fuelConsumption, soft_time, med_time, hard_time};   
                if (((firstTyre != secondTyre) or (firstTyre != thirdTyre) or (firstTyre != fourthTyre) or (secondTyre != thirdTyre) 
                    or (secondTyre != fourthTyre) or (thirdTyre != fourthTyre)) and 
                   (totalTime > t1.stintTime() + t2.stintTime() + t3.stintTime() + t4.stintTime() + (pitTime * 3))) {
                    totalTime = t1.stintTime() + t2.stintTime() + t3.stintTime() + t4.stintTime() + (pitTime * 3);
//                  cout << totalTime << endl;
                  finalFirstTyre = firstTyre;
                  finalSecondTyre = secondTyre;
                  finalThirdTyre = thirdTyre;
                  finalFourthTyre = fourthTyre;
                  finalFirstStop = firstStop;
                  finalSecondStop = secondStop;
                  finalThirdStop = thirdStop;
                }
              }
            }
          }
        }
  //      cout<<endl;
      }
    }
  }
  cout<<"the first stop should happen in lap "<<finalFirstStop<<endl;
  cout<<"the second stop should happen in lap "<<finalSecondStop<<endl;
  cout<<"the third stop should happen in lap "<<finalThirdStop<<endl;
  cout<<"the first tyre is: "<<finalFirstTyre
      <<" and the second tyre is: "<<finalSecondTyre
      <<" and the third tyre is "<<finalThirdTyre
      <<" and the fourth tyre is "<<finalFourthTyre<<endl; 
  return totalTime;
}
 
      
