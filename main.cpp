#include <iostream>
#include "Money.h"
#include "Account.h"
int main(){
    Money starting(300,23);
    Account account(starting);
    std::cout<< account <<std::endl;

    Money depo1(200,00);
    Money depo2(300,24);
    Money depo3(501,22);
    account.makeDeposit(depo1);
    account.makeDeposit(depo2);
    account.makeDeposit(depo3);
    std::cout<< account <<std::endl;

    Money with1(300,10);
    Money with2(201,34);
    account.makeWithdrawals(with1);

    account.makeWithdrawals(with2);
    std::cout<< account <<std::endl;



    return 0;
}