#include "Employee.h"

using namespace std;

Employee::Employee(std::string aEmployeeName, std::string aEmployeeNumber) 
	: mEmployeeName(aEmployeeName), mEmployeeNumber(aEmployeeNumber) { }

std::string Employee::mEmployee_Info()
{
	return ("\nEmployee Name: " + mEmployeeName + "\nEmployee Number: " + mEmployeeNumber + "\n");
}
