#include "Checking.h"
/*
* Before C++11
Checking::Checking(const std::string& Name, float Balance):
	Account(Name,Balance)
{
}
*/

Checking::Checking(const std::string& Name, float Balance,int MinBalance) :
	Account(Name, Balance),m_MinBalance(MinBalance)
{
	std::cout << __FUNCTION__ << std::endl;
}


Checking::~Checking()
{
	std::cout << __FUNCTION__ << std::endl;
}

int Checking::getMinBalance() const
{
	return m_MinBalance;
}

void Checking::Withdraw(float amount)
{
	if ((m_Balance-amount) <= m_MinBalance) {
		std::cout << "Reached to minimum limit!!" << std::endl;
	}
	else {
		Account::Withdraw(amount);
	}
}
