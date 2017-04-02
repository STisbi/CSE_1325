#ifndef _HEAD_H
#define _HEAD_H

#include <string>
#include "Component.h"

class Head : public Component
{
	public:
		Head(std::string aName, int aPart_num, int aWeight, int aCost, std::string aDescription);
};

#endif
