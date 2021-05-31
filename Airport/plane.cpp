#include "plane.h"

int plane::getEnd() {
	return endurance;
}

void plane::setEnd(int a) {
	int endurance = a;
}
int plane::getFuel() {
	return fuel;
}

void plane::setFuel(int a) {
	int fuel = a;
}

plane::plane()
{
}
