#include "Sales.h"

Sales::Sales(std::string aEmployeeName, std::string aEmployeeNumber) 
	: mEmployeeName(aEmployeeName), mEmployeeNumber(aEmployeeNumber) { }

std::string Sales::mEmployee_Info()
{
	return ("\nEmployee Name: " + mEmployeeName + "\nEmployee Number: " + mEmployeeNumber + "\n");
}