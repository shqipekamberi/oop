#include <iostream>
using namespace std;

class Car{
    private:
    int speed;

    public:
    Car(int speed = 200)
    {
        this->speed = speed;
    }
    int getSpeed()
    {
        return speed;
    }
    void setSpeed(int s)
    {
        speed = s;
    }

    void output()
    {
        cout << "Speed: " << speed << endl;
    }
};

class PoliceCar : public Car{
    private:
    int currentSpeed;
    bool action;

    public:
    PoliceCar(int currentSpeed = 250, bool action = "false")
    {
        this->currentSpeed = currentSpeed;
        this->action = action;
    }
    int getCurrentSpeed()
    {
        return currentSpeed;
    }
    bool getAction()
    {
        return action;
    }
    void setCurrentSpeed(int cs)
    {
        currentSpeed = cs;
    }
    void setAction(bool a)
    {
        action = a;
    }
    void output()
    {
        Car::output();
        cout << "Current speed: " << currentSpeed << endl;
        cout << "Action: " << action << endl;
    }
};

int main()
{
    PoliceCar pc1;

    pc1.output();

    return 0;
}