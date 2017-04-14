#include "Arm.h"


Arm::Arm(int aPowerConsumed)  : mPowerConsumed(aPowerConsumed) { }

Arm::Arm() {}

Arm::Arm(istream& ist)	// Read input from stream to variable
{
	ist >> mPowerConsumed;
}

void Arm::mSave(ostream& ost)	// Output variable to stream
{
	ost << mPowerConsumed << '\n' << endl;
}
