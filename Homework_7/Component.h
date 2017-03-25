#ifndef _COMPONENT_H
#define _COMPONENT_H
#include "Torso.h"

// This class will be one above the individual parts

class Component
{
	public:
		Component(  string aName,
					int aType,
					string aDescription,
					int aPart_num,
					int aWeight,
					int aCost) :

					Name(aName),
					type(aType),
					Description(aDescription),
					Part_num(aPart_num),
					Weight(aWeight),
					Cost(aCost) {}

	private:
		string Name;
		int type;
		string Description;
		int Part_num;
		int Weight;
		int Cost;

		Torso torso;
};
