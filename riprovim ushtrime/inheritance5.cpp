#include <iostream>
using namespace std;

class Training{
    protected:
    int id;
    string name;

    public:
    Training(int id, string n)
    {
        this->id = id;
        name = n;
    }

    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    void setID(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        this->name = name;
    }
};

class TopTraining: public Training{
    private:
    int value;
    public:
    TopTraining(int id, string name, int v):Training(id, name)
    {
        value = v;
    }
    int getValue()
    {
        return value;
    }
    void setValue(int v)
    {
        value = v;
    }

    void print()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Value: " << value << endl;
    }

};

int main()
{
    TopTraining tt1(1,"ana", 100);

    tt1.print();

    return 0;
}