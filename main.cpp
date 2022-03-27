#include <iostream>
#include "Money.h"
#include "Account.h"

int main(){
    Account account(Money(300,23));
    std::cout<< account <<std::endl;

    account.makeDeposit(Money(200,00));
    account.makeDeposit(Money(300,24));
    account.makeDeposit(Money(501,22));
    std::cout<< account <<std::endl;

    account.makeWithdrawals(Money(300,10));
    account.makeWithdrawals(Money(201,34));
    std::cout<< account <<std::endl;

    return 0;
}