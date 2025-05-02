//create list of triangles and find triangle with highest surface
#include <iostream>
using namespace std;

class Triangle{
    private:
    float a, b, c;

    public:
    Triangle(float a, float b, float c)
    {
        cin >> a >> b >> c;
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
    Triangle ListTriangle[3];
    float maxSurface = 0;
    int indexMax;
    for(int i = 0; i < 3; i++)
    {
        if(ListTriangle[i].surface() > maxSurface)
        {
            maxSurface = ListTriangle[i].surface();
            indexMax = i + 1;
        }
    }

    cout << ListTriangle[indexMax].surface() << maxSurface;

    return 0;
}