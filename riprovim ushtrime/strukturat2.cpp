#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    int grades[5];
    double gpa;

    double calcGPA(){
        double sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum = sum + grades[i];
        }
        gpa = sum / 5;
        return gpa;
    }

    void inputData(){
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Input grades: ";
        for(int i = 0; i < 5; i++)
        {
            cin >> grades[i];
        }
    }

    void outputData()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Grades: ";
        for(int i = 0; i < 5; i++)
        {
            cout << grades[i] << endl;
        }
        cout << "GPA: " << calcGPA() << endl;
    }

};

int main()
{
    Student s[3];

    cout << "Enter info about students: ";
    for(int i = 0; i < 3; i++)
    {
        s[i].inputData();
    }

    cout << "Students with gpa bigger than 7.5: " << endl;
    for(int i = 0; i < 3; i++)
    {
        if(s[i].calcGPA() > 7.5)
        {
            s[i].outputData();
        }
    }

    return 0;
}

