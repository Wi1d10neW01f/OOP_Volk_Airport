#pragma once

ref class airship//дирижабль
{
public: int fuel, endurance, speed, heigth;

public:
	airship() {}
	virtual void repair() { endurance += 5; }
	virtual void refuel() {	fuel += 10;	}
	virtual void increase() { speed += 15; }
	virtual void decrease() {
		int minus = speed / 3;
		if (speed - minus > 25) speed -= minus;
		else if (speed - minus < 15) speed = 0;
		else speed = 15;
	}
	virtual void climb() { heigth += 25; }
	virtual void down() {
		int minus = heigth / 3;
		if (heigth - minus > 25) heigth -= minus;
		else if (heigth - minus < 15) heigth = 0;
		else heigth = 15;
	}
	airship(int fu, int en, int sp, int he);

	property int Endurance {
		int get() {
			return endurance;
		}
		void set(int a) { endurance = a; }
	}
	property int Fuel {
		void set(int a) { fuel = a; }
		int get() {
			return fuel;
		}
	}
	property int Heigth {
		void set(int a) { heigth = a; }
		int get() {
			return heigth;
		}
	}
	property int Speed {
		int get() {
			return speed;
		}
		void set(int a) { speed = a; }
	}
	//}
};
