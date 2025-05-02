#include <iostream>
using namespace std;

struct Student{
    int id;
    char name[50];
    float gpa;
};

void inputData(Student &s1)
{
    cout << "Enter id, name, gpa: " << endl;
    cin >> s1.id >> s1.name >> s1.gpa;
}
void outputData(Student s1)
{
    cout << endl;
    cout << "Id: " << s1.id << " Name: " << s1.name << " Gpa: " << s1.gpa << endl;
}
int main()
{
    Student s1;
    inputData(s1);
    outputData(s1);

    return 0;
}