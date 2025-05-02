#include <iostream>
using namespace std;

struct Professor{
    int id;
    string name;

    void inputData()
    {
        cout << "Enter professor name and id: ";
        cin >> name >> id;
    }
};
struct Course{
    string name;
    int credits;
    Professor professor[3];

    void input()
    {
        cout << "Enter name of course: "; 
        cin >> name;
        cout << "Enter credits of course: "; 
        cin >> credits;
        for(int i = 0; i < 3; i++){
        cout << "\nEnter professor information";
        professor[i].inputData();
        }
    }

    void output()
    {
        cout << "Name of course: " << name << endl;
        cout << "Credits of course: " << credits << endl;
        for(int i = 0; i < 3; i++)
        {
            cout << "Name of prof: " << professor[i].name << "\tProf id:" << professor[i].id << endl;
        }
    }
};

int main()
{
    Course c[3];
    cout << "Enter info about courses: " << endl;
    for(int i = 0; i < 3; i++)
    {
        c[i].input();
    }
   

    cout << "Info about courses: " << endl;
    for(int i = 0; i < 3; i++)
    {
        c[i].output();
    }

    return 0;
}