#ifndef _SHOP_H
#define _SHOP_H

#include <vector>
#include <string>

#include "Model.h"
#include "Component.h"

class Shop
{
	private:
		std::vector<Model> vModel;
		std::vector<Component> vComponent;

	public:
		Shop();
		void mCreate_Model();
		void mCreate_Component();
		void mList_Models();
		void mList_Components();
};

#endif

