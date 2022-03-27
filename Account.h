#include "Money.h"
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
	Money balance;
	std::vector<Money> deposit;
	std::vector<Money> withdrawal;
	bool d, w;
public:
	Account(Money M);
	void makeDeposit(Money M);
	void makeWithdrawals(Money M);
	friend std::ostream& operator <<(std::ostream& out, Account& thisAccount);
};

#endif