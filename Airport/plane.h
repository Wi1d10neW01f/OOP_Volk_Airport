#pragma once
#include "airship.h"
ref class plane :
	public airship
{
public:
	plane() {};
	virtual void repair() override { endurance += 3; }
	virtual void refuel() override { fuel += 35; }
	virtual void increase() override { speed += 50; }
	virtual void climb() override { heigth += 8; }
	virtual void decrease() override {
		int minus = speed / 3;
		if (speed - minus > 25) speed -= minus;
		else if (speed - minus < 15) speed = 0;
		else speed = 15;
	}
	virtual void down() override {
		int minus = heigth / 3;
		if (heigth - minus > 25) heigth -= minus;
		else if (heigth - minus < 15) heigth = 0;
		else heigth = 15; 
	}
	virtual void changeCoord(bool tl) override {
		if (!tl)
			xCoord--;
		else
			xCoord++;
		yCoord = 0.2 * sqrt(xCoord);
	}
	//virtual void birds() override { endurance -= 50; }
	plane(int fu, int en, int sp, int he);

};

