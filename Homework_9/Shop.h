#ifndef _SHOP_H
#define _SHOP_H

#include <vector>
#include <string>

#include <iostream>
#include <ostream>
#include <fstream>

#include "Model.h"
#include "Component.h"
#include "Customer.h"
#include "Employee.h"

using namespace std;

class Shop
{
	private:
		std::vector<Model> vModel;
		std::vector<Component> vComponent;
		std::vector<Customer> vCustomer;
		std::vector<Employee> vEmployee;

	public:
		Shop();
		void mCreate_Model();
		void mList_Models();

		void mCreate_Component();
		void mList_Components();

		void mAdd_Customer();
		void mList_Customers();

		void mAdd_Employee();
		void mList_Employees();

		void mSave_Shop();
};

#endif

