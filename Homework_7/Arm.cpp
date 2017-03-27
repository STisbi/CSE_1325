#include "Arm.h"

Arm::Arm(int aPowerConsumed, std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription) : Component( aName,
																															 aPartNum,
																															 aWeight,
																															 aCost,
																															 aDescription )
{
	mPowerConsumed = aPowerConsumed;
}
