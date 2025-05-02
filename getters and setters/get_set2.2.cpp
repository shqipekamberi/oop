//cerate class triangle with attribute a, b, c and getters/setters. 
//also create functions calculate perimeter (a+b+c) and surface (perimeter/2)

#include <iostream>
using namespace std;

class Triangle{
    private:
    float a, b, c;

    public:
    Triangle(float a = 7, float b = 7.6, float c = 9)
    {
       this->a = a;
       this->b = b;
       this->c = c;
    }
    void setA(int a)
    {
        this->a = a;
    }
    int getA(){ 
        return a;
    }
    void setB(int b)
    {
        this->b = b;
    }
    int getB(){ 
        return b;
    }
    void setC(int c)
    {
        this->c = c;
    }
    int getC(){ 
        return c;
    }

};

float perimeter(float a, float b, float c)
{
    return a + b + c;
}

float surface(Triangle t)
{
    return perimeter(t.getA(),t.getB(),t.getB()) / 2;
}

int main()
{
    Triangle t1;

    t1.setA(4);
    t1.setB(6);
    t1.setC(7);

    cout << perimeter(t1.getA(),t1.getB(),t1.getC());
    cout << surface(t1);
    

    return 0;
}