#include <iostream>
#include <cstring>
using namespace std;

struct Book{
    string name, author;
    int quantity;

    void printBook()
    {
        cout << "Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Quantity: " << quantity << endl;
    }    
};
void printCritical(Book b[], int size)
{
    for(int i = 0; i < 3; i++)
    {
        if(b[i].quantity < 10)
        {
            b->printBook();
        }
    }
}

int main()
{
    Book b[3];
    // b[0] = {"Jane", "Mocking", 5};
    // b[1]= {"Killing", "Austen", 12};
    // b[2] = {"Prog", "Olsen", 25};
    for(int i = 0; i < 3; i++)
    {
        cout << "Name: ";
        cin >> b[i].name;
        cout << "Author: ";
        cin >> b[i].author;
        cout << "Quantity: ";
        cin >> b[i].quantity;
    }

    cout << "\nBooks: \n";
    printCritical(b, 3);
    return 0;
}