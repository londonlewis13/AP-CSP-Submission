#include <iostream>
#include <string>
#include <vector>
#include<iomanip>
#include <cmath>
using namespace std;

void centeroutput(string thing, int spaces){
  int l = thing.size();
  int freespaces = spaces-l;
  int left = freespaces/2;
  for(int i=0; i<left; i++){
    cout << " ";
  }
  cout << thing;
  for(int i=0; i<freespaces-left; i++){
    cout << " ";
  }

  
}