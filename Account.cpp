#include "Account.h"

Account::Account(Money M){
    balance = M;
}

void Account::makeDeposit(Money M){
    deposit.push_back(M);
    d= true;
}

void Account::makeWithdrawals(Money M){
    withdrawal.push_back(M);
    w= true;
}

std::ostream& operator <<(std::ostream& out, const Account& thisAccount){


   if(Account::d == true){
        for(Money m : Account::deposit ){
            Account::balance = Account::balance + m;
        }
    }

    if(Account::w){
        for(Money m : Account::withdrawal ){
            Account::balance = Account::balance - m;
        }
    }


    out
    << "Account Details\n"
    << "--------------------------\n"
    << "Current Balance:" << thisAccount.balance
    << "--------------------------\n"
    << "Number of Deposits: " << Account::deposit.size()
    << "--------------------"
    ;

    return out;
}
