#pragma once
#include "Account.h"

//constexpr float MINIMUM_BALACE{ 50.0f };

class Checking :
    public Account
{
    int m_MinBalance;
public:
    /*
    * IN C++11 child class can inherit the base class constructor
    * But this will only taken care when the child class doesn't
    * have its own member variable justit has to initilize the
    * base class member variables.
    */
    using Account::Account; // Inherits all constructor of Base class
    /*
    * Before C++11
    Checking(const std::string& Name, float Balance);
    */
    Checking(const std::string& Name, float Balance,int MinBalance);
    ~Checking();

    int getMinBalance() const;
    void Withdraw(float);
};

