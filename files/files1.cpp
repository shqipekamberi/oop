#include <iostream>
#include <fstream>
using namespace std;

class Student{
    public:
    string name;
    int id, age;
    Student(string name, int age, int id)
    {
        this->name = name;
        this->age = age;
        this->id = id;
    }
};

int main()
{
    //writing
    ofstream obj("test.txt", ios::out);
    cout << "This line will be on file";
    obj << "This line will be on file";

    cout << endl;
    Student s1("test", 18, 1112);
    ofstream o("file.txt", ios::out);

    if(!o){
        cout << "Error Opening File!";
        exit(1);
    }

    o << s1.name << " " << s1.age << " " << s1.id;
    o.close();

    //reading
    ifstream read("file.txt", ios::in);
    
    while(read >> s1.name >> s1.age >> s1.id)
    {
        cout << s1.name << " " << s1.age << " " << s1.id;
    }

   
   return 0;
}