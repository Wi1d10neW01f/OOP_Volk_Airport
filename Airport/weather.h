#pragma once
ref class weather
{
public:
	weather();
	bool rain = false;
	property bool Rain {
		bool get() {
			return rain;
		}
		void set(bool a) {
			rain = a;
		}
	}
};

