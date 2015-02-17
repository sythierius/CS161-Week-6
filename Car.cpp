/*******************************************
* Author: Charles Bennett
* Date: 2/8/15
* Description: This program uses the car class to create a car object with the user input of make and year, then accelerates the car and decelerates it, printing the speed for both each time they are called.
*******************************************/
#include <iostream>
#include <string>
#include "Car.hpp"

using namespace std;

// Default constructor
Car::Car()
{
	setYear(0);
	setSpeed(0);
	setMake("");
}

// Overloaded constructor
Car::Car(int y, string m)
{
	setYear(y);
	setSpeed(0);
	setMake(m);
}

// Car::setYear
void Car::setYear(int y)
{
	year=y;
}

// Car::setMake
void Car::setMake(string m)
{
	make=m;
}

// Car::setSpeed
void Car::setSpeed(int s)
{
	speed=s;
}

// Car::getSpeed
int Car::getSpeed()
{
	return speed;
}

/**************************************
*           Car::accelerate           *
*Description: Adds 10 to speed if <=80*
*Parameter: none                      *
**************************************/		   
void Car::accelerate()
{
	if (speed<80)  // The maximum speed is 80
		setSpeed(speed+10);
        else
          cout << "Vehicle is at max speed!" << endl;
}

/**************************************
*           Car::brake                *
*Description: Subtracts 10 from speed *
* if speed>=0                         *
*Parameter: none                      *
**************************************/	
void Car::brake()
{
	if (speed>0)
	 	setSpeed(speed-10);
        else
          cout << "The vehicle is stopped!" << endl;
}

int main()
{
	// Declare variables
	int y,
            selection;
	string m;
	     
	// Prompt user for input
	cout << "Please input the year the car was made." << endl;
	cin >> y;
	cout << "Please input the make of the car." << endl;
	cin >> m;
	
	// Create a car object using the input data
	Car vehicle(y,m);
	
        // Menu for user to select brake, accelerate, or quit
        do
        {
          cout << endl;
          cout << "Please select one of the following options:" << endl;
          cout << "1. Accelerate the car by 10mph" << endl;
          cout << "2. Brake the car by 10mph" << endl;
          cout << "3. Exit the menu" << endl;
          cout << endl;
          cin >> selection;

          switch(selection)
          {
            case 1:  
      	      // Accelerate the car and print the speed
              cout << "The " << y << " " << m << " accelerates." << endl;
              vehicle.accelerate();
	      cout << "Current speed: " << vehicle.getSpeed() << endl;
              break;
            case 2:
	      // Brake the car and print the speed
	      cout << "The " << y << " " << m << " brakes." << endl;
              vehicle.brake(); 
	      cout << "Current speed: " << vehicle.getSpeed() << endl;
	      break;
            case 3:
              cout << "Goodbye!" << endl;
          }
        } while (selection!=3); 
	return 0;
}
