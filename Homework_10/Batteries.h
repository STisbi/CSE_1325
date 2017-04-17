#ifndef _BATTERIES_H
#define _BATTERIES_H

#include <iostream>
#include <ostream>
#include <fstream>

#include <string>

using namespace std;

class Batteries
{
	private:
		int mEnergy;

	public:
		Batteries(int aEnergy);
		Batteries();
		void mSave(ostream& ost);
};

#endif
