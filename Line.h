#include "Point.h"
class Line{
    public:
    
    Line();
    Line(Point S, Point e);

void print();
double Linelength();

    private:
       Point start;
      Point end;

};
