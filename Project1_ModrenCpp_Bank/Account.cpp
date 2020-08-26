#include "Account.h"
int Account::s_ANGenerator{1000};

float Account::get_InterestRate() const
{
    return 0.0f;
}

Account::Account(const std::string& Name, float Balance):m_Name(Name), m_Balance(Balance)
{
    std::cout << __FUNCTION__ << std::endl;
    m_AccNo = ++s_ANGenerator;
}

Account::~Account()
{
    std::cout << __FUNCTION__ << std::endl;
}

std::string Account::get_Name() const
{
    return m_Name;
}

int Account::get_Balance() const
{
    return m_Balance;
}

int Account::get_AccountNumber() const
{
    return m_AccNo;
}

void Account::AccumulateInterest()
{
}

void Account::Withdraw(float amount)
{
    if (amount < m_Balance) {
        m_Balance -= amount;
    }
    else {
        std::cout << "Insufficent Fund!!!" << std::endl;
    }
}

void Account::Desposit(int amount)
{
    m_Balance += amount;
}
