/*************************************
 * Author: Charles Bennett
 * Date: 2/12/15
 * Description: This file defines the functions of the Point class, set and get functions and distanceTo method
 * **********************************/
#include "Point.hpp"
#include <cmath>
using namespace std;

// Default constructor
Point::Point()
{
  setXCoord(0);
  setYCoord(0);
}

// Overloaded constructor
Point::Point(double xcoord, double ycoord)
{
  setXCoord(xcoord);
  setYCoord(ycoord);
}

// Point::setXCoord
void Point::setXCoord(double xcoord)
{
  x=xcoord;
}

// Point::getXCoord
double Point::getXCoord() const
{
  return x;
}

// Point::setYCoord
void Point::setYCoord(double ycoord)
{
  y=ycoord;
}

// Point::getYCoord
double Point::getYCoord() const
{
  return y;
}

/****************************************
 *      Point::distanceTo               *
 * Description: This method finds the   *
 *  distance from one point to another  *
 *  by using the distance formula       *
 * Parameter: constant Point object     *
 * ************************************/
double Point::distanceTo(const Point &p)
{
  double tempx=p.getXCoord(),
         tempy=p.getYCoord(),
         distance;
  distance=sqrt(pow((tempx-x),2)+pow((tempy-y),2));
  return distance;
}


 
