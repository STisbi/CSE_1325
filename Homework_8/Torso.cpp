#include "Torso.h"

Torso::Torso(int aBatteryCompartment, std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription) : Component( aName,
																																	  aPartNum,
																																	  aWeight,
																																	  aCost,
																																	  aDescription )
{
	mBatteryCompartment = aBatteryCompartment;
}
