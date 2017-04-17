#include "Batteries.h"


Batteries::Batteries(int aEnergy)  : mEnergy(aEnergy) { }

Batteries::Batteries() {}

void Batteries::mSave(ostream& ost)
{
	ost << "#Batteries " <<  mEnergy << endl;
}
