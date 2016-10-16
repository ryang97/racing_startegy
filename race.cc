#include "race.h"

using namespace std;

Race::Race(int lap, float soft_time, float med_time, float hard_time, float pitTime): lap{lap}, soft_time{soft_time}, med_time{med_time}, hard_time{hard_time}, pitTime{pitTime}, t{0, 0, 'S', 0, soft_time, med_time, hard_time} {}

Race::~Race(){}


