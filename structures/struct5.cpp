#include <iostream>
using namespace std;

/*struct Student{
    int id;
    char name[50];
    int grade;
    float gpa;
    void input(){
        cout << "ID:" << id;
        cout << "\nName: " << name;
        cout << "\nGrade: " << grade;
    }
    void findGpa(){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
    {
        [i].input();
        gpa += grade;
    }
    }
};
int findMax(Student){


}

int main()
{
    Student s[100];

    cout << "GPA is: " << 


}*/

struct Student{
    int id;
    string name;
    int grades[3];
    float gpa;

    void input(int inId, string inName){
        id = inId;
        name = inName;
        for(int i = 0; i < 3; i++){
            cout << "Enter your grade: ";
            cin >> grades[i];
        }
    }
    float getGpa(){
        float average = 0;
        for(int i = 0; i < 3; i++){
            average += grades[i];
        }
        return average / 3;
    }
};

int main(){
    Student s1, s2;
    s1.input(131675, "Ana");
    s2.input(13245, "An");
    if(s1.getGpa() > s2.getGpa())
    {
        cout << "Student " << s1.name << " has the highest GPA!";
    }
    else
    {
        cout << "Studnet " << s2.name << " has the highest GPA!";
    }

    return 0;
}