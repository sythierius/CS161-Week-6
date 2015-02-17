/*******************************************
* Author: Charles Bennett
* Date: 2/8/15
* Description: The car class takes a year and make of car and accelerates and decelerates it.
*******************************************/
#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>

using namespace std;

// Structure of Car class
class Car
{
	private:
		int year,
		    speed;
		string make;
	public:
		Car();
		Car(int, string);
		void setYear(int);
		void setMake(string);
		void setSpeed(int);
		int getSpeed();
		void accelerate();
		void brake();		
};
#endif
