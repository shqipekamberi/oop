#include <iostream>
#include <iomanip>

#include <cstring>
using namespace std;

class Date{
    private:
    int year, month, day;
    public:
    Date(int d=15,  int m=10, int y=2000 )
    {
        year=y;
        month=m;
        day=d;
    }
    
    int getyear(){return year;}
    int getmonth(){return month;}
    int getday(){return day;}
    
    void setyear(int y)
    {
        year=(y>=0)?y:0;
    }
    void setmonth(int m)
    {
        month=(m>=1 && m<=12)?m:1;
    }
     void setday(int d)
    {
        day=(d>=1 && d<=31)?d:1;
    }
    
    void input()
    {
        cout<<"\nInput year: "; cin>>year;
        cout<<"\nInput mmonth: "; cin>>month;
        cout<<"\nInput day: "; cin>>day;
    }
    
    void output()
    {
        cout<<setw(2)<<setfill('0')<<day<<"-"<<setw(2)<<setfill('0')<<month
        <<"-"<<setw(2)<<setfill('0')<<year<<endl;
    }
};

void printDates21(Date dates[], int n)
{
for (int i=0; i<3; i++)
 if (dates[i].getyear()==2021)
    dates[i].output();
}

int main()
{
 Date birthday(31, 12, 1980), registerday(20, 8, 2020);
 cout<<"\nInitial data:\n";
 birthday.output();
 registerday.output();
 
 Date dates[3];
 
 for (int i=0; i<3; i++)
 {
     cout<<"\nLexo te dhenat per dates["<<i<<"]:\n";
     dates[i].input();
 }
 
 cout<<"\nDates in 2021:\n";
 printDates21(dates, 3);
 
    return 0;
}
