#ifndef _LOCOMOTOR_H
#define _LOCOMOTOR_H

#include <string>
#include "Component.h"

class Locomotor : public Component
{
	private:
		int mMaxSpeed;
		int mPowerConsumed;

	public:
		Locomotor(int aMaxSpeed, int aPowerConsumed, std::string aName, int aPart_num, int aWeight, int aCost, std::string aDescription);
};

#endif
