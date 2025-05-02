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

    bool operator==(Faculty& other)
    {
        if(name == other.name && university == other.university && year == other.year)
        {
            return true;
        }
        else{
            return false;
        }
    }
    Faculty& operator=(Faculty& other)
    {
        name = other.name;
        university = other.university;
        year = other.year;
        return *this;
    }
    Faculty operator+(const Faculty& other) const {
        string combinedName = name + " & " + other.name;
        int maxYear = (year > other.year) ? year : other.year;
        return Faculty(combinedName, university, maxYear);
    }
    Faculty& operator--()
    {
        --year;
        return *this;
    }
    Faculty operator--(int)
    {
        Faculty temp = *this;
        --year;
        return temp;
    }
    bool operator>(Faculty& other)
    {
        return year > other.year;
    }

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

int main()
{
    Faculty faculty1("John Doe", "University A", 2020);
    Faculty faculty2("Jane Smith", "University B", 2022);

    // Testojmë operatorin ==
    if (faculty1 == faculty2) {
        cout << "faculty1 and faculty2 are equal." << endl;
    } else {
        cout << "faculty1 and faculty2 are not equal." << endl;
    }

    // Testojmë operatorin =
    Faculty faculty3;
    faculty3 = faculty1;
    cout << "After assignment, faculty3: ";
    faculty3.printInfo(); // Pritet të printojë: John Doe:University A:2020

    // Testojmë operatorin +
    Faculty combinedFaculty = faculty1 + faculty2;
    cout << "Combined faculty: ";
    combinedFaculty.printInfo(); // Pritet të printojë: John Doe & Jane Smith:University A:2022

    // Testojmë operatorin -
    Faculty decrementedFaculty = --faculty1;
    cout << "After decrement, faculty1: ";
    decrementedFaculty.printInfo(); // Pritet të printojë: John Doe:University A:2019

    // Testojmë operatorin >
    if (faculty1 > faculty2) {
        cout << "faculty1 has a later year than faculty2." << endl;
    } else {
        cout << "faculty1 does not have a later year than faculty2." << endl;
    }

    return 0;
}