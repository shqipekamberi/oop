/*Define a base class cloth with the following attributes   private: 
        int code;
        char* color;
        string size;
Then, add the following public members to the class:
●	A constructor with default arguments, copy constructor,
●	Getters and setters for attributes
●	input() and output() functions to read and print the data about the cloth object
In the main program create 3 objects and show how to input data with the use of function input and without; then print the clothes that are black and size L.
*/
#include <iostream>
#include <cstring>

using namespace std;

class Cloth {
    private:
    int code;
    char* color;
    string size;
    
    public:
    Cloth(int c = 0, char* col = (char*) "white", string s = "XS")
    {
        code = c;

        int n = strlen(col);
        color = new char[n + 1];
        strcpy(color, col);

        size  = s;
    }
    Cloth(Cloth& other)
    {
        code = other.code;

        int n = strlen(other.color);
        color = new char[n+1];
        strcpy(color, other.color);

        size = other.size;
    }
    ~Cloth(){
        delete[]color;
    }

    int getCode()
    {
        return code;
    }
    void setCode(int c){
        code = c;
    }
    char* getColor()
    {
        return color;
    }
    void setColor(char* col)
    {
        int n = strlen(col);
        color = new char[n+1];
        strcpy(color, col);
    }
    string getSize()
    {
        return size;
    }
    void setSize(string s)
    {
        size  = s;
    }

    void input()
    {
        cout << "Enter code: ";
        cin >> code;

        cout<<"\nIntput the color: ";
        cin>>color;

        cout << "Enter size: ";
        cin >> size;
    }

    void output()
    {
        cout << "Code: " << code << endl;
        cout << "Color: " << color << endl;
        cout << "Size: " << size << endl;
    }
};

int main()
{
    Cloth cloth1, cloth2, cloth3(3, "Red", "M");

    cout << "Input data for cloth 1: " << endl;
    cloth1.input();

    cloth2.setCode(2);
    cloth2.setColor("Black");
    cloth2.setSize("L");

    cout << "Cloth details: ";
    cloth1.output();
    cloth2.output();
    cloth3.output();

    cout << "Clothes that are black and size L: " << endl;
    if(strcmp(cloth1.getColor(), "Black") == 0 && cloth1.getSize() == "L")
    {
        cloth1.output();
    }
    if(strcmp(cloth2.getColor(), "Black") == 0 && cloth2.getSize() == "L")
    {
        cloth2.output();
    }
    if(strcmp(cloth3.getColor(), "Black") == 0 && cloth3.getSize() == "L")
    {
        cloth3.output();
    }

    return 0;
}