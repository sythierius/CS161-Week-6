/**********************************
 * Author: Charles Bennett
 * Date: 2/12/15
 * Description: The Point class is used to create point objects with an x and y coordinate (double values) and contains a method distanceTo which finds the distance from one point to another
 * *******************************/
#ifndef POINT_HPP
#define POINT_HPP

#include <cmath>
using namespace std;

class Point
{
  private:
    double x,
           y;
  public:
    Point();
    Point(double,double);
    void setXCoord(double);
    double getXCoord() const;
    void setYCoord(double);
    double getYCoord() const;
    double distanceTo(const Point&);
};
#endif
