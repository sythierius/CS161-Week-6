/*****************************************
 * Author: Charles Bennett
 * Date: 2/11/15
 * Description: This class shows the stock of 3 parts in a production line, and can produce items from those parts and prints how many parts are needed to achieve the desired stock for each part. 
 * **************************************/
#ifndef SUPPLIES_HPP
#define SUPPLIES_HPP

#include <iostream>

using namespace std;

// Define structure of Supplies class
class Supplies
{
private:
  int thingamajigs,
      watchamacallits,
      framistats;
public:
  Supplies(int,int,int);
  Supplies();
  void setNumThingamajigs(int);
  void setNumWatchamacallits(int);
  void setNumFramistats(int);
  void printPartsOrder();
  void produceThing1(int);
  void produceThing2(int);
};
#endif
