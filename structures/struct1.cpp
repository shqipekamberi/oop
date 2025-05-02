//create structure with attributes id, name, gpa, input and output data
#include <iostream>
using namespace std;

struct Student{
    int id;
    char name[50];
    float gpa;
};

int main()
{
    Student s1;
    cout << "Enter id, name, gpa " << endl;
    cin >> s1.id >> s1.name >> s1.gpa;

    cout << endl;
    cout << "Id: " << s1.id << " Name: " << s1.name << " Gpa: " << s1.gpa << endl;

    return 0;
}