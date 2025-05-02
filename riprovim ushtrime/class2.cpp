#include <iostream>
using namespace std;

class Student{
    private:
    int id;
    string name;
    int age;
    int grades[4];

    public:

    void input()
    {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter grades: ";
        for(int i = 0; i < 4; i++)
        {
            cin >> grades[i];
        }
    }

    void output()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grades: ";
        for(int i = 0; i < 4; i++)
        {
            cout << grades[i] << endl;
        }
        cout << "GPA: " << findGpa() << endl;
    }

    double findGpa()
    {
        double sum = 0;
        for(int i = 0; i < 4; i++)
        {
            sum = grades[i] + sum;
        }
        return sum / 4;
    }

};

int main()
{
    Student s[3];

    for(int i = 0; i < 3; i++)
    {
        s[i].input();
    }

    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        if(s[i].findGpa() > s[max].findGpa())
        {
            max = i;
        }
    }

    cout << "\nStudent with the highest GPA:" << endl;
    s[max].output();
    
    return 0;
}