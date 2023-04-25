
  #include <iostream>
#include <string>
#include <vector>
#include "citizen.h"
using namespace std;

class citation {
double fine;
int BN;
string charge, courtdate, officername, name = " ";
//list of offenses
//from cop perspective
public:
citation(double fine, string courtdate, string charge, string officername){
  this->fine = fine;
  this->courtdate=courtdate;
  this->charge=charge;
  this->officername = officername; 
}

/*citation(double fine, string courtdate, string charge, string officername, string name){
  this->fine = fine;
  this->courtdate=courtdate;
  this->charge=charge;
  this->officername = officername;
  this-> name = name;
} 
citation(double fine, string courtdate, string charge, string officername, string name,  int BN){
  this->fine = fine;
  this->courtdate=courtdate;
  this->charge=charge;
  this->officername = officername;
  this-> name = name;

  this->BN = BN;
}*/
void display(){

cout << fixed << setprecision(0);
cout  << fixed <<setw(10) << " ___________________________ " << endl;
cout << "| "<<setw(10) << "Officers Name:"<<setw(10)<<officername<<" |" << endl << "| "<< "Charge:        "<<setw(10)<< charge << " |" << endl << "| "<<"Fine:      "<<"          $"<< setw(3) << fine<<" |" << endl << "| Court Date:     "<<setw(10) << courtdate<< "" << " |" << endl << "| Sign Here:                |" << endl << "|   _____________________   |" << endl << "|___________________________|" << endl; 
}
void xcitation(citation a){
 fine = a.fine;
  charge = a.charge;

}
void replace(citation a){
  fine = a.fine;
  charge = a.charge;
  courtdate = a.courtdate;
  officername = a.officername;
  name = a.name;
  BN = a.BN;
}
};