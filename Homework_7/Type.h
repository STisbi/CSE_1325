#ifndef _TYPE_H
#define _TYPE_H
#include "Torso.h"

class Type
{
	public:
		Type(int val) : mValue(val) {}

		static const int torso = 0;
		static const int head = 1;
		static const int arm = 2;
		static const int locomotor = 3;
		static const int batteries = 4;

		string to_String();

	private:
		int mValue;
		Torso torso;
//		Head head;
//		Arm arm;
//		Locomotor locomotor;
//		Batteries batteries;
};
