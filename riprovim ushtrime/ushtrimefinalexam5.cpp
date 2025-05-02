#include <iostream>
using namespace std;

class Fraction{
    private:
    int nominator, denominator;
    public:
    Fraction(int n = 1, int d = 1)
    {
        nominator = n;
        denominator = d;
    }
    int getNominator(){return nominator;}
    int getDenominator(){return denominator;}
    void setNominator(int n){nominator = n;}
    void setDenominator(int d){denominator = d;}

    bool operator==(Fraction& other)
    {
        if(nominator == other.nominator && denominator == other.denominator)
        {
            return true;
        }
        else return false;
    }

    bool operator!=(Fraction& other)
    {
        if(nominator != other.nominator || denominator != other.denominator)
        {
            return true;
        }
        else return false;
    }
    Fraction& operator=(Fraction& other)
    {
        nominator = other.nominator;
        denominator = other.denominator;
        return *this;
    }
    Fraction operator+(const Fraction& other) {
        int newNumerator = nominator * other.denominator + other.nominator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction& operator+=(Fraction& other)
    {
        nominator = nominator * other.denominator + other.nominator * denominator;
        denominator *= other.denominator;
        return *this;
    }

    Fraction& operator++()
    {
        nominator++;
        return *this;
    }
    Fraction operator++(int)
    {
        Fraction temp = *this;
        nominator++;
        return temp;
    }
    bool operator>(Fraction& other)
    {
        int lNominator = nominator * other.denominator;
        int rNominator = other.nominator * denominator;

        return lNominator > rNominator;
    }

    friend istream& operator>>(istream& is, Fraction& frac)
    {
        cout << "Enter nominator: ";
        is >> frac.nominator;
        cout << "Enter denominator: ";
        is >> frac.denominator;

        return is;
    }
    
    friend ostream& operator<<(ostream& os, Fraction& frac)
    {
        os << frac.nominator << "/" << frac.denominator << endl;
        return os;
    }
};

int main()
{
    Fraction f1(3, 4);
    Fraction f2(5, 6);
    Fraction f3;

    cout << "Enter fraction 3: " << endl;
    cin >> f3;



    f1 += f2;
    cout << "f1 += f2; f1 = " << f1 << endl;

    cout << "f1 == f2: " << (f1 == f2 ? "True" : "False") << endl;
    cout << "f1 != f2: " << (f1 != f2 ? "True" : "False") << endl;

    ++f3;
    cout << "++f3 = " << f3 << endl;

    f3++;
    cout << "f3++ = " << f3 << endl;

    cout << "f1 > f2: " << (f1 > f2 ? "True" : "False") << endl;


    cout << "\nf1:" << f1;

    return 0;

}