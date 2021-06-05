#pragma once
#include "airship.h"
ref class helicopter :
	public airship
{
public:
	helicopter() {}
	virtual void repair() override { endurance += 9; }
	virtual void refuel()  override { fuel += 25; }
	virtual void increase() override { speed += 50; }
	virtual void climb() override { heigth += 30; }
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
	virtual void birds() override { endurance -= 30; }
	helicopter(int fu, int en, int sp, int he);
};

