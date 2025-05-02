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
    friend ostream& operator<<(ostream &o, Date &d1) {
        o << setw(2) << setfill('0') << d1.day << "-"
          << setw(2) << setfill('0') << d1.month << "-"
          << setw(4) << setfill('0') << d1.year << endl;
        return o;
    }

private:
    int year, month, day;

public:
    Date(int d = 15, int m = 10, int y = 2000) {
        setyear(y);
        setmonth(m);
        setday(d);
    }

    int getyear() { return year; }
    int getmonth() { return month; }
    int getday() { return day; }

    void setyear(int y) { year = (y >= 0) ? y : 0; }
    void setmonth(int m) { month = (m >= 1 && m <= 12) ? m : 1; }
    void setday(int d) { 
        if (d >= 1 && d <= 31) day = d;
        else day = 1;
    }

    void input() {
        cout << "\nInput year: "; cin >> year;
        cout << "\nInput month: "; cin >> month;
        cout << "\nInput day: "; cin >> day;
    }

    void output() {
        cout << setw(2) << setfill('0') << day << "-"
             << setw(2) << setfill('0') << month << "-"
             << setw(4) << setfill('0') << year << endl;
    }

    bool operator==(const Date &d) const {
        return (year == d.year && month == d.month && day == d.day);
    }

    Date& operator=(const Date &d2) {
        if (this != &d2) {
            year = d2.year;
            month = d2.month;
            day = d2.day;
        }
        return *this;
    }

    bool operator>(const Date &right) const {
        if (year > right.year) return true;
        else if (year == right.year) {
            if (month > right.month) return true;
            else if (month == right.month) {
                if (day > right.day) return true;
            }
        }
        return false;
    }

    bool operator!=(const Date &right) const {
        return !(*this == right);
    }

    Date& operator++() {
        day++;
        if (day > 31) {
            day = 1;
            month++;
        }
        if (month > 12) {
            month = 1;
            year++;
        }
        return *this;
    }

    Date operator++(int) {
        Date temp = *this;
        ++(*this);
        return temp;
    }

    Date operator+(const Date &d) const {
        Date res(day + d.day, month + d.month, year + d.year);
        if (res.day > 31) {
            res.day -= 31;
            res.month++;
        }
        if (res.month > 12) {
            res.month -= 12;
            res.year++;
        }
        return res;
    }

    Date& operator+=(const Date &d) {
        day += d.day;
        month += d.month;
        year += d.year;
        if (day > 31) {
            day -= 31;
            month++;
        }
        if (month > 12) {
            month -= 12;
            year++;
        }
        return *this;
    }
};

void printDates21(Date dates[], int n) {
    for (int i = 0; i < n; i++) {
        if (dates[i].getyear() == 2021) {
            dates[i].output();
        }
    }
}

Date* newestDate(Date d1, Date d2) {
    if (d1 > d2) return &d1;
    else if (d2 > d1) return &d2;
    else return nullptr;
}

int main() {
    Date d1(0, 0, 0), d2(10, 10, 10), d3;
    cout << "\nAfter d1: \n";
    cout << d1;
    cout << "\nAfter d2: \n";
    cout << d2;

    if (d1 == d2)
        cout << "\nSame dates!";
    else
        cout << "\nDifferent dates!";

    Date d4 = d1;
    ++d1;
    cout << "\nAfter increment date d1: \n";
    cout << d1;

    cout << "\nAfter d1 > d2: \n";
    if (d1 > d2)
        cout << "\nd1 > d2";
    else
        cout << "\nd1 not bigger than d2";

    return 0;
}
