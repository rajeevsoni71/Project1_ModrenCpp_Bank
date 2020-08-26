#pragma once
#include "Account.h"
class Savings :
    public Account
{
    float m_IRate;
public:
    Savings(const std::string& Name, float Balance, float rate);
    ~Savings();

    //Features
    void AccumulateInterest() override final;
    float get_InterestRate() const override final;
};
