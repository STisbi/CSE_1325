#ifndef _COMPONENT_H
#define _COMPONENT_H

#include <iostream>
#include <string>

#include "Torso.h"
#include "Head.h"
#include "Arm.h"
#include "Batteries.h"
#include "Locomotor.h"

// Base class for the individual parts

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
		Component(  std::string aName,				// Constructor for Torso
					int aPartNum,
					int aWeight,
					int aCost,
					std::string aDescription,
					int aBatteryCompartments );

		Component(  std::string aName,				// Constructor for Head
					int aPartNum,
					int aWeight,
					int aCost,
					std::string aDescription);

		Component(  std::string aName,				// Constructor for Arm
					int aPartNum,
					int aWeight,
					int aCost,
					std::string aDescription,
					int aPowerConsumed );

		Component(  std::string aName,				// Constructor for Batteries
					int aPartNum,
					int aWeight,
					int aCost,
					std::string aDescription,
					int aEnergy );

		Component(  std::string aName,				// Constructor for Locomotor
					int aPartNum,
					int aWeight,
					int aCost,
					std::string aDescription,
					int aMaxSpeed,
					int aPowerConsumed );
};

#endif
