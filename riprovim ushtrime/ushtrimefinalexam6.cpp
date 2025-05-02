#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name, title;
    int yearProd;
    string category;

    ofstream out("Books.txt", ios::out);

    if(!out)
    {
        cerr << "\nFile nor opened!";
        exit(1);
    }

    cout << "Input name, title, year of production, category: " << endl;
    while(cin >> name >> title >> yearProd >> category)
    {
        out << name << " " << title << " " << yearProd << " " << category << endl;
        cout << "\n?";
    }

    out.close();

    ifstream in("Books.txt", ios::in);
    if(!in)
    {
        cerr << "\nFile not opened!";
        exit(1);
    }

    cout << "\n" << left << setw(15) << "BookName" << setw(15) << "Title" << setw(3) << "YearOfProd" << setw(5) << right << "Category" << endl;

    while(in >> name >> title >> yearProd >> category)
    {
        if(category, "programming" == 0 && yearProd >= 2020)
        {
            cout << "\n" << left << setw(15) << name << setw(15) << title << setw(3) << yearProd << setw(5) << right << category << endl;
        }
    }
    
    return 0;
}