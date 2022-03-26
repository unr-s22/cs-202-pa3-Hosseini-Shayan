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

std::ostream& operator <<(std::ostream& out, const Account& thisAccount){

<<<<<<< HEAD
    if(m.d == true){
        for(Money m : Account::deposit ){
            Account::balance = Account::balance + m;
=======

   if(thisAccount.d == true){
        for(Money m : thisAccount.deposit ){
            thisAccount.balance = thisAccount.balance + m;
>>>>>>> d94566af8e926e4324440b3cb6bc649498c07deb
        }
    }

    if(thisAccount.w){
        for(Money m : thisAccount.withdrawal ){
            thisAccount.balance = thisAccount.balance - m;
        }
    }

    out
    << "Account Details\n"
    << "--------------------------\n"
    << "Current Balance:" << thisAccount.balance
    << "--------------------------\n"
    << "Number of Deposits: " << thisAccount.deposit.size()
    << "\n--------------------"
    //<< "(" << thisAccount.deposit.<< ")"
    ;

    return out;
}
