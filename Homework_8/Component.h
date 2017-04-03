#ifndef _COMPONENT_H
#define _COMPONENT_H

#include <iostream>
#include <string>

#include "Torso.h"
#include "Head.h"
#include "Arm.h"
#include "Batteries.h"
#include "Locomotor.h"

// Derived class from multiple individual parts

class Component : public Torso, public Head, public Arm, public Batteries, public Locomotor 
{
	private:
		std::string mName;	// if not std:: then get error. Have to use using namespace std here
							// However to avoid including this file ALONG WITH 'using the namespace std', good practice to put std:: instead
		int mPartNum;
		int mWeight;
		int mCost;
		std::string mDescription;

	public:
		Component(  std::string aName,				// Constructor
					int aPartNum,
					int aWeight,
					int aCost,
					std::string aDescription,
					int aChoice	);
		void mCreate_Torso();
};

#endif