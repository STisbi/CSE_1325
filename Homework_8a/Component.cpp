#include "Component.h"

Component::Component(std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription, int aBatteryCompartments)
 : Torso(aBatteryCompartments)
{
	mName = aName;
	mPartNum = aPartNum;
	mWeight = aWeight;
	mCost = aCost;
	mDescription = aDescription;
}

Component::Component(std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription)
 : Head()
{
	mName = aName;
	mPartNum = aPartNum;
	mWeight = aWeight;
	mCost = aCost;
	mDescription = aDescription;
}

Component::Component(std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription, int aPowerConsumed)
 : Arm(aPowerConsumed)
{
	mName = aName;
	mPartNum = aPartNum;
	mWeight = aWeight;
	mCost = aCost;
	mDescription = aDescription;
}

Component::Component(std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription, int aEnergy)
 : Batteries(aEnergy)
{
	mName = aName;
	mPartNum = aPartNum;
	mWeight = aWeight;
	mCost = aCost;
	mDescription = aDescription;
}

Component::Component(std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription, int aMaxSpeed, int aPowerConsumed)
 : Locomotor(aMaxSpeed, aPowerConsumed)
{
	mName = aName;
	mPartNum = aPartNum;
	mWeight = aWeight;
	mCost = aCost;
	mDescription = aDescription;
}
