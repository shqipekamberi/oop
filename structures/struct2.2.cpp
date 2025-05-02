//Create a structure student with attributes Name, Id, Grades[5],gpa and functions
//inputData(),outputData(),calcGpa().On the main program create and array of students
//and print students with gpa higher than 7.5
#include <iostream>
#include <cstring>
using namespace std;

struct Student{
    string name;
    int id;
    int grades[5];
    double gpa;

    void inputData(){
        cout << "Name: ";
        //cin.getline(name, 20);
        cin >> name;
        cout << "ID: ";
        cin >> id;
        for(int i = 0; i < 5; i++){
            cout << "Enter your grade: ";
            cin >> grades[i];
        }
    } 
    double calcGpa()
    {
        double sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum += grades[i];
        }
       gpa = sum / 5;
       return gpa;
    }

    void outputData(){
        cout << "\nName: " << name  << "\nID: " << id ;
        for(int i = 0; i < 5; i++){
            cout <<"\nGrades: " << grades[i];
        }
        cout << "\nGpa: " << gpa << endl;
    }  
};

int main()
{
    Student students[2];
    for(int i = 0; i < 2; i++){
        students[i].inputData();
        students[i].calcGpa();
    }
    for(int i = 0; i < 2; i++){
        if(students[i].gpa > 7.5)
        {
            cout << "\nStudents with gpa greater than 7.5: ";
            students[i].outputData();
        }
    }

    return 0;

}


