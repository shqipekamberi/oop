#include <iostream>
using namespace std;

class Date{
    private:
    int year, month, day;

    public:
    Date()  
    {      
        year = 0;
        month = 0;
        day = 0;
    }
    Date(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    int getYear()
    {
        return year;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    
    void setYear(int y)
    {
        year = y;
    }
    void setMonth(int m)
    {
        month = m;
    }
    void setDay(int d)
    {
        day = d;
    }

    void input()
    {
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter day: ";
        cin >> day;
    }

    void output()
    {
        cout << year << "/" << month << "/" << day << endl;
    }
};

class BirthdayDate : public Date{
    private:
    int age;

     void calculateAge() {
        const int currentYear = 2024;
        age = currentYear - getYear();
    }
    public:
    BirthdayDate() : Date() 
    {
        age = 0;
    }
    BirthdayDate(int y, int m, int d, int a) : Date(y, m, d)
    {
       calculateAge();
    }
    int getAge()
    {
        return age;
    }
      void setDate(int y, int m, int d) {
        setYear(y);
        setMonth(m);
        setDay(d);
        calculateAge();  
    }

    void input() {
        Date::input();  
        calculateAge();  
    }
    void output()
    {
        Date::output();
        cout << "Age: " << age << endl;
    }
    bool is20() const {
        return age == 20;
    }
};

void print2021(Date date[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(date[i].getYear() == 2021)
        {
            date[i].output();
        }
    }
}
void printAge20(BirthdayDate bdays[], int n) {
    for(int i = 0; i < n; i++) {
        if(bdays[i].is20()) {
            bdays[i].output();
        }
    }
}


int main()
{
    const int n = 3;
    BirthdayDate bdays[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter data for BirthdayDate " << i + 1 << ":\n";
        bdays[i].input();
    }

    cout << "\nAll BirthdayDate objects:\n";
    for(int i = 0; i < n; i++) {
        bdays[i].output();
    }

    cout << "\nBirthdayDate objects with age 20:\n";
    printAge20(bdays, n);

    return 0;
}