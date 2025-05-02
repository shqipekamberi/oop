//create array of books, input data for each of them and print only data for books that has author a spesific author example "deitel"
//2.modify class book such that the author is an object of the type person which is a class with the following members name, sname, age

#include <iostream>
using namespace std;

class Book{
    public: 
    string title;
    string author;

    public:
    void inputData()
    {
        cout << "Title: ";
        cin >> title;
        cout << "Author: ";
        cin >> author;
    }
    //void output()

};

int main()
{
    Book books[2];
    for(int i = 0 ; i < 2; i++)
    {
        books[i].inputData();
    }
    cout << "Book by author: " << endl;
    for(int i = 0; i < 2; i++)
    {
        if(books[i].author == "Deitel")
        {
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
        }
    }
    
    return 0;

}