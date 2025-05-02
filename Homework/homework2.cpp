/*2. Extend the previous program to include a nested structure. Define a structure called Address with attributes street, city, and zipcode. 
Modify the Student structure to include an Address object. Update the program to prompt the user to enter details for each student 
including their address, and then display all the student details.*/

#include <iostream>
using namespace std;

struct Address{
    string street;
    string city;
    int zipcode;
    void inputData(){
        cout << "Street: ";
        cin >> street;
        cout << "City: ";
        cin >> city;
        cout << "Zipcode: ";
        cin >> zipcode;
    }
};

struct Student{
    string name;
    int age;
    int grade;
    Address address;

    void inputData()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Grade: ";
        cin >> grade;
        cout << "\nAddress" << endl;
        address.inputData();
    }

    void printData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
        cout << "\nAddress " << endl;
        cout << "Street: " << address.street << endl;
        cout << "City: " << address.city << endl;
        cout << "Zipcode: " << address.zipcode << endl;
    }
};

int main()
{
    Student students[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter details for student " << i + 1 << ": " << endl;
        students[i].inputData();
    }

    for(int i = 0; i < 5; i++)
    {
        cout << "\nDetails of student " << i + 1 << ": " << endl;
        students[i].printData();
        cout << endl;
    }
    return 0;
}