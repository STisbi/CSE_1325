#ifndef _ARM_H
#define _ARM_H

#include <iostream>
#include <ostream>
#include <fstream>

#include <string>

using namespace std;

class Arm
{
	private:
		int mPowerConsumed;

	public:
		Arm(int aPowerConsumed);
		Arm();
		Arm(istream& ist);
		void mSave(ostream& ost);
};

#endif
