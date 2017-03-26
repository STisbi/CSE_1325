#include <iostream>
#include <string>
#include <vector>
#include "Component.h"

using namespace std;

int main(void)
{
	string name;
	int part_number;
	int weight;
	int cost;
	string description;

	cout << "Name?\n";
	getline(cin, name);

	cout << "Part Number?\n";
	cin >> part_number;

	cout << "Weight?\n";
	cin >> weight;

	cout << "Cost?\n";
	cin >> cost;

	cout << "Desciption?\n";
	getline(cin, description);

    Component component(name, part_number, weight, cost, description);

	return 0;
}
