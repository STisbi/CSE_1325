#include "Model.h"

using namespace std;

Model::Model(std::string aModelName, int aModelNumber, int aModelPrice) : mModelName(aModelName), mModelNumber(aModelNumber), mModelPrice(aModelPrice)
{
	int choice;
	std::string name;
	int part_number;
	int weight;
	int cost;
	std::string description;

	cout << "Add Parts\n";
	cout << "1. Create Torso\n\nChoice: ";
	cin >> choice;
	cin.ignore();

	switch(choice - 1)
	{
		case 0:
		{
			cout << "\nNew Torso";

			cout << "Name?\n";
			getline(cin, name);

			cout << "Part Number?\n";
			cin >> part_number;
			cin.ignore();

			cout << "Weight?\n";
			cin >> weight;
			cin.ignore();

			cout << "Cost?\n";
			cin >> cost;
			cin.ignore();

			cout << "Description\n";
			getline(cin, description);

			Component component(name, part_number, weight, cost, description, choice);
			cout << "\nComponent Created.\n";
			break;
		}
	}
}
