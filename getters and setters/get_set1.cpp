#include <iostream>
#include <cstring>
using namespace std;

class person{
public:
    person(char* name = (char*)"Myname", string add = "Tetovo", int year = 2000)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->add = add;
        this->year = year;
    }

    void setName(char *name)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    char* getName(){return name;}

    private:
    char* name; //midterm with this attribute
    string add;
    int year;

};

int main()
{
    person p1, p2((char*)"Majlinda", "Gostivar");
    cout << "\nPerson1: " << p1.getName();


    cout << "\nPerson2: " << p2.getName();

    cout << "\nRead a new name for p1: ";
    char name[10];
    cin >> name;
    p1.setName(name); 
    cout << "\nPerson1: " << p1.getName();
    return 0;
}