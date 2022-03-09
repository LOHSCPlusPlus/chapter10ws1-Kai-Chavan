#include <iostream>
#include "Point.h"
using namespace std;


int main() {
    // First instance of Point, named a - starts at default 0.0, 0.0
    
    // Remove the comment below
    // a.x = b.x;
    // Why doesn't it work?


    // First instance of Point, named a - starts at default 0.0, 0.0
    Point b(4.5, 7.8);
Point a (9.2, 10.2);
  /*  cout << "Point a: x = " << a.getX() << ", y = " << a.getY() << endl;
    cout << "Point b: x = " << b.getX() << ", y = " << b.getY() << endl;
*/
 // a.print();
 // b.print();
    //a.setX(53);
    //a.setY(51);
    //cout << "Point a: x = " << a.getX() << ", y = " << a.getY() << endl;

   // cout << "Point a:";
  //a.print();
    //cout << "Point b:";
    //b.print(); 

    //Look! the equal operator still works!
   //  a = b;
    cout << "Point a:";
    a.print();

  
  //a.setPoints(33.9, 1072.8);
  cout << "distance is: ";
  cout << a.calcDistance(b);
   // cout << "Point a:";
   // a.print();

    return 0;
}


