#include "Line.h"
#include <iostream>
using namespace std;


int main() {
  Point x(1.2, 12);
  Point y (2.3,15);
  Line segment (x,y);
  segment.print();
  cout << " Length of this line is: " << segment.Linelength();
  cout << endl;
  
    return 0;
}
