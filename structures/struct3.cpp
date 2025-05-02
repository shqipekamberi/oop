#include <iostream>
using namespace std;

struct Student{
    int id;
    char name[50];
    float gpa;
void inputData()
{
    cout << "Enter id, name, gpa: " << endl;
    cin >> id >> name >> gpa;
}
void outputData()
{
    cout << endl;
    cout << "Id: " << id << " Name: " << name << " Gpa: " << gpa << endl;
}
};
int main()
{
    Student s1;
    s1.inputData();
    s1.outputData();

    return 0;
}