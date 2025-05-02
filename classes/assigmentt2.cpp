//create array of books, input data for each of them and print only data for books that has author a spesific author example "deitel"
//2.modify class book such that the author is an object of the type person which is a class with the following members name, sname, age

#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    string sname;
    int age;

    Person(string name, string sname, int age)
    {
        this->name = name;
        this->sname = sname;
        this->age = age;
    }

};
class Book{
    public:
    string title;
    Person author;

    Book(string title, Person author)
    {
        this->title = title;
        this->author = author;
    }
    void inputData()
    {
        cout << "Title: ";
        cin >> title;
        cout << "Author: ";
        cin >> author.name;
        cin >> author.sname;
        cin >> author.age;
    }

};

int main()
{
    Book books[10];
    for(int i = 0 ; i < 10; i++)
    {
        books[i].inputData();
    }
    cout << "Book by author Deitel: ";
    for(int i = 0; i < 10; i++)
    {
        if(books[i].author == "Deitel")
        {
            cout << "Title: " << books[i].title;
        
        }
    }
}