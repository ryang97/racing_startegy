#include <iostream>
#include "time.h"
#include "onestop.h"
#include "twostop.h"
#include "threestop.h"
#include "race.h"
using namespace std;


int main () {
  oneStop os{54, 97.3, 98.0, 98.6, 18.7, 1.83, 2};
  twoStop ts{54, 97.3, 98.0, 98.6, 18.7, 1.83, 2, 4};  
  threeStop trs{54,97.3,98.0,98.6, 18.7, 1.83, 2, 4, 6};
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
  cout<<"shortest time for three stops is: "<<min<<": "<<sec<<endl;

  return 1;
} 
