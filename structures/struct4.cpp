#include <iostream>
using namespace std;

struct Courses{
    char name[100];
    int grade;  

    void input(){
        cout << "Name: ";
        cin >> name;
        cout << "Grade: ";
        cin >> grade;
    } 
};

int main()
{
    Courses c[100];
    int n, gpa;
    cout << "Enter number of courses: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        c[i].input();
        gpa += c[i].grade;
    }

    cout << "\nGPA: " << gpa / n;

}