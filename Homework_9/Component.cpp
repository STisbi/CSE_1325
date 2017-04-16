#include "Component.h"

using namespace std;

Component::Component(std::string aName, int aPartNum, int aWeight, int aCost, std::string aDescription, int aChoice)
 : mName(aName), mPartNum(aPartNum), mWeight(aWeight), mCost(aCost), mDescription(aDescription)
{
	switch(aChoice - 1)
	{
		case 0:
		{
			mCreate_Torso();
			cout << "\nTorso Created.";
			break;
		}
		case 1:
		{
			mCreate_Head();
			cout << "\nHead Created.";
			break;
		}
		case 2:
		{
			mCreate_Arm();
			cout << "\nArm Created.";
			break;
		}
		case 3:
		{
			mCreate_Batteries();
			cout << "\nBatteries Created.";
			break;
		}
		case 4:
		{
			mCreate_Locomotor();
			cout << "\nLocomotor Created.";
			break;
		}
	}
}

Component::Component()
{
	int choice;

	cout << "\nWhat kind of component are you creating?";
	cout << "\n1. Torso\n2. Head\n3. Arm\n4. Batteries\n5. Locomotor\n\nChoice: ";
	cin >> choice;
	cin.ignore();


	cout << "Component Name: ";
	getline(cin, mName);

	cout << "Component Part Number: ";
	cin >> mPartNum;
	cin.ignore();

	cout << "Component Weight: ";
	cin >> mWeight;
	cin.ignore();

	cout << "Component Cost: ";
	cin >> mCost;
	cin.ignore();

	cout << "Component Description: ";
	getline(cin, mDescription);

	switch(choice - 1)
	{
		case 0: { mCreate_Torso(); break; }
		case 1: { mCreate_Head(); break; }
		case 2: { mCreate_Arm(); break; }
		case 3: { mCreate_Batteries(); break; }
		case 4: { mCreate_Locomotor(); break; }
	}
}

void Component::mCreate_Torso()
{
	int lBatteryCompartment;

	cout << "Number of Batteries: ";
	cin >> lBatteryCompartment;
	cin.ignore();

	Torso torso(lBatteryCompartment);	// this is a locol object, is destroyed once gone, thus a problem when an instance of component instances a class of torso
	vTorso.push_back(torso);			// a rough work around to this problem, component creates a vector to keep them around (inheritance)
}

void Component::mCreate_Head()
{
	Head head;
	vHead.push_back(head);
}

void Component::mCreate_Arm()
{
	int powerConsumed;

	cout << "Power Consumed (in watts): ";
	cin >> powerConsumed;
	cin.ignore();

	Arm arm(powerConsumed);
	vArm.push_back(arm);	
}

void Component::mCreate_Batteries()
{
	int energy;

	cout << "Energy in batteries: ";
	cin >> energy;
	cin.ignore();

	Batteries batteries(energy);
	vBatteries.push_back(batteries);
}

void Component::mCreate_Locomotor()
{
	int maxSpeed;
	int powerConsumed;

	cout << "Max Speed: ";
	cin >> maxSpeed;
	cin.ignore();
	cout << "Power Consumed (in watts): ";
	cin >> powerConsumed;

	Locomotor locomotor(maxSpeed, powerConsumed);
	vLocomotor.push_back(locomotor);
}

std::string Component::mComponent_Info()
{
	std::string partNum = std::to_string(mPartNum);
	std::string weight = std::to_string(mWeight);
	std::string cost = std::to_string(mCost);

	return("\nComponent Name: " + mName + "\nComponent Part Number: " + partNum + "\nComponent Weight: " + weight + 
			"\nComponent Cost: " + cost + "\nComponent Description: " + mDescription + "\n");
}







