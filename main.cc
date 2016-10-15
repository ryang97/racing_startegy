#include <iostream>
#include "time.h"
using namespace std;


int main () {

  for(int i=2; i<50; ++i) {

    Time ti{0, 0, ' ', 0, 97.3, 98.0, 98.6};
    Time tti{0, 0, ' ', 0, 97.3, 98.0, 98.6};
    Time ttti{0, 0, ' ', 0, 97.3, 98.0, 98.6};

    ti.setLap(1, i);
    tti.setLap(1, i);
    ttti.setLap(1, i);

    ti.setTyre('S');
    tti.setTyre('M');
    ttti.setTyre('H');

    ti.setFuel(1.83);
    tti.setFuel(1.83);
    ttti.setFuel(1.83);


    float total = ti.stintTime();
    int min = total / 60;
    float sec = total - (min * 60);
    cout<<"stint time ( soft ) ("<<i<<") is:  "<<min<<": "<<sec<<endl;

    total = tti.stintTime();
    min = total / 60;
    sec = total - (min * 60);
    cout<<"stint time (medium) ("<<i<<") is:  "<<min<<": "<<sec<<endl;
 

    total = ttti.stintTime();
    min = total / 60;
    sec = total - (min * 60);
    cout<<"stint time ( hard ) ("<<i<<") is:  "<<min<<": "<<sec<<endl<<endl<<endl;
     
  }

/*
  Time t{1, 30, 'S', 2, 97.3, 98.0, 98.6};
  Time tt{1, 30, 'M', 2, 97.3, 98.0, 98.6};
  Time ttt{1, 30, 'H', 2, 97.3, 98.0, 98.6};

  float total = t.stintTime();
  int min = total / 60;
  float sec = total - (min * 60);
  cout<<"stint time (soft) (30) is:"<<min<<"."<<sec<<endl;


  total = tt.stintTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"stint time (medium) (30) is:"<<min<<"."<<sec<<endl;
 

  total = ttt.stintTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"stint time (hard) (30) is:"<<min<<"."<<sec<<endl;
 
  Time t2{1, 20, 'S', 2, 97.3, 98.0, 98.6};
  Time tt2{1, 20, 'M', 2, 97.3, 98.0, 98.6};
  Time ttt2{1, 20, 'H', 2, 97.3, 98.0, 98.6};

  total = t2.stintTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"stint time (soft) (2) is:"<<min<<"."<<sec<<endl;


  total = tt2.stintTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"stint time (medium) (2) is:"<<min<<"."<<sec<<endl;
 

  total = ttt2.stintTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"stint time (hard) (2) is:"<<min<<"."<<sec<<endl;
  
  Time t1{1, 10, 'S', 2, 97.3, 98.0, 98.6};
  Time tt1{1, 10, 'M', 2, 97.3, 98.0, 98.6};
  Time ttt1{1, 10, 'H', 2, 97.3, 98.0, 98.6};

  total = t1.stintTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"stint time (soft) (10) is:"<<min<<"."<<sec<<endl;


  total = tt1.stintTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"stint time (medium) (10) is:"<<min<<"."<<sec<<endl;
 

  total = ttt1.stintTime();
  min = total / 60;
  sec = total - (min * 60);
  cout<<"stint time (hard) (10) is:"<<min<<"."<<sec<<endl;
 */
  return 1;
} 
