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
};

void inputInfo(SchoolInformatics& school){ 
    string name, city;
    int year;
    string direction;
    int nrStudents;

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

    school.setName(name);
    school.setCity(city);
    school.setYear(year);
    school.setDirection(direction);
    school.setNrStudents(nrStudents);
}

void outputInfo(SchoolInformatics& school)
{
    cout << "Name: " << school.getName() << endl;
    cout << "City: " << school.getCity() << endl;
    cout << "Year: " << school.getYear() << endl;
    cout << "Directioin: " << school.getDirection() << endl;
    cout << "Number of students: " << school.getNrStudents() << endl;
}
void findSE(SchoolInformatics s[], int size)
{
    cout << "Directioin Software Engenireeing anf more than 500 students: " << endl;

    for(int i = 0; i < size; i++)
    {
        if(s[i].getDirection() == "SoftwareEngineering" && s[i].getNrStudents() >= 500)
        {
            outputInfo(s[i]);
        }
    }
}
int main()
{
    int numSchools = 3;
    SchoolInformatics s[3];
    //with function
    for(int i = 0; i < 3; i++){
        inputInfo(s[i]);
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
            outputInfo(s[i]);
            //without function
            cout << "Name: " << s[i].getName() << "  City: " << s[i].getCity() << "   Year: " << s[i].getYear() << "    Direction: " << s[i].getDirection() << "   Stundent nr: " << s[i].getNrStudents() << endl; 
        }
    }

    //with function
    findSE(s, numSchools);

    return 0;
}

/* SchoolInformatics s1, s2, s3;

    cout << "Information about school 1: " << endl;
    s1.setName("Shqipe");
    s1.setCity("Tetovo");
    s1.setYear(2004);
    s1.setDiretion("South");
    s1.setNrStudents(20);
    outputInfo(s1);
    cout << "\nInformation about school 2: " << endl;
    inputInfo(s2);
    cout << "\nInformation about school 3: " << endl;
    inputInfo(s3);

    cout << "Schools that are in Tetovo: " << endl;
    if(s1.getCity() == "Tetovo" )
    {
        outputInfo(s1);
        cout << "NAME: " << s1.getName() << "  CITY:  " << s1.getCity() << "  YEAR: " << s1.getYear() << endl;
    }
    if(s2.getCity() == "Tetovo")
    {
        outputInfo(s2);
        
    }
    if(s3.getCity() == "Tetovo")
    {
        outputInfo(s3);
    }

    return 0;*/