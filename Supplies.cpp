/**************************************
 * Author: Charles Bennett
 * Date: 2/11/15
 * Description: This program utilizes the Supplies class to create things from parts, then displays how many parts must be ordered to reach the desirable amount of stock for each part.
 * ***********************************/
#include <iostream>
#include "Supplies.hpp"

using namespace std;

// Default constructor
Supplies::Supplies()
{
  setNumThingamajigs(100);
  setNumWatchamacallits(70);
  setNumFramistats(50);
}

// Overloaded constructor
Supplies::Supplies(int t, int w, int f)
{
  setNumThingamajigs(t);
  setNumWatchamacallits(w);
  setNumFramistats(f);
}

// Supplies::setNumThingamajigs
void Supplies::setNumThingamajigs(int t)
{
  thingamajigs=t;
}

// Supplies::setNumWatchamacallits
void Supplies::setNumWatchamacallits(int w)
{
  watchamacallits=w;
}

// Supplies::setNumFramistats 
void Supplies::setNumFramistats(int f)
{
  framistats=f;
}

/*******************************************
 *         Supplies::printPartsOrder       *
 *Description: Prints the number of parts  *
   that need to be ordered                 *
  Parameter: none                          *
*******************************************/
void Supplies::printPartsOrder()   
{
  cout << endl; 
  cout << "The following parts must be ordered:" << endl;

  // Check if thingamajigs are understocked
  if (thingamajigs<100)
    cout << (100-thingamajigs) << " thingamajigs to reach 100 stock." << endl;
  else
    cout << (thingamajigs-100) << " overstocked thingamajigs. No need to order more." << endl;

  // Check if watchamacallits are understocked
  if (watchamacallits<70)
    cout << (70-watchamacallits) << " watchamacallits to reach 70 stock." << endl;
  else
    cout << (watchamacallits-70) << " overstocked watchamacallits. No need to order more." << endl;
  
  // Check if framistats are understocked
  if (framistats<50)
    cout << (50-framistats) << " framistats to reach 50 stock." << endl;
  else
    cout << (framistats-50) << " overstocked framistats. No need to order more." << endl;
  cout << endl;       
}

/******************************************
 *         Supplies::produceThing1        *
 *Description: Creates thing1 from 1 t,   *
   2 w, and 1 f                           * 
  Parameters: int                         *
******************************************/
void Supplies::produceThing1(int qty)
{
  for (int i=0;i<qty;i++)
  {
    setNumThingamajigs(thingamajigs-1);
    setNumWatchamacallits(watchamacallits-2);
    setNumFramistats(framistats-1);
  }
}

/******************************************
 *        Supplies::produceThing2         *
 *Description: creates thing2 from 2 t    *
    and 1 f                               *
  Parameters: int                         *
******************************************/
void Supplies::produceThing2(int qty)
{
  for (int i=0;i<qty;i++)
  {
    setNumThingamajigs(thingamajigs-2);
    setNumFramistats(framistats-1);
  }
}


//  ***MAIN***
int main()
{
  // Declare variables
  int thing,
      watcha,
      fram,
      selection,
      qty;

  // Prompt for input - how many of each part
  cout << "How many thingamajigs are in stock?" << endl;
  cin >> thing;
  cout << "How many watchamacallits are in stock?" << endl;
  cin >> watcha;
  cout << "How many framistats are in stock?" << endl;
  cin >> fram;

  // Create Supplies object with input
  Supplies order(thing,watcha,fram);

  // Menu to select produceThing1, produceThing2, printPartsOrder, or quit
  do
  {
    // Display menu
    cout << "Please select one of the following options:" << endl;
    cout << "1. Produce Thing 1" << endl;
    cout << "2. Produce Thing 2" << endl;
    cout << "3. Print parts order" << endl;
    cout << "4. Exit menu" << endl;
    cout << endl;
    // User makes selection
    cin >> selection;
    
    // Switch case depending on selection
    switch(selection)
    {
      // create multiple thing1 based on qty given 
      case 1:
        cout << endl;
        cout << "How many Thing 1 would you like to make?" << endl;
        cin >> qty;

        order.produceThing1(qty);
        cout << qty << " Thing 1 have been produced." << endl;
        cout << endl;
        break;
      // create multiple thing2 based on qty given 
      case 2:
        cout << endl;
        cout << "How many Thing 2 would you like to make?" << endl;
        cin >> qty;
        
        order.produceThing2(qty);
        cout << qty << " Thing 2 have been produced." << endl;
        cout << endl;
        break;
      // Print parts needed
      case 3:
        order.printPartsOrder();
        break;
      // exit
      case 4:
        cout << "Goodbye!" << endl;
    }  
  } while (selection!=4);      

  return 0;
}
