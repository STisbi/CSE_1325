#ifndef _COMPONENT_H
#define _COMPONENT_H

#include <iostream>
#include <string>
#include "Torso.h"

// Base class for the individual parts

class Component
{
	public:
		Component(  std::string Name,
					int Part_num,
					int Weight,
					int Cost,
					std::string Description) :

					aName(Name),
					aPart_num(Part_num),
					aWeight(Weight),
					aCost(Cost), 
					aDescription(Description) {}

	private:
		std::string aName;	// if not std:: then get error. Have to use using namespace std here
							// However to avoid including this file ALONG WITH 'using the namespace std', good practice to put std:: instead
		std::string aDescription;
		int aPart_num;
		int aWeight;
		int aCost;
};
#endif
