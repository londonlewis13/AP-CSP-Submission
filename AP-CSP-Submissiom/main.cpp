#include <iostream>
#include <string>
#include <vector>
#include "officer.h"
using namespace std;


int main(){
officer London("London",23,23,23);
int opt = 2;
cout << "Enter '2' to start" << endl;
cin >> opt;
  system("clear");
  citation speeding = citation(10, "10/10/10", "Speeding  ", "");

  London.issuecitation();
  London.askname();
  London.askBadgeNumber();
  London.writeup(speeding);
  speeding.display();
  London.options();
  London.options();
  //London.history();
  }



   