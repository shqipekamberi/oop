#include <iostream>
using namespace std;

struct Transaction{
    int transactionNo, amount;
    string transactionType;

    void printTransaction()
    {
        cout << "Transaction number: " << transactionNo << endl;
        cout << "Amount: " << amount << endl;
        cout << "Transaction type: " << transactionType << endl;
    }
};
struct Client{
    string name, bank;
    int age, noOfTransactions;
    Transaction listOftTransactions[3];

    int transactionSum()
    {
        int sum;
        for(int i = 0; i < 3; i++)
        {
            sum += listOftTransactions[i].amount;
        }
        return sum;
    }
    void printClient()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Bank: " << bank << endl;
        cout << "Total Transactions: " << noOfTransactions << endl;
        cout << "Transaction sum: " << transactionSum() << endl;
        cout << "Transactions: " << endl;
        for(int i = 0; i < 3; i++)
        {
            listOftTransactions[i].printTransaction();
        }
    }
};

// void unpopularClient(Client c[], int size)
// {
//     int min = c;
//     for(int i = 0; i < 3; i++)
//     {
//         if(min == c[i])
//         {
//             cout << c[i];
//         }
//     }

// }
// void unpopularClient(Client c[], int size)
// {
//     int min = c;
//     for(int i = 0; i < 3; i++)
//     {
//         if(min == c[i])
//         {
//             cout << c[i];
//         }
//     }

// }

void unpopularClient(Client c[], int size) {
    int minTransactions = c[0].noOfTransactions;
    for(int i = 1; i < size; i++) {
        if(c[i].noOfTransactions < minTransactions) {
            minTransactions = c[i].noOfTransactions;
        }
    }

    for(int i = 0; i < size; i++) {
        if(c[i].noOfTransactions == minTransactions) {
            cout << "Unpopular client: " << c[i].name << endl;
        }
    }
}

int main()
{
    Client c[3];
    for(int i = 0; i < 3; i++)
    {
        cout << "Name: ";
        cin >> c[i].name;
        cout << "Age: ";
        cin >> c[i].age;
        cout << "Bank: ";
        cin >> c[i].bank;
        cout << "Total transactions: ";
        cin >> c[i].noOfTransactions;
        

        for(int j = 0; j < 3; j++) {
            cout << "Transaction number: ";
            cin >> c[i].listOftTransactions[j].transactionNo;
            cout << "Amount: ";
            cin >> c[i].listOftTransactions[j].amount;
            cout << "Transaction type: ";
            cin >> c[i].listOftTransactions[j].transactionType;
        }
    }

    // c.listOftTransactions[0] = {1, 200, "Deposit"};
    // c.listOftTransactions[1] = {2, 150, "Withdrawal"};
    // c.listOftTransactions[2] = {3, 100, "Transfer"};

    unpopularClient(c, 3);
    // for(int i = 0; i < 3; i++)
    // {
    //     c[i].printClient();
    // }


    return 0;
}
//doesnt work on visual studio