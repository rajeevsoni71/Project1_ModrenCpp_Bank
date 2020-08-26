#include "Savings.h"

Savings::Savings(const std::string& Name, float Balance, float rate) :
	Account(Name, Balance),m_IRate(rate)
{
	std::cout << __FUNCTION__ << std::endl;
}

Savings::~Savings()
{
	std::cout << __FUNCTION__ << std::endl;
}

void Savings::AccumulateInterest()
{
	m_Balance *= m_IRate;
}

float Savings::get_InterestRate() const
{
	return m_IRate;
}
