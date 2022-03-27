#include "Account.h"

Account::Account(Money M) {
	balance = M;
}

void Account::makeDeposit(Money M) {
	deposit.push_back(M);
	d = true;
}

void Account::makeWithdrawals(Money M) {
	withdrawal.push_back(M);
	w = true;
}

std::ostream& operator <<(std::ostream& out, Account& thisAccount) {

	if (thisAccount.d == true) {
		for (Money m : thisAccount.deposit) {
			thisAccount.balance = thisAccount.balance + m;
		}
        thisAccount.d=false;
	}

	if (thisAccount.w) {
		for (Money m : thisAccount.withdrawal) {
			thisAccount.balance = thisAccount.balance - m;
        }
        thisAccount.w=false;
    }

	out
		<< "Account Details\n"
		<< "--------------------------\n"
		<< "Current Balance:" << thisAccount.balance

		<< "--------------------------\n"
		<< "Number of Deposits: " << thisAccount.deposit.size()
		<< "\n--------------------\n";
    for(int i=0; i<thisAccount.deposit.size(); i++){
        out<< "("<<i +1 <<") " << thisAccount.deposit.at(i);
    }

    out
        << "--------------------------\n"
        << "Number of Withdrawals: " << thisAccount.withdrawal.size()
        << "\n--------------------------\n";

    for(int i=0; i<thisAccount.withdrawal.size(); i++){
        out<< "("<<i +1 <<") " << thisAccount.withdrawal.at(i);
    }

	return out;
}

