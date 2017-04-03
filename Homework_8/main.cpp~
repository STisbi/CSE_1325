#include <iostream>
#include <string>
#include <vector>

#include "Component.h"
#include "Torso.h"
#include "Head.h"
#include "Arm.h"
#include "Locomotor.h"
#include "Batteries.h"
#include "Model.h"

using namespace std;

int main(void)
{
	int choice;
	string name;
	int model_number;
	int price;


	cout << "1. Create Part\n2. Create Model\n3. Coming Soon\n9. Exit\n\nChoice: ";
	cin >> choice;
	cin.ignore();

	switch(choice - 1)
	{
		case 0:
		{
			Component component();
			break;
		}
		case 1:
		{
			cout << "Model Name: ";
			getline(cin, name);

			cout << "Model Number: ";
			cin >> model_number;
			cin.ignore();

			cout << "Model Price: ";
			cin >> price;
			cin.ignore();

			Model model(name, model_number, price);
			cout << "\nModel Created.\n";
			break;
		}
		case 9:
		{
			cout << "Goodbye.\n";
			exit(0);
			break;
		}
	}

	return 0;
}
