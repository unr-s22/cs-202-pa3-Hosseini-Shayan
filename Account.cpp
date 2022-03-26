#include "Account.h"
#include "Money.h"

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

std::ostream& operator <<(std::ostream& out, const Account& m){

    if(m.d == true){
        for(Money m : Account::deposit ){
            Account::balance = Account::balance + m;
        }
    }

    if(Account::w == true){
        for(Money m : Account::withdrawal ){
            Account::balance = Account::balance - m;
        }
    }

    out
    << "Account Details\n"
    << "--------------------------\n"
    << "Current Balance:" << m.balance
    << "--------------------------\n"
    << "Number of Deposits: " << Account::deposit.size()
    << "--------------------"
    ;

    return out;
}
