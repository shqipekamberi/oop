/*Create a structure Professor with attributes id and name and create a structure called
Course with attributes name, credits, professor (Instance of Professor struct).Add also a
function that will read/print a course. On the main create an instance of course and
input/output information from that instance.*/
#include <iostream>
using namespace std;

struct Professor{
    string name, surname;

    void inputData(){
        cout << "Enter proff. name and surname: ";
        cin >> name >> surname;
    }
};
struct Faculty{
    string name;
    Professor professor;

    void inputData(){
        cout << "Enter faculty name: ";
        cin >> name;
        cout << "\nEnter professor details: ";
        professor.inputData();
    }
    
    void outputData(){
        cout << "Faculty details: " << name << "\t" << professor.name << " " << professor.surname << endl;
    }

};

int main(){
    Faculty faculty;
    faculty.inputData();
    faculty.outputData();
    return 0;
}
