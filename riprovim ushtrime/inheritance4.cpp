#include <iostream>
using namespace std;

class Device{
    private:
    string name, type;

    public:
    Device(string n, string t)
    {
        name = n;
        type = t;
    }
    string getName()
    {
        return name;
    }
    string getType()
    {
        return type;
    }
    void setName(string n)
    {
        name = n;
    }
    void setType(string t)
    {
        type = t;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
    }
};
class ComputerDevice : public Device{
    private:
    string production;
    float price;
    public:
    ComputerDevice(string n, string t, string prod, float pr): Device(n, t)
    {
        production = prod;
        price = pr;
    }
    string getProduction()
    {
        return production;
    }
    float getPrice()
    {
        return price;
    }
    void setProduction(string prod)
    {
        production = prod;
    }
    void setPrice(float pr)
    {
        price = pr;
    }
    void print()
    {
        Device::print();
        cout << "Production: " << production << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    ComputerDevice cd1("mac","pc","apple", 250);
    cd1.print();

    return 0;
}