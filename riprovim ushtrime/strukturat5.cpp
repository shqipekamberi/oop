#include <iostream>
using namespace std;

struct Faculty{
    string name;
    string university;
    int year;
};

void inputInfo(Faculty& f)
{
    cout << "Enter name of faculty: ";
    cin >> f.name;
    cout << "Enter university: ";
    cin >> f.university;
    cout << "Enter year: ";
    cin >> f.year;
}

void outputInfo(Faculty& f)
{
    cout << f.name << ":" << f.university << ":" << f.year << endl;
}

int main()
{
    Faculty f1, f2, f3;
    cout << "Enter info about 1: ";
    inputInfo(f1);
    cout << "Enter info about 2: ";
    cout << "Name: ";
    cin >> f2.name;
    cout << "University: ";
    cin >> f2.university;
    cout << "Year: ";
    cin >> f2.year;

    cout << "Enter info about 3: ";
    inputInfo(f3);

    cout << "Faculties that are in SEEU: " << endl;
    if(f1.university == "seeu")
    {
        outputInfo(f1);
    } 
    if(f2.university == "seeu")
    {
        cout << f2.name << ":" << f2.university << ":" << f2.year << endl;
    } 
    if(f3.university == "seeu")
    {
        outputInfo(f3);
    } 

    return 0;
}