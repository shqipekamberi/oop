//create an array of objects books and print their intialized data in screen
#include <iostream>
using namespace std;

class Book{
    private:
    string title;
    string author;
    string ISBN;
    int year;

    public:
    Book()
    {
        title = "Book1";
        author = "Author1";
        ISBN = "id1";
        year = 2000;

    }
    Book(string title, string author, string ISBN, int year)
    {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
        this->year = year;
    }

    void inputData()
    {
        cout << "Title: ";
        cin >> title;
        cout << "Author: ";
        cin >> author;
        cout << "ISBN: ";
        cin >> ISBN;
        cout << "Year of production: ";
        cin >> year;
    }
    void output(){
        cout << "\n----------------\n";
        cout << "Book name: " << title;
        cout << "Author name: " << author;
        cout << "ISBN: " << ISBN;
        cout << "Year of prod.: " << year;
    }
    
};


int main()
{
    Book books[10];
    for(int i = 0; i < 10; i++)
    {
        books[i].inputData();
    }
    for(int i = 0; i < 10; i++)
    {
        books[i].output();
    }
    return 0;
}