#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
	int id;
	string name;
	string surname;
public:
	
	Human(int newID, string newName, string newSurname)
	{
		id = newID;
		name = newName;
		surname = newSurname;
	}

	void setID(int id)
	{
		this->id = id;
	}
	int getID()
	{
		return id;
	}
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
	void setSurname(string surname)
	{
		this->surname = surname;
	}
	string getSurname()
	{
		return surname;
	}
    void introduction()
    {
        cout << "Hello from: ";
    }
};
class Student : public Human
{
private:
	double gpa;
public:

	Student(int id,string name, string surname, double newGpa) : Human(id,name,surname) {
		gpa = newGpa;
	}
	void setGpa(double gpa)
	{
		this->gpa = gpa;
	}
	double getGpa()
	{
		return gpa;
	}
    void introduction()
    {
        Human::introduction();
        cout << getName();
    }
};
int main()
{
	Student defaultStudent(1,"test","test",5.5);


	cout << "Default Student ID: " << defaultStudent.getID() << endl;
	cout << "Default Student Name: " << defaultStudent.getName() << endl;
	cout << "Default Student Surname: " << defaultStudent.getSurname() << endl;
	cout << "Default Student GPA: " << defaultStudent.getGpa() << endl;
    defaultStudent.introduction();
	return 0;
}