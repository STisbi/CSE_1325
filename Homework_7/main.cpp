#include <iostream>
#include <string>
#include <vector>
#include "Component.h"

using namespace std;

int main(void)
{
	int name;
	int type;
	int part_number;
	int weight;
	int cost;
	string description;

	cout << "Name?\n";
	getline(cin, name);

	cout << "Type?\n";
	getline(cin, type);

	cout << "Part Number?\n";
	getline(cin, part_number);

	cout << "Weight?\n";
	getline(cin, weight);

	cout << "Cost?\n";
	getline(cin, cost);

	cout << "Desciption?\n";
	getline(cin, description);

    Component component(name, type, part_number, weight, cost, description);

	return 0;
}
