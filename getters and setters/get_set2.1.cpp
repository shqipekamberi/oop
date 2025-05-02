//create class called human with priavte members name, surname, age. create public getters, setters, input output functions.
//on the mian program create several objects and access/modify values using getters and setters

#include <iostream>
#include <cstring>
using namespace std;

class Human{
    private:
    string name;
    string surname;
    int age;

    public:
    /*Human(char* = (char*) "Era", string surname = "Fejzullai", int age = 18)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->surname = surname;
        this->age = age;
    }*/

    Human(){
        name = "Test";
        surname = "Test";
        age = 0;
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setSurname(string surname)
    {
        this->surname = surname;
    }
    string getSurname(){
        return surname;
    }

    void setName(int age)
    {
        this->age = age;
    }
    int getAge(){
        return age;
    }

};

int main()
{
    Human h1;

    h1.setName("Dorant");
    cout << h1.getName();

    return 0;
}