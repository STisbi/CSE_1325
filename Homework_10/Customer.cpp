#include "Customer.h"

using namespace std;

Customer::Customer(std::string aCustomerName, std::string aCustomerPhone, std::string aCustomerEmail) 
	: mCustomerName(aCustomerName), mCustomerPhone(aCustomerPhone), mCustomerEmail(aCustomerEmail) { }

std::string Customer::mCustomer_Info()
{
	return ("\nCustomer Name: " + mCustomerName + "\nCustomer Phone Number: " + mCustomerPhone + "\nCustomer Email: " + mCustomerEmail + "\n");
}
