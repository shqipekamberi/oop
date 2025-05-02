//midterm example 2
#include <iostream>
using namespace std;

struct Product{
    int productNumber, price, quantity;

    void printProduct()
    {
        cout << "\nProduct number: " << productNumber << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

void printCriticalProducts(Product product[], int size)
{
    for(int i = 0; i < 3; i++)
    {
        if(product[i].quantity < 10)
        {
            product->printProduct();
        }
    }
}

int main()
{
    Product product[3];
    //product[0] = {123, 25, 12};
    //product[1] = {124, 23, 6};
    //product[2] = {125, 28, 15};
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for product: " << endl;
        cin >> product[i].productNumber >> product[i].price >> product[i].quantity;   
    }

    cout << "List of products created: ";
    for(int i = 0; i < 3; i++)
    {
        product[i].printProduct();
    }

    cout << "Products that have quantity less than 10: ";
    printCriticalProducts(product, 3);
 
    return 0;
}