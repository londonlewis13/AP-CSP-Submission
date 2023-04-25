#include <iostream>
#include <string>
#include <vector>
#include<iomanip>
#include <cmath>
#include "basics.h"
time_t t;
using namespace std;

int runaway(){
  srand((unsigned) time(&t));
  int x;
  x=rand()%100+75;
  if(x<108){return 1;}else if(x>142){return 0;} else{return 2;}
  return 0;
  }

