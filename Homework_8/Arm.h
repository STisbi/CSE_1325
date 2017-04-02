#ifndef _ARM_H
#define _ARM_H

#include <string>
#include "Component.h"

class Arm : public Component
{
	private:
		int mPowerConsumed;

	public:
		Arm(int aPowerConsumed, std::string aName, int aPart_num, int aWeight, int aCost, std::string aDescription);
};

#endif
