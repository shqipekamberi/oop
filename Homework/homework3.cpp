/* 3. Create a C++ program that manages a list of students enrolled in different courses. Define a structure Course with attributes 
courseName and students, where students is an array of Student objects. Implement functions to add a new course, enroll a student 
in a course, and display all courses with their enrolled students' details.*/

#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;

    void inputData()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
    }

    void printData()
    {
        cout << "Name: " << name << " Age: " << age << endl;
    }
};
struct Course{
    string courseName;
    Student students[100];
    int numOfStudents;

    void addCourse(){
        cout << "Enter course name: ";
        cin >> courseName;
        numOfStudents = 0;
        /*cin >> courses[numOfCourses].courseName;
        courses[numOfCourses].numStudents = 0;*/

    }

    void enrollStudent()
    {
        int addStudents;
        cout << "Enter maximum number of students: ";
        cin >> addStudents;
    
        for (int i = 0; i < addStudents; ++i)
        {
            cout << "Enter student details for course " << courseName << ": " << endl;
            students[numOfStudents].inputData();
            numOfStudents++;

            char choice;
            cout << "Do you want to enroll another student(y/n): ";
            cin >> choice;
            if (choice != 'y') 
            {
                break;
            }
        }
    }

    void displayData()
    {
        cout << "Students enrolled in course " << courseName << ": " << numOfStudents << " students" << endl;
        for(int i = 0; i < numOfStudents; i++)
        {
            students[i].printData();
        }
    } 
};
int main()
{
    Course courses[10];
    int numOfCourses;
    cout << "Enter number of courses: ";
    cin >> numOfCourses;

    for(int i = 0; i < numOfCourses; i++)
    {
        courses[i].addCourse();
        courses[i].enrollStudent();
    }

    for(int i = 0; i < numOfCourses; i++)
    {
        courses[i].displayData();
    }

    return 0;
    
}




        /*Student newStudent;
                                                cout << "Enter student details for course " << courseName << ": " << endl;
                                                students[numStudents].inputData();
                                                numStudents++;*/
