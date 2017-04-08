#ifndef _CUSTOMER_H
#define _CUSTOMER_H

#include <iostream>

class Customer
{
	private:
		std::string mCustomerName;
		int mCustomerPhone;
		int mCustomerEmail;

	public:
		Customer(std::string aCustomerName, int aCustomerPhone, int aCustomerEmail);
		std::string mCustomer_Info();

};

#endif
