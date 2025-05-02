#include <iostream>
using namespace std;

struct Pizza{
    string name;
    float price;
};
struct Pizzeria{
    string name, email;
    Pizza offered_pizza;
};
void input(Pizzeria& pizzeria)
{
    cout << "Name of pizzeria: ";
    cin >> pizzeria.name;
    cout << "Email of pizzeria: ";
    cin >> pizzeria.email;
    cout << "Name of pizza: ";
    cin >> pizzeria.offered_pizza.name;
    cout << "Price of pizza: ";
    cin >> pizzeria.offered_pizza.price;
}

void output(const Pizzeria& pizzeria)
{
    cout << "Name of pizzeria: " << pizzeria.name << endl;
    cout << "Email of pizzeria: " << pizzeria.email << endl;
    cout << "Name of pizza: " << pizzeria.offered_pizza.name << endl;
    cout << "Price of pizza: " << pizzeria.offered_pizza.price << endl;
}

int main()
{
    Pizzeria p[3];

     for (int i = 0; i < 3; i++) {
        cout << "Enter details for Pizzeria " << i + 1 << endl;
        input(p[i]);
    }

    string userInput;
    cout << "Enter pizza name to search: ";
    cin >> userInput;

    for (int i = 0; i < 3; i++) {
        if (p[i].offered_pizza.name == userInput) {
            output(p[i]);
        }
    }

    return 0;
}