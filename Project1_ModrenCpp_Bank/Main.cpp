#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"
#include <typeinfo> // to get the type of the data

int main(void) {

	Checking a1("Bob",500.0f,50);
	Account* acc = &a1;
	Transaction(&a1);
	int a{};
	float b{};

	const std::type_info& ti = typeid(a);
	const std::type_info& tf = typeid(b);
	const std::type_info& ts = typeid(a1);
	const std::type_info& ta = typeid(acc);
	const std::type_info& tas = typeid(*acc);
	std::cout << ti.name() << std::endl;
	std::cout << tf.name() << std::endl;
	std::cout << ts.name() << std::endl;
	std::cout << ta.name() << std::endl;
	std::cout << tas.name() << std::endl;

	/*
	* if you add a virtual keyword n the base class
	* then compiler wouldn't bind the functions
	* at compile time.
	* IMPORTANT:
	* It also increase the memory usage by
	* 4 bytes in 32 bit system
	* 8 bytes in 64 bit system
	*/
	/*
	* If you didn't make base class destructor
	* as a virtual destructor then the compiler will
	* statically link the delete call with the destructor
	* of Base call even you pass the address of dervied class
	*/
	//Account *a = new Savings("larry",300,0.004); // Upcasting 

	/*
	* Casting is done only with pointers and references
	* -------------------------------------------------
	* UpCasting - implcitly done by compiler
	* DownCasting - explicitly done by user
	*/
	//Savings* s = static_cast<Savings*>(a); // DownCasting
	//Transaction(s);
	//Checking* c = static_cast<Checking*>(a); // Not Good as the object is not a checking object so it will call savings accounts constructor and destructor
	//Transaction(c);
	//delete a;
	return 0;
}