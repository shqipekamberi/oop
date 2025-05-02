//create class triangle with att. a, b, c and create functions to calc perimeter (a+b+c), surface(perimeter/2) and output data
#include <iostream>
using namespace std;

class Triangle{
    private:
    double a, b, c;

    public:
    Triangle(float a, float b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    float perimeter()
    {
        return a + b + c;
    }
    float surface()
    {
        return perimeter() / 2;
    }
    
    void output()
    {
        cout << "The perimeter of the triangle is: " << perimeter();
        cout << "\nThe surface of the triangle is: " << surface();
    }
};

int main()
{
    Triangle t1 = Triangle(1.1, 3.2, 1.9);
    return 0; 
}