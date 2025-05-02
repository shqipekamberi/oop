#include <iostream>
using namespace std;

class Triangle{
    private:
    double a, b, c;

    public:
    Triangle(double a, double b, double c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    double perimeter()
    {
        return a + b + c;
    }

    double surface()
    {
        return perimeter() / 2;
    }

    void input()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;
    }

    void output()
    {
        cout << "Perimeter: " << perimeter() << endl;
        cout << "Surface: " << surface() << endl;
    }

};

Triangle maxNum(Triangle t1,Triangle t2, Triangle t3){
    Triangle temp = Triangle();
    temp = t1.surface();
    if(t1.surface() > t2.surface())
    {
    if(t1.surface() > t3.surface()){
        temp = t1;
    }
    else{
        temp = t3;
    }
    }
    else{
        temp = t2;
    }

    return temp;
}

int main()
{
    Triangle t1 = Triangle(1.1,3.2,1.9);
    Triangle t2 = Triangle(1.7,1.2,1.9);
    Triangle t3 = Triangle(0.1,7.2,0.9);

    Triangle newTr = maxNum(t1,t2,t3);
    cout << newTr.surface();

    return 0;
}
