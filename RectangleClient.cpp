#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
Point x(1.2, 12);
  Point y (2.3,15);
  Point z (1.2, 12);
  Point p (2.3,15);

Line segment (x,y);
Line segment2 (z,p);

  Rectangle box (segment, segment2);
  box.print();

  cout << "The area of this rectangle is: " <<box.calcArea();
  
    return 0;
}
