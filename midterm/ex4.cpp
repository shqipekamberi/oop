#include <iostream>
using namespace std;

class Car{
    string brandName, engineType;
    int horsepower;

    public:
    Car(){
        cin >> brandName >> engineType >> horsepower;
    }
    Car(string brand, string type, int hp){
        brandName = brand;
        engineType = type;
        horsepower = hp;
    }
    void outputHP(){
        cout << "Brand: "<< brandName << "Engine type: " << engineType << "hp: " << horsepower;
    }
    int getHP()
    {
        return horsepower;
    }


};

Car maxHP(Car cars[], int size)
{
    Car max = cars[0];
    for(int i = 0; i < size; i ++)
    {
        if(max.getHP() < cars[i].getHP())
        {
            max = cars[i];
        }
    }
    return max;
}

int main()
{
    Car cars[3];

    for(int i = 0; i < 3; i++)
    {
        cars[i].outputHP();
    }
    cout << endl;

    for(int i = 0; i < 3; i ++)
    {
        maxHP(cars, 3).output();
    }
}