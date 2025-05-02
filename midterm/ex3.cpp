#include <iostream>
using namespace std;

class Car{
    public:
    string brandName, engineType;
    int horsepower;

    void inputData()
    {
        cout << "Brand name: ";
        cin >> brandName;
        cout << "Engine type: ";
        cin >> engineType;
        cout << "Horsepower: ";
        cin >> horsepower;
    }
    void outputData()
    {
        cout << "\nBrand name: " << brandName << "\nEngine type: " << engineType << "\nHorsepower: " << horsepower << endl;
    }
    int getHp()
    {
        return horsepower;
    }

    Car(string brandName = "BMW", string engineType = "C1", int horsepower = 180);


};
Car findCars(int horsepower, Car cars[])
{
    for(int i = 0; i < 3; i++)
    {
        if(cars[i].getHp() >= 120)
        {
            cars[i].outputData();
        }
    }
    

}

int main()
{
    Car cars[3];
    for(int i = 0; i < 3; i++)
    {
        cars[i].inputData();
        cars[i].outputData();
    }

    for(int i = 0; i < 3; i++)
    {
        if(cars)
    }
}