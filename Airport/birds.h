#pragma once
ref class birds
{
public:
	birds();
	bool wasSpawn = false;
	int xCoord; float yCoord;
	property bool WasSpawn {
		bool get() {
			return wasSpawn;
		}
		void set(bool a) {
			wasSpawn = a;
		}
	}
	property int XCoord {
		int get() {
			return xCoord;
		}
		void set(int a) {
			xCoord = a;
		}
	}
	property float YCoord {
		float get() {
			return yCoord;
		}
		void set(float a) {
			yCoord = a;
		}
	}
	void changeCoord(){
		xCoord++;
		yCoord = (-1 / (xCoord - 4.6)) + 1.109;
	}
	birds(int x, float y);
};

