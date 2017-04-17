#ifndef _LOCOMOTOR_H
#define _LOCOMOTOR_H

#include <iostream>
#include <ostream>
#include <fstream>

#include <string>

using namespace std;

class Locomotor
{
	private:
		int mMaxSpeed;
		int mPowerConsumed;

	public:
		Locomotor(int aMaxSpeed, int aPowerConsumed);
		Locomotor();
		void mSave(ostream& ost);
};

#endif
