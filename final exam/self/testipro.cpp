#include <iostream>
using namespace std;

class Date {
private:
    int year, month, day;

public:
    Date(int d = 1, int m = 1, int y = 1) {
        day = d;
        month = m;
        year = y;
    }

    int getDay() const {
        return day;
    }
    int getMonth() const {
        return month;
    }
    int getYear() const {
        return year;
    }

    void setDay(int d) {
        day = d;
    }
    void setMonth(int m) {
        month = m;
    }
    void setYear(int y) {
        year = y;
    }

    void input() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void output() const {
        cout << day << "-" << month << "-" << year << endl;
    }
};

class BirthdayDate : public Date {
private:
    int age;

public:
    BirthdayDate() : Date() {
        calculateAge();
    }

    void calculateAge() {
        age = 2024 - getYear();
    }

    int getAge() const {
        return age;
    }

    void setAge(int a) {
        age = a;
    }

    void input() {
        Date::input(); // Call base class input function
        calculateAge();
    }

    void output() const {
        Date::output(); // Call base class output function
        cout << "Age: " << age << endl;
    }
};

void printDates(Date dates[], int size) {
    cout << "Dates with year 2021: " << endl;
    for (int i = 0; i < size; i++) {
        if (dates[i].getYear() == 2021) {
            dates[i].output();
        }
    }
}

void printAge20(BirthdayDate dates[], int size) {
    cout << "Dates of age 20: " << endl;
    for (int i = 0; i < size; i++) {
        if (dates[i].getAge() == 20) {
            dates[i].output();
        }
    }
}

int main() {
    const int arraySize = 3;
    BirthdayDate birthdays[arraySize];

    cout << "Enter birthday dates:" << endl;
    for (int i = 0; i < arraySize; i++) {
        birthdays[i].input();
    }

    printDates(birthdays, arraySize);
    printAge20(birthdays, arraySize);

    return 0;
}
