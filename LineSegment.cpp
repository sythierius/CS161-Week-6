/**************************
 * Author: Charles Bennett
 * Date: 2/12/15
 * Description: This program defines the linesegment class and creates a linesegment object, then uses methods from the class to determine and print the slope and length of the line.
*************************/
#include "Point.hpp"
#include <cmath> // For isinf
#include <iostream>
#include "LineSegment.hpp"

using namespace std;

// Default constructor 
LineSegment::LineSegment()
{
  Point a;
  Point b;
  setEnd1(a);
  setEnd2(b);
}

// Overloaded constructor
LineSegment::LineSegment(Point a, Point b)
{
  setEnd1(a);
  setEnd2(b);
}

// LineSegment::setEnd1
void LineSegment::setEnd1(Point a)
{
  p1=a;
}

// LineSegment::getEnd1
Point LineSegment::getEnd1()
{
  return p1;
}

// LineSegment::setEnd2 
void LineSegment::setEnd2(Point b)
{
  p2=b;
}

// LineSegment::getEnd2
Point LineSegment::getEnd2()
{
  return p2;
}

/***********************************
 *      LineSegment::length        *
 *Description: Returns the length  *
   of a LineSegment object by      * 
   calling the point method        *
   "distanceTo"                    *
  Parameters: none                 *
***********************************/       
double LineSegment::length()
{
  double len=p1.distanceTo(p2);
  return len;
}

/***********************************
 *      LineSegment::slope         *
 * Description: Calculates and     *
 * returns the slope of a line     *
 * Parameters: none                *
 * ********************************/     
double LineSegment::slope()
{
  // Get each of the coordiantes for each point
  double x1=p1.getXCoord(),
         x2=p2.getXCoord(),
         y1=p1.getYCoord(),
         y2=p2.getYCoord(),
         m;
  // Calculate slope with the points
  m=((y2-y1)/(x2-x1));
  return m;
}
  
// **********MAIN***********
int main()
{
  // Declare variables
  double x1input,
         x2input,
         y1input,
         y2input;
 
  // Prompt for input and collect the coordiantes of each point 
  cout << "Please input the x coordinate of the first point." << endl;
  cin >> x1input;
  cout << "Please input the y coordinate of the first point." << endl;
  cin >> y1input;
  cout << "Please input the x coordinate of the second point." << endl;
  cin >> x2input;
  cout << "Please input the y coordinate of the second point." << endl;
  cin >> y2input;

  // Create the point objects, then use the point objects to create the LineSegment object
  Point start(x1input,y1input);
  Point end(x2input,y2input);
  LineSegment line(start,end);
  
  // Output the points created
  cout << endl;
  cout << "A line has been created from (" << x1input << ", " << y1input;
  cout << ") to (" << x2input << ", " << y2input << ")." << endl;
  // Display length of the line
  cout << "Length of the line: " << line.length() << endl;
  if (!isinf(line.slope())) // If slope is not infinity
    cout << "Slope of the line: " << line.slope() << endl;
  else // if slope is infinity
    cout << "Slope of the line: Vertical" << endl;

  return 0;
}  
