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


	cout << "1. Create Model\n\nChoice: ";
	cin >> choice;
	cin.ignore();

	switch(choice - 1)
	{
		case 0:
		{
			cout << "\nNew Model";

			cout << "Name?\n";
			getline(cin, name);

			cout << "Model Number?\n";
			cin >> model_number;
			cin.ignore();

			cout << "Price?\n";
			cin >> price;
			cin.ignore();

			Model model(name, model_number, price);
			cout << "\nCreated.\n";
			break;
		}
	}

	return 0;
}