#ifndef _CUSTOMER_H
#define _CUSTOMER_H

#include <iostream>

class Customer
{
	private:
		std::string mCustomerName;
		std::string mCustomerPhone;
		std::string mCustomerEmail;

	public:
		Customer(std::string aCustomerName, std::string aCustomerPhone, std::string aCustomerEmail);
		std::string mCustomer_Info();

};

#endif
