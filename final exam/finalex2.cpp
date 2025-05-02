/*Define a derived class tshirt to inherit the base class cloth and add the following additional  attribute   private: 
      bool sleeve;
Then, add the following public members to the class:
●	A constructor with default arguments, copy constructor,
●	Getters and setters for attributes
●	input() and output() functions to read and print the data about the tshirt object
In the main program create 3 objects and show how to input data with the use of function input and without; then print the clothes that are black and size L with sleeve (should be true).
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
        color[n] = '\0';

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
        color[n]='\0';  
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
        cout << "\nEnter code: ";
        cin >> code;

        cout<<"\nIntput the color: ";
        cin>>color;

        cout << "Enter size: ";
        cin >> size;
    }

    void output()
    {
        cout << "\nCode: " << code << endl;
        cout << "Color: " << color << endl;
        cout << "Size: " << size << endl;
    }
};

class Tshirt : public Cloth {
    private:
    bool sleeve;

    public:
    Tshirt(int c = 0, char *col = "white", string s = "S", bool slv = true)
    {

        sleeve  = slv;
    }
    Tshirt(Tshirt& other)
    {
        sleeve = other.sleeve;
    }
    bool getSleeve()
    {
        return sleeve;
    }
    void setSleeve(bool slv)
    {
        sleeve = slv;
    }
    void input()
    {
        Cloth::input();
        cout << "\nIntput does the tshirt have sleeves(true/false): ";
        cin >> sleeve;

    }
    void output()
    {
        Cloth::output();       
        if (sleeve == true) 
        {
            cout << "Tshirt with sleeves!";
        }
        else 
        {
            cout << "Tshirt withOUT sleeves!";
        }
    }
};

int main()
{
    Tshirt t1, t2, t3(3, "Red", "M", true);

    cout << "Input data for cloth 1: " << endl;
    t1.input();

    t2.setCode(2);
    t2.setColor("Black");
    t2.setSize("L");
    t2.setSleeve(true);

    cout << "\nTshirt details: " << endl;
    t1.output();
    t2.output();
    t3.output();

    cout << endl;

    cout << "\nClothes that are black, size L and have sleeves: " << endl;
    if(strcmp(t1.getColor(), "Black") == 0 && t1.getSize() == "L" && t1.getSleeve() == true)
    {
        t1.output();
    }
    if(strcmp(t2.getColor(), "Black") == 0 && t2.getSize() == "L" && t2.getSleeve() == true)
    {
        t2.output();
    }
    if(strcmp(t3.getColor(), "Black") == 0 && t3.getSize() == "L" && t3.getSleeve() == true)
    {
        t3.output();
    }

    return 0;
}