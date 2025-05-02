#include <iostream>
#include <cstring>
using namespace std;

class File{
    public:
    char* extension;
    string name;
    int capacity;

    File(char* extention = ".txt", string name = "Test", int capacity = 5)
    {
        this->extension = new char[strlen(extension) + 1];
        strcpy(this->extension, extension);
        this->name = name;
        this->capacity = capacity;
    }
    File(File& other)
    {
        this->extension = new char[strlen(other.extension) + 1];
        strcpy(this->extension, other.extension);
        this->name = other.name;
        this->capacity = other.capacity;
    }
    ~File()
    {
        delete[]extension;
    }

    void print()
    {
        cout << "\nExtension: " << extension << endl;
        cout << "Name: " << name << endl;
        cout << "Capacity: " << capacity << " MB" << endl;
    }
};

void input(File& files)
{
    cout << "\nFile extension: ";
    cin >> files.extension;
    cout << "File name: ";
    cin >> files.name;
    cout << "Capacity: ";
    cin >> files.capacity;
}

int main()
{
    File f1, f2;

    cout << "Input data about file 1: ";
    input(f1);

    cout << "Input data about file 2: ";
    input(f2);

    cout << "Details about file with highest capacity: ";
    if(f1.capacity > f2.capacity)
    {
        f1.print();
    }
    else
    {
        f2.print();
    }

    return 0;
}