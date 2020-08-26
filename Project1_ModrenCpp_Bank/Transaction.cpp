#include "Transaction.h"
#include "Checking.h"
#include <typeinfo>

void Transaction(Account* obj)
{
	std::cout << "Transaction Stated" << std::endl;
	std::cout << "Account Number:" << obj->get_AccountNumber() << std::endl;
	std::cout << "Account Holder Name:" << obj->get_Name() << std::endl;
	std::cout << "Initial Balance:"<< obj->get_Balance() <<std::endl;
	std::cout << "InterestRate:" << obj->get_InterestRate() << std::endl;
	obj->AccumulateInterest();
	std::cout << "Balance:" << obj->get_Balance() << std::endl;
	obj->Desposit(100);
	/*
	* SO Here we are blindly type casting
	* savings account to checking account
	* thats why we are getting some garbage value
	* 
	* Solution for this
	* C++11 introduced a new concept RTTI
	* Lets go back to main and check how it works
	*/
	//if (typeid(*obj) == typeid(Checking)) {
	//	Checking* ck = static_cast<Checking*>(obj);
	//	std::cout << "Minimum Balance:" << ck->getMinBalance() << std::endl;
	//}
	/*
	* OR you can use Dynamic casting to check the pointer type
	*/
	Checking* ck = dynamic_cast<Checking*>(obj);
	if (ck != nullptr) {
		std::cout << "Minimum Balance:" << ck->getMinBalance() << std::endl;
	}

	obj->Withdraw(300);
	//if (obj != nullptr) {
		std::cout << "Balance:" << obj->get_Balance() << std::endl;
	//}
	std::cout << "Transaction End" << std::endl;
}
