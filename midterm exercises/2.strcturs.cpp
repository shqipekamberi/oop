//midterm example 1
#include <iostream>
#include <cstring>
using namespace std;

struct Subject{
    string name;
    int credits, grade; 
    
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter credits: ";
        cin >> credits;
        cout << "Enter grade: ";
        cin >> grade;
    }
    void output()
    {
        cout << "Name of subject: " << name << endl;
        cout << "Credits: " << credits << endl;
        cout << "Grade: " << grade << endl; 
    }
};
int main()
{
    Subject s[3];

    for(int i = 0; i < 3; i++)
    {
        s[i].input();
    }
    
    cout << "Subjects with credits above 4: " << endl;
    for(int i = 0; i < 3; i++)
    {
        if(s[i].credits > 4)
        {
            s[i].output();
        }
    }

    return 0;
}