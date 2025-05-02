#include <iostream>
using namespace std;

struct Professor{
    int id;
    string name;
};
struct Course{
    string name;
    int credits;
    Professor professor;

    void input()
    {
        cout << "Enter id of professor: ";
        cin >> professor.id;
        cout << "Enter name of prof: ";
        cin >> professor.name;
        cout << "Enter name of course: "; 
        cin >> name;
        cout << "Enter credits of course: "; 
        cin >> credits;
    }

    void output()
    {
        cout << "Id of prof: " << professor.id << endl;
        cout << "Name of prof: " << professor.name << endl;
        cout << "Name of course: " << name << endl;
        cout << "Credits of course: " << credits << endl;
    }
};

int main()
{
    Course c1, c2;
    cout << "Enter info about course 1: " << endl;
    c1.input();
    cout << "Enter info about course 2: " << endl;
    c2.input();

    cout << "Info about course 1: " << endl;
    c1.output();
    cout << "Info about course 2: " << endl;
    c2.output();

    return 0;
}