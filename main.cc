#include <iostream>
#include "time.h"
#include "onestop.h"
#include "twostop.h"
#include "threestop.h"
//#include "fourstop.h"
#include "race.h"
using namespace std;


int main () {

  oneStop os{54, 102.3, 103.0, 103.6, 20.7, 1.83, 2};
  twoStop ts{54, 102.3, 103.0, 103.6, 20.7, 1.83, 2, 4};  
  threeStop trs{54,103.3,103.0,103.6, 20.7, 1.83, 2, 4, 6};
//  fourStop fs{54,97.3, 98.0, 98.6, 20.7, 1.83, 2, 4, 6, 8};
  float total = os.shortestTime();
  int min = total / 60;
  float sec = total - (min * 60);
  cout<<"shortest time for one stop is: "<<min<<": "<<sec<<endl<<endl;

  total = ts.shortestTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"shortest time for two stops is: "<<min<<": "<<sec<<endl<<endl;


  total = trs.shortestTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"shortest time for three stops is: "<<min<<": "<<sec<<endl<<endl;
/*
  total = fs.shortestTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"shortest time for four stops is: "<<min<<": "<<sec<<endl;
*/

/*

  Time t1{1, 13, 'S', 1.83, 97.3, 98.0, 98.6};
  Time t2{14, 26, 'S', 1.83, 97.3, 98.0, 98.6};
  Time t3{27, 39, 'S', 1.83, 97.3, 98.0, 98.6};
  Time t4{40, 54, 'H', 1.83, 97.3, 98.0, 98.6};
  float totalTime = t1.stintTime() + t2.stintTime() + t3.stintTime() + t4.stintTime() + (18.7 * 3);
  

  min = totalTime / 60;
  sec = totalTime - (min * 60);
  cout<<"shortest time for three stops is: "<<min<<": "<<sec<<endl;
*/
  return 1;
} 
