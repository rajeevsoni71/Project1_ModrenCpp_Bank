#pragma once
#include <iostream>
#include <string>
class Account
{
	std::string m_Name;
	int m_AccNo;
	static int s_ANGenerator;
protected:
	float m_Balance;
public:
	Account(const std::string& Name, float Balance);
	virtual ~Account();
	
	//setter/ getter
	std::string get_Name() const;
	int get_Balance() const;
	int get_AccountNumber() const;

	//Features
	virtual void AccumulateInterest();
	virtual void Withdraw(float);
	void Desposit(int);
	virtual float get_InterestRate() const;

};
