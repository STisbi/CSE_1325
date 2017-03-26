#ifndef _COMPONENT_H
#define _COMPONENT_H
#include "Torso.h"

// This class will be one above the individual parts

class Component
{
	public:
		Component(  string aName,
					int aType,
					int aPart_num,
					int aWeight,
					int aCost,
					string aDescription) :

					Name(aName),
					type(aType),
					Part_num(aPart_num),
					Weight(aWeight),
					Cost(aCost), 
					Description(aDescription) {}

	private:
		string Name;
		int type;
		string Description;
		int Part_num;
		int Weight;
		int Cost;

		Torso torso;
};
