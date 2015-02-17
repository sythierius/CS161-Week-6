/*********************************
 * Author: Charles Bennett
 * Date: 2/12/15
 * Description: The linesegment class uses point objects to create a line, then contains methods for finding the length of the line and the slope of the line.
 * ******************************/
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include <cmath>
#include "Point.hpp"
using namespace std;

class LineSegment
{
  private:
    Point p1,
          p2;
  public:
    LineSegment();
    LineSegment(Point,Point);
    void setEnd1(Point);
    Point getEnd1();
    void setEnd2(Point);
    Point getEnd2();
    double length();
    double slope();
};
#endif
