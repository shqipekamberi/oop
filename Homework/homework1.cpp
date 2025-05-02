//1.Write a C++ program to create a structure called Student with attributes name, age, and grade. 
//Then, create an array of 5 Student objects and display their details. (Use functions for printing the data)
#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int grade;

    void inputData()
    {
        cout << "\nName: ";
        cin >> name;
        cout << "\nAge: ";
        cin >> age;
        cout << "\nGrade: ";
        cin >> grade;
    }

    void printData()
    {
        cout << "Name: " << name << " Age: " << age << " Grade: " << grade << endl;
    }
};

int main()
{
    Student students[5];

    for(int i = 0; i < 5; i++)
    {
        students[i].inputData();
    }

    for(int i = 0; i < 5; i++)
    {
        students[i].printData();
    }
    return 0;
}