#include "Line.h"
#include <iostream>
#include <math.h> 

using namespace std;

Line::Line() {
  
}

Line::Line(Point p1, Point p2) {
    start = p1;
    end = p2;
}

double Line::Linelength(){
 return start.calcDistance(end);
  
}

void Line::print(){
  cout <<" Start point: ";
  start.print();
  cout << endl;
   cout <<" End point: ";
  end.print();
  
  cout << endl;
  
}