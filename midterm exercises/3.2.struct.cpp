#include <iostream>
using namespace std;

struct Sibling{
    string name, type;
    int order;
};
struct Friend{
    string name, email;
    Sibling one, two;
};
void input(Friend& f)
{
    cout << "\nName of friend: ";
    cin >> f.name;
    cout << "Email: ";
    cin >> f.email;
    cout << "Info about sibling 1 (name, type, order): ";
    cin >> f.one.name >> f.one.type >> f.one.order;
    cout << "Info about sibling 2 (name, type, order): ";
    cin >> f.two.name >> f.two.type >> f.two.order;
}

void output(Friend& f)
{
    cout << "\nName of friend: " << f.name << endl;
    cout << "Email: " << f.email << endl;
    cout << "Info about sibling1 : " << f.one.name << "\t" << f.one.type << "\t" << f.one.order << endl;
    cout << "Info about sibling2 : " << f.two.name << "\t" <<f.two.type << "\t" << f.two.order << endl;
}

int main()
{
    Friend f1, f2;

    cout << "Info about friend 1: ";
    input(f1);

    cout << "Info about friend 2: ";
    input(f2);

    cout << "Friends who have at least one sister: " << endl;
    if(f1.one.type == "sister" || f1.two.type == "sister")
    {
        output(f1);
    }
    if(f2.one.type == "sister" || f2.two.type == "sister")
    {
        output(f2);
    }

    return 0;

}