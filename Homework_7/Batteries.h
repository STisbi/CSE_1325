#ifndef _BATTERIES_H
#define _BATTERIES_H

#include <string>
#include "Component.h"

class Batteries : public Component
{
	private:
		int mEnergy;

	public:
		Batteries(int aEnergy, std::string aName, int aPart_num, int aWeight, int aCost, std::string aDescription);
};

#endif
