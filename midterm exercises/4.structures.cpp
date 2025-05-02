#include <iostream>
using namespace std;

struct Person{
    string name;
    string proffesion;
    int experience;

    void input()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Experience: ";
        cin >> experience;
        cout << "Proffesion: ";
        cin >> proffesion;
    }

    void output()
    {
        cout << "\nName: " << name <<  endl;
        cout << "Experience: " << experience <<  endl;
        cout << "Proffesion: " << proffesion <<  endl;
    }
};
int main()
{
    Person p[3];

    for(int i = 0; i < 3; i++)
    {
        p[i].input();
    }

    cout << "Person with proffesion proffesor and experience above 10 years: ";
    for(int i = 0; i < 3; i++)
    {
        if(p[i].proffesion == "professor" && p[i].experience > 10)
        {
            p[i].output();
        }
    }

    return 0;
}