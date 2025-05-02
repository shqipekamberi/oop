#include <iostream>
using namespace std;

struct Faculty{
    string name, university;
    int year;
};

void inputInfo(Faculty& faculty)
{
    cout << "Enter name: ";
    cin >> faculty.name;
    cout << "Enter university: ";
    cin >> faculty.university;
    cout << "Enter year: ";
    cin >> faculty.year;
}
void printInfo(Faculty& faculty)
{
    cout << "Name: " <<  faculty.name << endl;
    cout << "University: " << faculty.university << endl;
    cout << "Year: " << faculty.name << endl;
}

int main()
{
    Faculty f1, f2, f3;
    cout << "Enter info about faculty 1: " << endl;
    inputInfo(f1);

    cout << "Enter info about faculty 2: " << endl;
    cout << "Enter name: ";
    cin >> f2.name;
    cout << "Enter university: ";
    cin >> f2.university;
    cout << "Enter year: ";
    cin >> f2.year;

    cout << "\nEnter info about faculty 3: " << endl;
    inputInfo(f3);

    cout << "University 'seeu': " << endl;
    if(f1.university == "seeu")
    {
        printInfo(f1);
    }
    if(f2.university == "seeu")
    {
        cout << "Name: " <<  f2.name << endl;
        cout << "University: " << f2.university << endl;
        cout << "Year: " << f2.name << endl;
    }
    if(f3.university == "seeu")
    {
        printInfo(f3);
    }

    return 0;
}