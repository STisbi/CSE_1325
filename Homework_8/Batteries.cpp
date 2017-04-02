#include "Batteries.h"

Batteries::Batteries(int aEnergy, std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription) : Component( aName,
																																  aPartNum,
																																  aWeight,
																																  aCost,
																																  aDescription )
{
	mEnergy = aEnergy;
}
