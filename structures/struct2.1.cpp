//create structure with attributes id, name, gpa, input and output data /create array of students and find students with average above 8 
#include <iostream>
using namespace std;

struct Student{
    char name[20];
    int id;
    double ave;
};
void input(Student std)
{
    cout << "\nInput the name, id, ave: \n";
    cin >> std.name >> std.id >> std.ave;
}
void output(Student s1)
{
    cout << "\nData about student s1: \n" << s1.name << "\t" << s1.id << "\t" << s1.ave << endl;
}
int main()
{
    Student s1, s2, s3;
    Student s[2];
    cout << "\nInput data about std:\n";
    for(int i = 0; i < 2; i++){
        input(s[i]);
    }
    cout <<"Data about std with average >8: ";
    for(int i = 0; i < 3; i++)
    {
        if(s[i].ave >= 8)
        {
            output(s[i]);
        }
    }
   
    return 0;

   /*cout << " Input data about the student s1: \n";

    cin >> s1.name >> s1.id >> s1.ave;
    cout << "\nData about student s1: \n" << s1.name << "\t" << s1.id << "\t" << s1.ave << endl;*/

}