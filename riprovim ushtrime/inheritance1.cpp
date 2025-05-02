#include <iostream>
using namespace std;

class Human{
    private:
    int id;
    string name, sname;

    public:
    Human(int ids = 0, string n = "Unkown", string sn = "Unknown")
    {
        id = ids;
        name = n; 
        sname = sn;
    }
    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getSName()
    {
        return sname;
    }
    void setID(int id)
    {
        this->id = id;
    }
    void setName(string n)
    {
        name = n;
    }
    void setSName(string sn)
    {
        sname = sn;
    }
    void input()
    {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter surname: ";
        cin >> sname;
    }

    void output()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Surname: " << sname << endl;
    }
};

class Student : public Human{
    private:
    double gpa;

    public:
    Student(double gpa = 0.0)
    {
        this->gpa = gpa;
    }
    double getGPA()
    {
        return gpa;
    }
    void setGPA(double gpa)
    {
        this->gpa = gpa;
    }

    void input()
    {
        Human ::input();
        cout << "Enter GPA: ";
        cin >> gpa;
    }
    void output()
    {
        Human::output();
        cout << "GPA: " << gpa << endl;
    }
};

int main()
{
    // Student s1;

    // s1.input();
    // s1.output();

    Student students[3];

    for(int i = 0; i < 3; i++)
    {
        students[i].input();
    }

    cout << "Student with gpa higher than 8.5: " << endl;
    for(int i = 0; i < 3; i++)
    {
        if(students[i].getGPA() > 8.5)
        {
            students[i].output();
        }
    }

    return 0;
}