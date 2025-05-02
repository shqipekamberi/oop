#include <iostream>
using namespace std;

class OperatingSystem{
    public:
    char* name;
    double version;
    int capacity;

    OperatingSystem(char* name = "macOS", double version = 11, int capacity = 9)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->version = version;
        this->capacity = capacity;
    }
    OperatingSystem(OperatingSystem& other)
    {
        this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
        this->version = other.version;
        this->capacity = other.capacity;
    }
    ~OperatingSystem()
    {
        delete[]name;
    }

    void input()
    {
        cout << "\nName: ";
        cin >> name;
        cout << "Version: ";
        cin >> version;
        cout << "Capacity: ";
        cin >> capacity;
    }

    void output()
    {
        cout << "\nName: " << name << endl;
        cout << "Version: " << version << endl;
        cout << "Capacity: "<< capacity << endl;
    }
};
int findMinCapacity(OperatingSystem* os[]){
    int min = os[0]->capacity;
    for(int i = 0; i < 3; i++)
    {
        if(os[i]->capacity < min)
        {
            min = os[i]->capacity;
        }
    }
    return min;
}
int findCapacity5(OperatingSystem os[])
{
    for(int i = 0; i < 3; i++)
    {
        if(os[i].capacity == 5)
        {
            os[i].output();
        }
    }
}
int findWindowsOS(OperatingSystem os[])
{
    for(int i = 0; i < 3; i++)
    {
        if(os[i].name == "Linux")
        {
            os[i].output();
        }
    }

}

int main()
{
    OperatingSystem os[3];

    for(int i = 0; i < 3; i++)
    {
        os[i].input();
    }

       // findMinCapacity(os);
    cout << "OS with capacity 5: " << endl;
    findCapacity5(os);

    cout << "OS with name 'Linux': " << endl;
    findWindowsOS(os);
    return 0;
}