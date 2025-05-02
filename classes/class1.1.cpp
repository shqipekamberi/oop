#include <iostream>
using namespace std;

class triangle{
    public:
    double a, b,c;
    triangle()
    {
        a = b = c = 1;
    }
    double circumference(){
        return a + b + c;
    }
    double surface()
    {
        double s = circumference() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    void output()
    {
        cout << "Triangle sides: " << a << " " << b << " " << c;
        cout << "\nCircumfernce: " << circumference() << "\nSurface: " << surface() << endl;
    }
};

int main()
{
    triangle t1, t2, *t = new triangle();
    t1.output();
    
    cout <<"\nInput 3 t2 triangle sides: ";
    cin >> t2.a >> t2.b >> t2.c;
    
    cout << "\nTriangle t2 sides: " << t2.a << " " << t2.b << " " << t2.c;
    cout << "\nCirfumference:  " << t2.circumference()
         << "\nSurface: " << t2.surface() << endl;
        
   cout << "\nInput 3  triangle sides of annon tr:";
   cin >> t->a >> t->b >> t->c;

   cout << "\nTriangle announ tr sides: " << t->a << " " << t->b << " " << t->c;
   cout << "\nCirfumference:  " << t->circumference()
        << "\nSurface: " << t->surface() << endl;    
    return 0;

}

//encapsulation, abstraction, inheritance, polimorphism