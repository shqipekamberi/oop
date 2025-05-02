#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class School{
    private:
    string name, city;
    int year;

    public:
    School(string n = "Test", string c = "Tetvov", int y = 2000)
    {
        name = n;
        city = c;
        year = y;
    }
    School(School& other)
    {
        name = other.name;
        city = other.city;
        year = other.year;
    }
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

    bool operator==(School& s)
    {
        bool isEqual = (name == s.name && city == s.city && year == s.year);
        if(isEqual)
        {
            s.name = this->name;
            s.city = this->city;
            s.year = this->year;
        }
        return isEqual;
    }

   School& operator=(const School& other) {
        if (this != &other) {
            name = other.name;
            city = other.city;
            year = other.year;
        }
        cout << "Assignment operator called" << endl;
        return *this;
    }

     School operator+(const School& other) const {
        cout << "Addition operator called" << endl;
        School result;
        if (this->year > other.year) {
            result = *this;
        } else {
            result = other;
        }
        result.name = this->name + " & " + other.name;
        return result;
    }
    School& operator+=(const School& other) {
        cout << "Addition assignment operator called" << endl;
        if (this->year > other.year) {
            // Keep the current name
        } else {
            this->name = other.name;
            this->year = other.year;
        }
        this->city += other.city;
        return *this;
    }

    School& operator--() {
        cout << "Decrement operator called" << endl;
            this->year--;
        
        return *this;
    }
     bool operator>(const School& other) const {
        cout << "Greater-than operator called" << endl;
        return this->year > other.year;
    }
};

void inputInfo(School& school){ 
    string name, city;
    int year;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter city: ";
    cin >> city;
    cout << "Enter year: ";
    cin >> year;

    school.setName(name);
    school.setCity(city);
    school.setYear(year);

}

void outputInfo(School& school)
{
    cout << "Name: " << school.getName() << endl;
    cout << "City: " << school.getCity() << endl;
    cout << "Year: " << school.getYear() << endl;

}

int main()
{
    School s1, s2, s3("Test", "Tetovo" , 2000);

inputInfo(s1);
    
    //without function
        string name, city;
        int year;

        cout << "Enter name: ";
        cin >> name;
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter year: ";
        cin >> year;
       

        s2.setName(name);
        s2.setCity(city);
        s2.setYear(year);


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


    if (s1 == s2) {
        cout << "Schools are equal" << endl;
    } else {
        cout << "Schools are not equal" << endl;
    }

    outputInfo(s1);
    outputInfo(s2);


    // Addition operator
    School school4 = s1 + s2;
    outputInfo(school4);

    // Addition assignment operator
    s1 += s2;
    outputInfo(s1);
    // Decrement operator
    --s1;
    outputInfo(s1);
    // Greater-than operator
    if (s2 > s1) {
        cout << "School2 has more students than School1" << endl;
    } else {
        cout << "School1 has more or equal students than School2" << endl;
    }

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