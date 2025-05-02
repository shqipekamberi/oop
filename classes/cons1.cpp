//define class book with the following data: title, author, ISBN as string; year of production as int . 
//function members constructor with no arg, with input args, function input() and output()
#include <iostream>
#include <cstring>
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
    Book b1 = Book();
    Book b2 = Book("Book2","Author2", "id2", 2001);

    b1.output();
    b2.output();
    return 0;
}
