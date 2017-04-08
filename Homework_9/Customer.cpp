#include "Customer.h"

using namespace std;

Customer::Customer(std::string aCustomerName, int aCustomerPhone, int aCustomerEmail) 
	: mCustomerName(aCustomerName), mCustomerPhone(aCustomerPhone), mCustomerEmail(aCustomerEmail) { }

std::string Customer::mCustomer_Info()
{
	std::string number = std::to_string(mCustomerPhone);
	std::string email = std::to_string(mCustomerEmail);
	return ("\nCustomer Name: " + mCustomerName + "\nCustomer Number: " + number + "\nCustomerEmail: " + email + "\n");
}
