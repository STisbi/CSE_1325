#include <iostream>
#include "Component.h"

using namespace std;

Component( string aName, int aType, int aPart_num, int aWeight, int aCost, string aDescription)
{
	switch(aType)
	{
		case(0):
			torso(aType);
	}
}
