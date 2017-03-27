#include "Component.h"

Component::Component(std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription)
{
	mName = aName;
	mPartNum = aPartNum;
	mWeight = aWeight;
	mCost = aCost;
	mDescription = aDescription;
}
