#ifndef _TORSO_H
#define _TORSO_H

class Torso : public Component
{
	public:
		Torso(int val) : mBatteryCompartment(val) {} : Component
	private:
		int mBatteryCompartment;
};

#endif
