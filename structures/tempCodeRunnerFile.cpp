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