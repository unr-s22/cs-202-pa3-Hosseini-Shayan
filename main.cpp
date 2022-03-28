#include <iostream>
#include "Money.h"
#include "Account.h"

int main(){
    
	// account tests
	Account account(Money(300,23));
    std::cout<< account <<std::endl;

    account.makeDeposit(Money(200,00));
    account.makeDeposit(Money(300,24));
    account.makeDeposit(Money(501,22));
    std::cout<< account <<std::endl;

    account.makeWithdrawals(Money(300,10));
    account.makeWithdrawals(Money(201,34));
    std::cout<< account <<std::endl;


	// money relational operator tests
	Money m(4, 15);
	Money n(3, 27);

	std::cout << "Relational Operator Tests\n" << std::endl;

	// if m < n returns false, pass test
	if (!(m < n))
	{
		std::cout << "Test 1 Pass" << std::endl;
	}
	else
	{
		std::cout << "Test 1 Fail" << std::endl;
	}

	// if m > n returns true, pass test
	if (m > n)
	{
		std::cout << "Test 2 Pass" << std::endl;
	}
	else
	{
		std::cout << "Test 2 Fail" << std::endl;
	}

	// if m <= n returns false, pass test
	if (!(m <= n))
	{
		std::cout << "Test 3 Pass" << std::endl;
	}
	else
	{
		std::cout << "Test 3 Fail" << std::endl;
	}

	// if m >= n returns true, pass test
	if (m >= n)
	{
		std::cout << "Test 4 Pass" << std::endl;
	}
	else
	{
		std::cout << "Test 4 Fail" << std::endl;
	}

	// if m != n returns true, pass test
	if (m != n)
	{
		std::cout << "Test 5 Pass" << std::endl;
	}
	else
	{
		std::cout << "Test 5 Fail" << std::endl;
	}

	// if m == n returns false, pass test
	if (!(m == n))
	{
		std::cout << "Test 6 Pass" << std::endl;
	}
	else
	{
		std::cout << "Test 6 Fail" << std::endl;
	}

    return 0;
}