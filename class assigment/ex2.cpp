#include <iostream>
#include <cstring>
using namespace std;

class Account{
    public:
    char* name;
    int accountNo;
    int balance;

    Account(char* Name = "Ana", int accountNo = 111, int balance = 200)
    {
        int n = strlen(Name);
        name = new char[n + 1];
        strcpy(name, Name);

        this->accountNo = accountNo;
        this->balance = balance;
    }
    Account(Account& right)
    {
        int n = strlen(right.name);
        name = new char[n + 1];
        strcpy(name, right.name);

        accountNo = right.accountNo;
        balance = right.balance;
    }
    ~Account()
    {
        delete[]name;
    }

    void Print()
    {
        cout << "Name: " << name;
        cout << "Acconut number: " << accountNo;
        cout << "Balance: " << balance;
    }
    void debit(int amount)
    {
        balance = balance + amount;
    }
    void credit(int amount)
    {
        balance = balance - credit;

    }
};

int main()
{
    Account a1;
    Account a2 = ("ema", 21, 1111)
    Accouny a3 = a2;
}
