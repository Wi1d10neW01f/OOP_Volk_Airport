#pragma once
ref class plane{
	public:
		int _memb;
		int fuel = 0;
		int endurance = 0;

	int getEnd() {
		return endurance;
	}

	void setEnd(int a) {
		endurance = a;
	}
	int getFuel() {
		return fuel;
	}

	void setFuel(int a) {
		fuel = a;
	}
};

