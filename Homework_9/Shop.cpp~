#include "Shop.h"

using namespace std;

Shop::Shop()
{
	int choice;

	while(1)
	{
		cout << "\n1. Create Part\n2. Create Model\n3. List Components\n4. List Models\n5. Add Customer\n6. List Customers\n9. Exit\n\nChoice: ";
		cin >> choice;
		cin.ignore();

		switch(choice - 1)
		{
			case 0:
			{
				mCreate_Component();
				break;
			}
			case 1:
			{
				mCreate_Model();
				break;
			}
			case 2:
			{
				mList_Components();
				break;
			}
			case 3:
			{
				mList_Models();
				break;
			}
			case 4:
			{
				mAdd_Customer();
				break;
			}
			case 5:
			{
				mList_Customers();
				break;
			}
			case 8:
			{
				cout << "Goodbye.\n";
				exit(0);
				break;
			}
		}
	}
}

void Shop::mCreate_Model()
{
	string name;
	int model_number;
	int price;

	cout << "Model Name: ";
	getline(cin, name);

	cout << "Model Number: ";
	cin >> model_number;
	cin.ignore();

	cout << "Model Price: ";
	cin >> price;
	cin.ignore();

	Model model(name, model_number, price);
	vModel.push_back(model);
	cout << "\nModel Created.\n";
}

void Shop::mCreate_Component()
{
	Component component;
	vComponent.push_back(component);
}

void Shop::mList_Components()
{
	for(int i = 0; i < vComponent.size(); i++)
	{
		cout << vComponent[i].mComponent_Info();
	}
}

void Shop::mList_Models()
{
	for(int i = 0; i < vModel.size(); i++)
	{
		cout << vModel[i].mModel_Info();
	}
}

void Shop::mAdd_Customer()
{
	std::string name;
	std::string phone;
	std::string email;

	cout << "Customer Name: ";
	getline(cin, name);

	cout << "Customer Phone Number: ";
	getline(cin, phone);

	cout << "Customer Email: ";
	getline(cin, email);

	Customer customer(name, phone, email);
	vCustomer.push_back(customer);
	cout << "\nCustomer Created.\n";
}

void Shop::mList_Customers()
{
	for(int i = 0; i < vCustomer.size(); i++)
	{
		cout << vCustomer[i].mCustomer_Info();
	}
}


