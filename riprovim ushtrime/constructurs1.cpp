#include <iostream>
using namespace std;

class Person
{
    public:
    string name, sname;
    int age;

    Person()
    {
        name = "";
        sname = "";
        age = 0;
    }
    Person(string name, string sname, int age)
    {
        this->name = name;
        this->sname = sname;
        this->age = age;
    }

    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter surname: ";
        cin >> sname;
        cout << "Enter age: ";
        cin >> age;
    }
    void output()
    {
        cout << "Name: " << name << endl;
        cout << "Surname: " << sname <<  endl;
        cout << "Age: " << age << endl;
    }

};
class Book{
    public:
    string title;
    Person author;
    int yearProd;

    Book()
    {
        title = "";
        yearProd = 0;
    }
    Book(string title, Person author, int yearProd)
    {
        this->title = title;
        this->author = author;
        this->yearProd = yearProd;
    }

    void input()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter author info: ";
        author.input();
        cout << "Enter year of production: ";
        cin >> yearProd;
    }

    void output()
    {
        cout << "Title: " << title << endl;
        cout << "Author: ";
        author.output();
        cout << "Year of production: " << yearProd << endl;
    }
};

int main()
{
    // Book book1, book2, book3("Song", "Dietel", "ABC", 2000);

    // cout << "ENTER BOOK 1: " << endl;
    // book1.input();
    
    // cout << "ENTER BOOK 2: " << endl;
    // cin >> book2.title >> book2.author >> book2.ISBN >> book2.yearProd;

    // cout << "BOOK 1: " << endl;
    // book1.output();

    // cout << "BOOK 2: " << endl;
    // cout << book2.title << "\n" << book2.author << "\n" << book2.ISBN << "\n" << book2.yearProd << endl;

    // cout << "BOOK 3: " << endl;
    // book3.output();

    Book books[2];

    for(int i = 0; i < 2; i++)
    {
        books[i].input();
    }

    for(int i = 0; i < 2; i++)
    {
        if(books[i].author.sname == "Dietel")
        {
            books[i].output();
        }
    }

    return 0; 

}