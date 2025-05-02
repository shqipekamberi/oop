// #include <iostream>
// using namespace std;

// class Fraction{
//     private:
//     int denominator, nominator;

//     public:
//     Fraction(int d, int n)
//     {
//         denominator = d;
//         nominator = n;
//     }
//     int getDenominator()
//     {
//         return denominator;
//     }
//     int getNominator()
//     {
//         return nominator;
//     }

//     bool operator==(Fraction& other)
//     {
//         return(nominator == other.nominator && denominator == other.denominator);
//     }
//     bool operator!=(Fraction& other)
//     {
//         return nominator != other.nominator || denominator != other.denominator;
//     }

//     Fraction& operator=(Fraction& other)
//     {
//         nominator = other.nominator;
//         denominator = other.denominator;

//         return *this;
//     }

//     Fraction& operator+(Fraction& other)
//     {
//         int newNominator = nominator * other.denominator + other.nominator * denominator;
//         int newDenominator = denominator * other.denominator;
//         return Fraction(newNominator, newDenominator);
//     }

//     Fraction& operator+=(Fraction& other)
//     {
//         nominator = nominator * other.denominator + other.nominator * denominator;
//         denominator = denominator * other.denominator;
//         return *this;
//     }
//     Fraction& operator++()
//     {
//         nominator += denominator;
//         return *this;
//     }
//     Fraction operator++(int)
//     {
//         Fraction temp(nominator, denominator);
//         nominator += denominator;
//         return temp;
//     }

//     bool operator>(Fraction& other)
//     {
//         return nominator * other.denominator > other.nominator * denominator;
//     }

//     friend ostream& operator<<(ostream& os, Fraction& fraction)
//     {
//         os << fraction.nominator << "/" << fraction.denominator;
//         return os;
//     }

//     friend istream& operator>>(istream& is, Fraction& fraction)
//     {
//         cout << "Enter nominator: ";
//         is >> fraction.nominator;
//         cout << "Enter denominator: ";
//         is >> fraction.denominator;

//         if(fraction.denominator == 0)
//         {
//             cout << "Not valid";
//         }

//         return is;
//     }

//     void print() const {
//         cout << nominator << "/" << denominator << endl;
//     }
// };

// int main()
// {
//     Fraction f1(1, 2), f2(3, 4), f3;

//     cout << "Enter a fraction (numerator and denominator):" << endl;
//     cin >> f3;

//     // Testing overloaded operators
//     cout << "f1 = " << f1 << endl;
//     cout << "f2 = " << f2 << endl;
//     cout << "f3 = " << f3 << endl;

//     cout << "f1 + f2 = " << f1 + f2 << endl;

//     f1 += f2;
//     cout << "f1 += f2; f1 = " << f1 << endl;

//     cout << "f1 == f2: " << (f1 == f2 ? "True" : "False") << endl;
//     cout << "f1 != f2: " << (f1 != f2 ? "True" : "False") << endl;

//     ++f3;
//     cout << "++f3 = " << f3 << endl;

//     f3++;
//     cout << "f3++ = " << f3 << endl;

//     cout << "f1 > f2: " << (f1 > f2 ? "True" : "False") << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor to initialize attributes
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        if (denom == 0) {
            cerr << "Denominator cannot be zero. Setting to 1 by default." << endl;
            denominator = 1;
        }
    }

    // Get methods
    int getNumerator() const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }

    // Overload == operator
    bool operator==(const Fraction& other) const {
        return (numerator * other.denominator == denominator * other.numerator);
    }

    // Overload != operator
    bool operator!=(const Fraction& other) const {
        return !(numerator * other.denominator == denominator * other.numerator);
    }

    // Overload = operator
    Fraction& operator=(const Fraction& other) {
        if (this != &other) {
            numerator = other.numerator;
            denominator = other.denominator;
        }
        return *this;
    }

    // Overload + operator
    Fraction operator+(const Fraction& other) {
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // Overload += operator
    Fraction& operator+=(const Fraction& other) {
        *this = *this + other;
        return *this;
    }

    // Overload ++ operator (prefix)
    Fraction& operator++() {
        numerator++;
        return *this;
    }

    // Overload ++ operator (postfix)
    Fraction operator++(int) {
        Fraction temp = *this;
        numerator++;
        return temp;
    }

    // Overload > operator
    bool operator>(const Fraction& other) const {
        return (numerator * other.denominator > other.numerator * denominator);
    }

    // Overload << operator for output
    friend ostream& operator<<(ostream& os, const Fraction& fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }

    // Overload >> operator for input
    friend istream& operator>>(istream& is, Fraction& fraction) {
        cout << "Enter numerator: ";
        is >> fraction.numerator;
        cout << "Enter denominator: ";
        is >> fraction.denominator;
        if (fraction.denominator == 0) {
            cerr << "Denominator cannot be zero. Setting to 1 by default." << endl;
            fraction.denominator = 1;
        }
        return is;
    }
};

int main() {
    Fraction f1(1, 2), f2(3, 4), f3;

    // Testing input/output operators
    cout << "Enter a fraction (numerator and denominator):" << endl;
    cin >> f3;

    // Testing overloaded operators
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "f3 = " << f3 << endl;

    cout << "f1 + f2 = " << f1 + f2 << endl;

    f1 += f2;
    cout << "f1 += f2; f1 = " << f1 << endl;

    cout << "f1 == f2: " << (f1 == f2 ? "True" : "False") << endl;
    cout << "f1 != f2: " << (f1 != f2 ? "True" : "False") << endl;

    ++f3;
    cout << "++f3 = " << f3 << endl;

    f3++;
    cout << "f3++ = " << f3 << endl;

    cout << "f1 > f2: " << (f1 > f2 ? "True" : "False") << endl;

    return 0;
}
