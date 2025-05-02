//in the main create 3 triangles and find the one with the highest surface
#include <iostream>
using namespace std;

class Triangle{
    private:
    float a, b, c;

    public:
    Triangle(float a = 5, float b = 10, float c = 6)
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
        cout << "\nThe perimeter of the triangle is: " << perimeter();
        cout << "\nThe surface of the triangle is: " << surface();
    }
};



Triangle maxNum(Triangle t1, Triangle t2, Triangle t3){
    Triangle temp = Triangle();
    if(t1.surface() > t2.surface()){
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
    Triangle t1 = Triangle(1.1, 3.2, 1.9);
    Triangle t2 =  Triangle(1.7, 1.2, 1.9);
    Triangle t3 = Triangle(0.1, 7.2, 0.9);
    Triangle newTr = maxNum(t1, t2, t3);
    //cout << newTr << endl;
    t1.output();
    t2.output();
    t3.output();
    newTr.output();
    return 0; 
}