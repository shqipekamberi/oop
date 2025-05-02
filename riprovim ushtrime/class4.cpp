#include <iostream>
using namespace std;

class Person{
    public:
    string name, sname;
    int age;
};
class Book{
    public:
    string title;
    int year;
    Person author;

    void input()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter author name: ";
        cin >> author.name;
        cout << "Enter author sname: ";
        cin >> author.sname;
        cout << "Enter author age: ";
        cin >> author.age;
    }
    void output()
    {
        cout << "Title: " << title << endl;
        cout << "Year: " << year <<  endl;
        cout << "Author name: " << author.name <<  endl;
        cout << "Author sname: " << author.sname <<  endl;
        cout << "Author age: " << author.age <<  endl;
    }
};

int main()
{
    Book books[3];
    for(int i = 0; i < 3; i++)
    {
        books[i].input();
    }

    cout << "Books whose author is Dietel are: " << endl;
    for(int i  = 0; i < 3; i++)
    {
        if(books[i].author.sname == "Dietel")
        {
            books[i].output();
        }
    }

    return 0;
}