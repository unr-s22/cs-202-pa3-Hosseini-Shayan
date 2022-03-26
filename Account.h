#include "Money.h"
#ifndef ACCOUNT_H
#define ACCOUNT_H


<<<<<<< HEAD
class Account {
private:
=======
class Account{
>>>>>>> d94566af8e926e4324440b3cb6bc649498c07deb
    Money balance;
    std::vector<Money> deposit;
    std::vector<Money> withdrawal;
    bool d, w;
<<<<<<< HEAD

=======
>>>>>>> d94566af8e926e4324440b3cb6bc649498c07deb
public:
    Account(Money M);
    void makeDeposit(Money M);
    void makeWithdrawals(Money M);
<<<<<<< HEAD
	friend std::ostream& operator <<(std::ostream& out, const Account& m);
};

=======
    friend std::ostream& operator <<(std::ostream& out, const Account& thisAccount);
};
>>>>>>> d94566af8e926e4324440b3cb6bc649498c07deb


/*
 * *a constructor that takes an instance of the Money class to provide an initial balance
 * makeDeposit and makeWithdrawals: these functions each have one argument, an instance of the Money class
 * each deposit and withdrawal must be stored in a corresponding vector of type std::vector<Money>
 * when a deposit or withdrawal is made, an internal boolean flag should be set indicating that the balance needs to be updated
 * when any method requests the current balance, the balance should be recalculated if the flag is true. Otherwise, the balance should just be returned. This approach allows the system to accept multiple deposits and withdrawals and only recalculate the balance when the balance is requested
 * an overload of the << operator that prints the following, assuming that the Account instance account has had three deposits and one withdrawal:
*/

#endif
