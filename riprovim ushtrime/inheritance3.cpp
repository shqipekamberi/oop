#include <iostream>
using namespace std;

class Account{
    public:
    int accountNumber;
    double balanace;
};

class SavingsAccount : public Account{

};

class CheckingAccount : public Account{
    
};