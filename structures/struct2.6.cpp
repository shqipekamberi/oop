//now course has an array of prof and on main function crate array of courses
#include <iostream>
using namespace std;

struct Professor{
    int id;
    string name;
    void inputData(){
       
        cout << "Enter professor name and id: ";
        cin >> name >> id;
    //for(int i = 0; i < 3; i++)
    }
};
struct Course{
    string name;
    int credits; 
    Professor professor[3];

    void inputData(){
        cout << "Enter name of course: ";
        cin >> name;
        cout << "\nEnter credits of course: ";
        cin >> credits;
        for(int i = 0; i < 3; i++){
        cout << "\nEnter professor information";
        professor[i].inputData();
        }
    }
    void outputData(){
        cout << "Course details: " << name << credits; 

        for(int i = 0; i < 3; i++)
        {
            cout << professor[i].name << professor[i].id << endl;
        }
    }
};

int main(){

    Course course[3];
    for(int i = 0; i < 3; i++)
    {
        course[i].inputData();
        course[i].outputData();
    }

    return 0;
}