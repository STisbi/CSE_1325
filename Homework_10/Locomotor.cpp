#include "Locomotor.h"


Locomotor::Locomotor(int aMaxSpeed, int aPowerConsumed)  : mMaxSpeed(aMaxSpeed), mPowerConsumed(mPowerConsumed) { }

Locomotor::Locomotor() {}

void Locomotor::mSave(ostream& ost)
{
	ost << "#Locomotor " << mMaxSpeed; 
	ost << "#Locomotor " << mPowerConsumed << endl;
}
