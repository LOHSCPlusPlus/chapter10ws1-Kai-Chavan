#include "Line.h"
class Rectangle{
    public:
    
    Rectangle();
    Rectangle(Line l1, Line l2);

void print();
double calcArea();

    private:
       Line l1;
      Line l2;

};