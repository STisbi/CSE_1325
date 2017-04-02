#include "Locomotor.h"

Locomotor::Locomotor(int aMaxSpeed, int aPowerConsumed, std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription) : Component( aName,
																																						aPartNum,
																																						aWeight,
																																						aCost,
																																						aDescription )
{
	mMaxSpeed = aMaxSpeed;
	mPowerConsumed = aPowerConsumed;
}
