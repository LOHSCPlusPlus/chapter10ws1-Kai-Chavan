#include "Rectangle.h"
#include <iostream>
#include <math.h> 

using namespace std;

Rectangle::Rectangle() {
  
}

Rectangle::Rectangle(Line h, Line l) {
    l1 = l;
  l2 = h;
}

double Rectangle ::calcArea(){
  return l1.Linelength()*l2.Linelength();
}


void Rectangle::print(){
  cout <<"size of length : ";
  cout << l1.Linelength();
  cout << endl;
  cout <<"size of height : ";
  cout << l2.Linelength();
cout << endl;
  
}