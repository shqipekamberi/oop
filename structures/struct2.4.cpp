//struct prof with id and name struct course name credits prof, read and print course, main input output information
#include <iostream>
using namespace std;

struct Professor{
    int id;
    string name;
    void inputData(){
        cout << "Enter professor name and id: ";
        cin >> name >> id;
    }
};
struct Course{
    string name;
    int credits;
    Professor professor;

    void inputData(){
        cout << "Enter name of course: ";
        cin >> name;
        cout << "\nEnter credits of course: ";
        cin >> credits;
        cout << "\nEnter professor information: ";
        professor.inputData();
    }
    void outputData(){
        cout << "Course details: " << name << credits << professor.name << professor.id << endl;
    }
};

int main(){
    Course course;
    course.inputData();
    course.outputData();
}