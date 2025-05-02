#include <iostream>
using namespace std;

class Faculty{
    string name;
    string university;
    int year;

    public:
    Faculty(string name, string university, int year)
    {
        this->name = name;
        this->university = university;
        this->year = year;
    }
    string getName()
    {
        return name;
    }
    string getUniversity()
    {
        return university;
    }
    int getYear()
    {
        return year;
    }

    void setName(string name)
    {
        this->name = name;
    }
    void setUniversity(string university)
    {
        this->university = university;
    }
    void setYear(int year)
    {
        this->year = year;
    }

    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter university: ";
        cin >> university;
        cout << "Enter year: ";
        cin >> year;
    }
    void output()
    {
        cout << name << ":" << university << ":" << year << endl;
    }
};

class CSTFaculty : public Faculty{
    string department;
    int nr_students;

    public:
    CSTFaculty(string department, int nr_students)
    {
        this->department = department;
        this->nr_students = nr_students;
    }
    CSTFAculty(CSTFAculty& other)
    {
        this->department = other.department;
        this->nr_students = other.nr_students;
    }

    string getDepartment()
    {
        return department;
    }
    int getNrStudents()
    {
        return nr_students;
    }

    void setDepartment(string department)
    {
        this->department = department;
    }
    void setNrStudents(int nr_students)
    {
        this->nr_students = nr_students;
    }

    void input()
    {
        cout << "Enter department: ";
        cin >> department;
        cout << "Enter nr of studnets: ";
        cin >> nr_students;
    }
    void output()
    {
        cout << department << ":" << nr_students << endl;
    }
};

int main()
{
    CSTFaculty f1;

    f1.input();
    f1.output();

    return 0;
}