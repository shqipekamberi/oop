/*Define a class product with the public data members, 
   char *name;
    string producer;
    int quantity;
    double price;
and functions:
-constructor with default arguments
-copy constructor
- function input() to read the data about a class object
- function output() to print the data of a class object
Create 2 objects and input the data about products,then print the data of the more expensive product (with the function output() and without it)
Write a code to declare an array of products, read the data about each product.Use the class function input()
Define a main program function inputProduct()to input data about a product
Find all the milk products (according name attribute) that are cheaper than 50 denars. 
Find the cheapest milk product from an array of products and print the data on the screen.
Define functions for requirements iii) and iv).*/
#include <iostream>
#include <cstring>
using namespace std;

class Product{
    public:
    char* name;
    string producer;
    int quantity;
    double price;

    Product(char* name = "Product 1", string producer = "Producer 1", int quantity = 1, double price = 1)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->producer = producer;
        this->quantity = quantity;
        this->price = price;
    }
    Product(Product& other)
    {
        this->name = new char[strlen(other.name) + 1];
        strcpy(this->name, other.name);
        this->producer = other.producer;
        this->quantity = other.quantity;
        this->price = other.price;
    }
    ~Product()
    {
        delete[]name;
    }

    void inputData()
    {
        cout << "Product name: ";
        cin >> name;
        cout << "Producer: ";
        cin >> producer;
        cout << "Quatity: ";
        cin >> quantity;
        cout << "Price: ";
        cin >> price;
    }
    void outputData()
    {
        cout << "Product name: " << name << endl;
        cout << "Producer: " << producer << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
    }

};
void inputProduct(Product& product)
{
    cout << "Product name: ";
    cin >> product.name;
    cout << "Producer: ";
    cin >> product.producer;
    cout << "Quatity: ";
    cin >> product.quantity;
    cout << "Price: ";
    cin >> product.price;
}

void findCheaperMilk(Product& product)
{
    string productName = product.name;
    if(strcmp(product.name, "milk") && product.price < 50)
    {
        product.outputData();
    }
}
void findCheapestMilk(Product product[], int n)
{
    int min = product[0].price;
    for(int i = 0; i < n; i++)
    {
        if(strcmp(product[i].name, "milk") && product[i].price < min)
        {
            product[i].outputData();
        }
    }
}

int main()
{
    Product p1, p2;
    cout << "Information about product 1: " << endl;
    p1.inputData();
    cout << "Infromation about product 2: " << endl;
    p2.inputData();

    //with function
    cout << "Product with more expensive price is: " << endl;
    if(p1.price > p2.price)
    {
        p1.outputData();
    }
    else 
    {
        p2.outputData();
    }
    //without function
    cout << "Product with more expensive price: ";
    if(p1.price > p2.price)
    {
        cout << p1.name << "  " << p1.producer << " " << p1.quantity << "  " << p1.price << endl;
    }
    else
    {
        cout << p2.name << "  " << p2.producer << " " << p2.quantity << "  " << p2.price << endl;
    }

    cout << "Milk cheaper than 50 denars: " << endl;
    if(strcmp(p1.name, "milk") && p1.price < 50)
    {
        p1.outputData();
    }
    if(strcmp(p2.name, "milk") && p2.price < 50)
    {
        p2.outputData();
    }
    cout << "Milk cheaper than 50 denars: " << endl;
    findCheaperMilk(p1);
    findCheaperMilk(p2);

    Product p[3];
    for(int i = 0; i < 3; i++)
    {
        p[i].inputData();
    }
    
    int min = p[0].price;
    cout << "Cheapest milk product is: " << endl;
    for(int i = 0; i < 3; i++)
    {
        if(strcmp(p[i].name, "milk") && p[i].price < min)
        {
            p[i].outputData();
        }
    }
    cout << "Cheapest milk product is: " << endl;
    findCheapestMilk(p, 3);

    return 0;  
}