#include <iostream>
using namespace std;

class Point{
    public:
    int x, y;
    
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }

    Point operator+(Point p)
    {
        Point temp;
        temp.x = this->x + p.x;
        temp.y = this->y + p.y;

        return temp;
    }

    bool operator==(Point &p)
    {
        if(this->x == p.x && this->y == p.y)
        {
            return true;
        }
        else{
            return false;
        }
    }

    friend ostream &operator<<(ostream &os, Point p)
    {
        os << "POINT(" << p.x << ", "  << p.y << ")" << endl;
        return os;
    }

};

int main()
{
    Point p1, p2, p3;
    p1.x = 2;
    p1.y = 3;
    p2.x = 1;
    p2.y = 4;

    p3 = p1 + p2;
    cout << p3;

    return 0;
}