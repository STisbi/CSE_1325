#ifndef _COMPONENT_H
#define _COMPONENT_H

#include <iostream>
#include <string>

// Base class for the individual parts

class Component
{
	private:
		std::string mName;	// if not std:: then get error. Have to use using namespace std here
							// However to avoid including this file ALONG WITH 'using the namespace std', good practice to put std:: instead
		int mPartNum;
		int mWeight;
		int mCost;
		std::string mDescription;

	public:
		Component(  std::string aName,
					int aPartNum,
					int aWeight,
					int aCost,
					std::string aDescription );
};
#endif
