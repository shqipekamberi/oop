#include <iostream>
using namespace std;
struct StudentRec{
    char *name;
    double hw[3];
    double test[2];
    double ave;
};
void input(StudentRec &s)
{
    char n[10];

    cout << "\nInput name of s2: ";
    cin.getline(s.name, 10);
    s.name = (char*)n;
    cout << "\nInput hw grades: ";
    for(int i = 0; i < 3; i++)
        cin >> s.hw[i];
    cout << "\nInput test grades: ";
    for(int i = 0; i < 2; i++)
        cin >> s.test[i];
    
}

int main()
{
    StudentRec s1, s2;

    input(s2);
    
    double sum = 0;
    s2.ave = 0;
    for(int i  = 0; i < 3; i++)
        sum += s2.hw[i];

    for(int i  = 0; i < 3; i++)
        sum += s2.test[i];

    s2.ave = sum / 5;

    cout << "\nStudent s2 data: "
    << "\nName: " << s2.name
    << "\nAverage: " << s2.ave << endl;

    s1 = s2;
    cout << "\nAfter we initialize s1=s2, names of s1 = names of s2: " << s1.name << "  " << s1.ave << endl;
    return 0;
}