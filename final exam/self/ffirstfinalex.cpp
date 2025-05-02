#include <iostream>
#include <cstring>
using namespace std;

class Date{
    friend istream& operator>>(istream &in, Date &d1)
    {
        cout << "Input day: ";
        in >> d1.day;
        cout << "Input month: ";
        in >> d1.month;
        cout << "Input year: "; 
        in >> d1.year;

        return in;
    }
    friend ostream& operator<<(ostream &o, Date &d1)
    {
        o << d1.day << "-" << d1.month << "-" << d1.year << endl;
        return o; 
    }
    private:
    int year, month, day;

    public:
    Date(int d = 1, int m = 1, int y = 1)
    {
        day = d;
        month = m;
        year = y; 
    }
    Date(Date& other)
    {
        day = other.day;
        month = other.month;
        year = other.year;
    }

    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }

    void setDay(int d){
        day = (d >= 1 && d <= 31) ? d : 1;
    }
    void setMonth(int m){
        month = (m >= 1 && m <= 12) ? m : 1;
    }
    void setYear(int y){
        year = (y >= 0) ? y : 0;   
    }

    void input(){
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }
    void output(){
        cout << day << "-" << month << "-" << year << endl;
    }
};
class BirthdayDate : public Date{
    private:
    int age;
    public:
    BirthdayDate(int a = 0){
        age = 2024 - getYear();
    }
    int getAge(){
        return age;
    }
    void setAge(int a)
    {
        age = 2024 - getYear();
    }

    void input()
    {
        int d, m, y;
        cout << "Input d, m, y: " << endl;
        cin >> d >> m >> y;
        setDay(d);
        setMonth(m);
        setYear(y);
        setAge(age);
    }

    void output()
    {
        cout << "\nBirthday date: " << getDay() << "-" << getMonth() << "-" << getYear() << endl;
        cout << "Age:" << age << endl;
    }

    bool operator==(Date &d)
    {
        if(d1 == d2){
            return (this->year == d.year && month == d.month && day == d.day);
        }
    }

    Date &operator=(Date &d2)
    {
        this->year = d2.year;
        this->month = d2.month;
        this->day = d2.day;
        return (*this);

    }
    bool operator>(Date &right)
    {

       if (year>right.year) {
          return true;
        }
       else if (year==right.year)
               if (month>right.month) return true;
               else if (month==right.month)
                        if (day>right.day) return true;
                        else return false;
                    else return false;
            else return false;

    }
    bool operator!=(Date &right)
    {   
      return !((*this)==right); 
    }

    Date &operator++()
   {
       day++;
       if(day>31) {
           day=1;
           month++;}
           if (month>12)
           { month=1;
               year++;
           }
    return (*this);
   }

   Date &operator+(Date &d)
   {Date res(0,0,0);
       res.day=day+d.day;
       res.month= month+d.month;
       res.year=year+d.year;
       if(res.day>31)
         {  res.day=1;
              res. month+=1;}
       if ( res.month>12)
           {  res.month=1;
                res.year++;
            }

    return res;
   }

    Date &operator++(int i)
   {
       Date res=(*this);
       day++;
       month++;
       year++;
       if(day>31) {
           day=1;
           month++;}
        if (month>12)
           { month=1;
               year++;
           }
       return (*this);
   }
Date &operator+=(Date &d)
   {

       

        day+=d.day;
        month+=d.month;
        year+=d.year;
       if(day>31)
         {  day=1;
            month+=1;}
        if (month>12)
                   {  month+=1;
                        year++;
                   }

return (*this);
   }

};

void printDates(Date date[], int size)
{
    cout << "Dates with year 2021: " << endl;
    for(int i = 0; i < size; i++)
    {
        if(date[i].getYear() == 2021)
        {
            date[i].output();
        }
    }
}
void printAge20(BirthdayDate bdate[], int size)
{
    cout << "Dates of the age 20: ";
    for(int i = 0; i < 3; i++)
    {
        if(bdate[i].getAge() == 20)
        {
            bdate[i].output();
        }
    }
}

int main()
{
    BirthdayDate bday[3];
    for(int i = 0; i < 3; i++)
    {
        bday[i].input();
    }

    printDates(bday, 3);
    printAge20(bday, 3);

        Date d1(0, 0, 0), d2(10, 10, 10), d3;
    cout<<"\nAfter d1:  \n";
    cout<<d1;
    cout<<"\nAfter d2:  \n";
    cout<<d2;
    //cin>>d1;//operator>>(cin, d1)
    //cout<<d1;//operator<<(cout, d1)
 if (d1==d2)//d1.operator==(d2)

 cout<<"\nSame dates!";
 else cout<<"\nDifferent dates!";
Date d4=d1;

++d1;//d1.opeartor++()
cout<<"\nAfter increment date d1:  \n";
cout<<d1;
cout<<"\nAfter d1>d2:  \n";
if (d1>d2)
       cout<<"\nd1>d2";
 else cout<<"\nd1 not bigger then d2";


 return 0;


    return 0;
}