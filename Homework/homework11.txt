//1.Write a C++ program to create a structure called Student with attributes name, age, and grade. 
//Then, create an array of 5 Student objects and display their details. (Use functions for printing the data)
#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int grade;

    void inputData()
    {
        cout << "\nName: ";
        cin >> name;
        cout << "\nAge: ";
        cin >> age;
        cout << "\nGrade: ";
        cin >> grade;
    }

    void printData()
    {
        cout << "Name: " << name << " Age: " << age << " Grade: " << grade << endl;
    }
};

int main()
{
    Student students[5];

    for(int i = 0; i < 5; i++)
    {
        students[i].inputData();
    }

    for(int i = 0; i < 5; i++)
    {
        students[i].printData();
    }
    return 0;
}


/*2. Extend the previous program to include a nested structure. Define a structure called Address with attributes street, city, and zipcode. 
Modify the Student structure to include an Address object. Update the program to prompt the user to enter details for each student 
including their address, and then display all the student details.*/

#include <iostream>
using namespace std;

struct Address{
    string street;
    string city;
    int zipcode;
    void inputData(){
        cout << "Street: ";
        cin >> street;
        cout << "City: ";
        cin >> city;
        cout << "Zipcode: ";
        cin >> zipcode;
    }
};

struct Student{
    string name;
    int age;
    int grade;
    Address address;

    void inputData()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Grade: ";
        cin >> grade;
        cout << "\nAddress" << endl;
        address.inputData();
    }

    void printData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
        cout << "\nAddress " << endl;
        cout << "Street: " << address.street << endl;
        cout << "City: " << address.city << endl;
        cout << "Zipcode: " << address.zipcode << endl;
    }
};

int main()
{
    Student students[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter details for student " << i + 1 << ": " << endl;
        students[i].inputData();
    }

    for(int i = 0; i < 5; i++)
    {
        cout << "\nDetails of student " << i + 1 << ": " << endl;
        students[i].printData();
        cout << endl;
    }
    return 0;
}

/* 3. Create a C++ program that manages a list of students enrolled in different courses. Define a structure Course with attributes 
courseName and students, where students is an array of Student objects. Implement functions to add a new course, enroll a student 
in a course, and display all courses with their enrolled students' details.*/
#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;

    void inputData(){
        cout << "Name: ";
        cin >> name;
        cout << "Age:" ;
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

    void addCourse()
    {
        cout << "Enter course name: ";
        cin >> courseName;
        numOfStudents = 0;
    }

    void enrollStudent()
    {
        int addStudents;
        cout << "Enter number of students to enroll: ";
        cin >> addStudents;

        for(int i = 0; i < addStudents; i++)
        {
            cout << "Enter student details for course " << courseName << ": " << endl;
            students[numOfStudents].inputData();
            numOfStudents++;

            char choose;
            cout << "Do you want to add another students (y/n): ";
            cin >> choose;
            if(choose != 'y')
            {
                break;
            }
        }
    }

    void display()
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
        courses[i].display();
    }

    return 0;
}