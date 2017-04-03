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

	cout << "\nWhat kind of component are you adding?";
	cout << "\n1. Torso\n2. Head\n3. Arm\n4. Batteries\n5. Locomotor\n\nChoice: ";
	cin >> choice;
	cin.ignore();


	cout << "Component Name: ";
	getline(cin, name);

	cout << "Component Part Number: ";
	cin >> part_number;
	cin.ignore();

	cout << "Component Weight: ";
	cin >> weight;
	cin.ignore();

	cout << "Component Cost: ";
	cin >> cost;
	cin.ignore();

	cout << "Component Description: ";
	getline(cin, description);

	Component component(name, part_number, weight, cost, description, choice);
	cout << "\nComponent Created.";

}
