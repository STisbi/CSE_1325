#ifndef _Employee_H
#define _Employee_H

#include <iostream>

class Employee
{
	private:
		std::string mEmployeeName;
		std::string mEmployeeNumber;
		int mPassword;
	public:
		Employee(std::string aEmployeeName, std::string aEmployeeNumber);
		std::string mEmployee_Info();
};

#endif
