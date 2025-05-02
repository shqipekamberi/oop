#include <iostream>
using namespace std;

class Book{
    public:
    string title, author;
    int year;

    void input()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter year: ";
        cin >> year;
    }
    void output()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year <<  endl;
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
        if(books[i].author == "Dietel")
        {
            books[i].output();
        }
    }

    return 0;
}