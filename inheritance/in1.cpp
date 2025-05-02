#include <iostream>
using namespace std;

class Human{
    private:
    int id;
    string name, surname;

    public:

    Human(int newID, string newName, string newSurname)
    {
        this->id =id;
        this->
    }
    int getID()
    {
        retrun id;
    }
    void setID(int id)
    {
        this->id = id;
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
     string getSurname()
    {
        return surname;
    }
    void setSurname(string surname)
    {
        this->surname = surname;
    }
};

class Student : public Human{
    pubilc:
    double gpa;

    double getGPA()
    {
        return gpa;
    }

};

int main()
{
    Student s1;

    s1.getID();
    s1.getName();
    s1.getSurname();
    
}