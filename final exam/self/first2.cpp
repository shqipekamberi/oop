#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class School{
    private:
    string name, city;
    int year;

    public:
    string getName()
    {
        return name;
    }
    string getCity(){
        return city;
    }
    int getYear(){
        return year;
    }
    void setName(string n)
    {
        name = n;
    }
    void setCity(string c){
        city = c;
    }
    void setYear(int y){
        year = y;
    }
    virtual void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter year: ";
        cin >> year;
    }

    virtual void output() const {
        cout << "Name: " << name << endl;
        cout << "City: " << city << endl;
        cout << "Year: " << year << endl;
    }

    virtual ~School() = default;

};
class SchoolInformatics : public School{
    private:
    string direction;
    int nr_students;

    public:
    SchoolInformatics(string dir = "South", int stud = 0)
    {
        direction = dir;
        nr_students = stud;
    }
    SchoolInformatics(SchoolInformatics& other)
    {
        direction = other.direction;
        nr_students = other.nr_students;
    }
    string getDirection()
    {
        return direction;
    }
    int getNrStudents(){
        return nr_students;
    }

    void setDirection(string dir)
    {
        direction = dir;
    }
    void setNrStudents(int stud){
        nr_students = stud;
    }

    void input()  {
        School::input();
        cout << "Enter direction: ";
        cin >> direction;
        cout << "Enter number of students: ";
        cin >> nr_students;
    }

    void output()  {
        School::output();
        cout << "Direction: " << direction << endl;
        cout << "Number of students: " << nr_students << endl;
    }
    
};


void findSE(SchoolInformatics s[], int size)
{
    cout << "Directioin Software Engenireeing anf more than 500 students: " << endl;

    for(int i = 0; i < size; i++)
    {
        if(s[i].getDirection() == "SoftwareEngineering" && s[i].getNrStudents() >= 500)
        {
            output(s[i]);
        }
    }
}
int main()
{
    int numSchools = 3;
    SchoolInformatics s[3];
    //with function
    for(int i = 0; i < 3; i++){
        input(s[i]);
    }
    //without function
    for (int i = 0; i < numSchools; ++i) {
        string name, city, direction;
        int year, nrStudents;

        cout << "Enter name: ";
        cin >> name;
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter direction: ";
        cin >> direction;
        cout << "Enter number of students: ";
        cin >> nrStudents;

        s[i].setName(name);
        s[i].setCity(city);
        s[i].setYear(year);
        s[i].setDirection(direction);
        s[i].setNrStudents(nrStudents);
    }


    cout << "Directioin Software Engenireeing anf more than 500 students: " << endl;

    //without function
    for(int i = 0; i < 3; i++)
    {
        if(s[i].getDirection() == "SoftwareEngineering" && s[i].getNrStudents() >= 500)
        {
            //with function
            output(s[i]);
            //without function
            cout << "Name: " << s[i].getName() << "  City: " << s[i].getCity() << "   Year: " << s[i].getYear() << "    Direction: " << s[i].getDirection() << "   Stundent nr: " << s[i].getNrStudents() << endl; 
        }
    }

    //with function
    findSE(s, numSchools);

    return 0;
}

