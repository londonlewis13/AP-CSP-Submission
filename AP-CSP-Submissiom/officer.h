#include <iostream>
#include <string>
#include <vector>
#include "citation.h"
using namespace std;


class officer{
string name;
vector<string> data;
bool insured;
int carSpeed, bribePrice = 80, badgeNumber;
string suspect;
vector<citation> list;
public:
officer(string name, int cs, int bp, int bn) {
this->name=name;
carSpeed = cs;
bribePrice = bp;
badgeNumber = bn;
}
void issuecitation(){
  cout << "Hi." << endl << "You're a Cop and you've just pulled over your first citizen!" << endl << "You caught them speeding, but you can aslo write a ticket for reckless driving, and driving unlicensed." << endl << "Enter your information to give them a citation. "<< endl;
}
void askname(){
  string a;
  int test = 0;
  while(test ==0){
    cout << endl << "Could I have your name, please?(less than 11 characters)" << endl;
    cin >> a;
    if(a.size()<11){test=1;}
    else{cout << endl << "Too many characters." << endl;}
  }
  suspect = a;
}
void askBadgeNumber(){
  string a;
  cout<<endl << "Your Badge number?" << endl;
  cin >> a;
}
void anothercitation(citation other){
  other.display();
  list.push_back(other);
}
void writeup(citation& tick){
  citation a = citation(100, "05/01/2023 ", "Speeding", "London");
  tick.replace(a);
  list.push_back(a); 
} 
void options(){
  officer London("London",23,23,23);
  citation du = citation(25, "05/01/2023", "Unlicensed Driving  ", "");
  citation rd = citation(400, "05/01/2023", "Reckless Driving  ", "");
  citation sp = citation(100, "05/01/2023", "Speeding" ,""); 
  cout << endl << "Your options are as follows (enter the corresponging number): " << endl << "   1. Issue Unlicensed Driving citation" << endl <<"   2. Let the driver off with a warning" << endl << "   3. Issue Reckless Driving citation" << endl;
  char a;
  cin >> a;
  if(a=='2'){cout<<endl << "I'll let you by this time, but be more careful please. Have a nice day!" << endl;
  }else { if (a =='1')
      London.anothercitation(du);
    else 
    London.anothercitation(rd);
}
}
};

