#include <iostream>
using namespace std;

class Faculty{
    private:
    string name, university;
    int year;
    

    public:
    Faculty(string n = "", string uni = "", int y = 0)
    {
        name = n;
        university = uni;
        year = y;
        
    }
    Faculty(Faculty& other)
    {
        name = other.name;
        university = other.university;
        year = other.year;
        
    }

    string getName(){return name;}
    string getUni(){return university;}
    int getYear(){return year;}
    

    void setName(string n){name = n;}
    void setUni(string uni){university = uni;}
    void setYear(int y){year = y;};
    

    void inputInfo()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter university: ";
        cin >> university;
        cout << "Enter year: ";
        cin >> year;
        
        
    }
    void printInfo()
    {
        cout << name << ":" << university << ": " << year << endl;
        
    }
};
class CSTFaculty : public Faculty{
    private:
    string department;
    int nrStudents;

    public:
    CSTFaculty(string n = "", string uni = "", int y = 0, string dep = "", int nr = 0) :Faculty(n, uni, y)
    {
        department = dep;
        nrStudents = nr;
    }
    CSTFaculty(CSTFaculty& other) :Faculty(other)
    {
        department = other.department;
        nrStudents = other.nrStudents;
    }

    string getDepartment(){return department;}
    int getNrStudents(){return nrStudents;}
    void setDepartment(int d){department = d;}
    void setNrStudents(int nr){nrStudents = nr;}

    void inputInfo()
    {
        Faculty::inputInfo();
        cout << "Enter department: ";
        cin >> department;
        cout << "Enter number of students: ";
        cin >> nrStudents;
    }

    void printInfo()
    {
        Faculty::printInfo();
        cout << department << ":" << nrStudents << endl;
    }
    void findCSTFaculty()
    {
        if(department == "bussinessInformatics" && nrStudents >= 500)
        {
            printInfo();
        }
    }
    
};
int main()
{
    int n = 3;
    CSTFaculty faculty[n];
    for(int i = 0; i < n; i++)
    {
        faculty[i].inputInfo();
    }

    for(int i = 0; i < n; i++)
    {
        faculty[i].findCSTFaculty();
    }

    for(int i = 0; i < n; i++)
    {
        if(faculty[i].getDepartment() == "bussinessInformatics" && faculty[i].getNrStudents() >= 500)
        {
            faculty[i].printInfo();
        }
    }

    return 0;
}