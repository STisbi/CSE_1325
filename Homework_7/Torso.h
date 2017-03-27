#ifndef _TORSO_H
#define _TORSO_H

#include <string>
#include "Component.h"

class Torso : public Component
{
	public:
		Torso(int cBatteryCompartment, std::string Name, int Part_num, int Weight, int Cost, std::string Description) : Component( Name,
																																   Part_num,
																																   Weight,
																																   Cost,
																																   Description ) { }
	private:
		int mBatteryCompartment;
};

#endif
