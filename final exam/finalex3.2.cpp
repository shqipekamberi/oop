/*For the Date class, redefine (overload) the operations =, ==, >, !=, + (adding 2 dates will mean adding only the year,
other attributes should be of the bigger date), += (similar to +, only the year is added, attributes should be of the bigger date), 
++ (incrementing the three members where take care must be taken date (<=31 for >31, initialize date 1; month<=12, for >12, initialize
month 1;)
//Overload the following operators and give the appropriate
messages: =, ==, >, !=, ++
Explanation: Binary operations are easier to implement as member functions of the class:
Ex. If (m1>m2) is executed by the compiler as:
m1.operator>(m2)
Where the left operand of the binary operation is the caller of operator>; and the right operand is the input argument of the member function*/
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class Date {
    friend istream& operator>>(istream &in, Date &d1) {
        cout << "\nInput year: "; in >> d1.year;
        cout << "\nInput month: "; in >> d1.month;
        cout << "\nInput day: "; in >> d1.day;
        return in;
    }

    friend ostream& operator<<(ostream &o, const Date &d1) {
        o << d1.day << "-" << d1.month << "-" << d1.year << endl;
        return o;
    }

private:
    int year, month, day;

public:
    Date(int d = 15, int m = 10, int y = 2000) : day(d), month(m), year(y) {}

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

    void setYear(int y) {
        year = (y >= 0) ? y : 0;
    }
    void setMonth(int m) {
        month = (m >= 1 && m <= 12) ? m : 1;
    }
    void setDay(int d) {
        day = (d >= 1 && d <= 31) ? d : 1;
    }

    void input() {
        cout << "\nInput year: "; 
        cin >> year;
        cout << "\nInput month: "; 
        cin >> month;
        cout << "\nInput day: "; 
        cin >> day;
    }

    void output(){
        cout << day << "-" << month << "-" << year << endl;
    }

    bool operator==(Date &d){
        return (year == d.year && month == d.month && day == d.day);
    }

    bool operator!=(Date &d){
        return !(*this == d);
    }

    bool operator>(Date &right) {
        if (year > right.year) return true;
        if (year == right.year && month > right.month) return true;
        if (year == right.year && month == right.month && day > right.day) return true;
        return false;
    }

    Date& operator=(Date &d2) {
        if (this != &d2) {
            year = d2.year;
            month = d2.month;
            day = d2.day;
        }
        return *this;
    }

    Date operator+(Date &d)  {
        Date res = (d > *this) ? d : *this;
        res.year += (d.year + this->year);
        return res;
    }

    Date& operator+=( Date &d) {
        year += d.year;
        if (d > *this) {
            month = d.month;
            day = d.day;
        }
        return *this;
    }

    // Prefix increment
    Date& operator++() {
        ++day;
        if (day > 31) {
            day = 1;
            ++month;
        }
        if (month > 12) {
            month = 1;
            ++year;
        }
        return *this;
    }

    // Postfix increment
    Date operator++(int) {
        Date temp = *this;
        ++(*this);
        return temp;
    }
};

int main() {
    Date d1(10, 10, 2010), d2(20, 12, 2020), d3;
    cout << "Initial Dates:\n";
    cout << d1 << d2;

    cout << "Input data for date d3:\n";
    cin >> d3;
    cout << "Date d3: " << d3;

    if (d1 == d2)
        cout << "d1 and d2 are the same!\n";
    else
        cout << "d1 and d2 are different!\n";

    if (d1 > d2)
        cout << "d1 is greater than d2\n";
    else
        cout << "d1 is not greater than d2\n";

    d1 = d3;
    cout << "After assignment d1 = d3: " << d1;

    Date d4 = d1 + d2;
    cout << "d4 = d1 + d2: " << d4;

    d1 += d2;
    cout << "After d1 += d2: " << d1;

    ++d1;
    cout << "After prefix increment ++d1: " << d1;

    d1++;
    cout << "After postfix increment d1++: " << d1;

    return 0;
}
