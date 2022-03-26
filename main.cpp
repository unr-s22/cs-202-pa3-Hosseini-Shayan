#include <iostream>
#include "Money.h"
#include "Account.h"
int main(){
    Money mon(100,5);
    Account account(mon);

    std::cout<< account <<std::endl;
    return 0;
}