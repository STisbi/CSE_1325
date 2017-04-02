#ifndef _MODEL_H
#define _MODEL_H

#include <string>

class Model
{
	private:
		std::string mModelName;
		int mModelNumber;
		int mModelPrice;

	public:
		Model(std::string aModelName, int aModelNumber, int aModelPrice) : mModelName(aModelName), mModelNumber(aModelNumber), mModelPrice(aModelPrice) {}
		int mTotal_Cost();
};
#endif
