#ifndef _TORSO_H
#define _TORSO_H

#include <iostream>
#include <ostream>
#include <fstream>

#include <string>

using namespace std;

class Torso
{
	private:
		int mBatteryCompartment;

	public:
		Torso(int aBatteryCompartment);
		Torso();

		void mSave(ostream& ost);
		std::string mTorso_Info();
};

#endif
