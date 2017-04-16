#include "Torso.h"


Torso::Torso(int aBatteryCompartment)  : mBatteryCompartment(aBatteryCompartment) { }

Torso::Torso() {}

std::string Torso::mTorso_Info()
{
	std::string batteryCompartment = std::to_string(mBatteryCompartment);

	return ("Number of batteries: " + batteryCompartment);
}

void Torso::mSave(ostream& ost)
{
	ost  << "#Torso " <<  mTorso_Info() << endl;
}
