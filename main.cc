#include <iostream>
#include "time.h"
#include "onestop.h"
using namespace std;


int main () {
  oneStop os{54, 97.3, 98.0, 98.6, 18.7, 1.83, 2};
  float total = os.shortestTime();
  int min = total / 60;
  float sec = total - (min * 60);
  cout<<"shortest time for one stop is: "<<min<<": "<<sec<<endl;
  return 1;
} 
