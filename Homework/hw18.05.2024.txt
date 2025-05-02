#include <iostream>
using namespace std;

struct salesPerson
{
    string name;
    int id;
    double sales[12];
    double ave;
};
void inputData(salesPerson& sp)
{
    cout << "Name: ";
    cin >> sp.name;
    cout << "ID: ";
    cin >> sp.id;
    cout << "Sales: ";
    for(int i = 0; i < 12; i++)
    {
        cin >> sp.sales[i];
    }
    
}
void outputData(salesPerson sp)
{
    cout << "\nName: " << sp.name << endl;
    cout << "ID: " << sp.id << endl;
    cout << "Sales: ";
    for(int i = 0; i < 12; i++)
    {
        cout << sp.sales[i] << " ";
    }
    cout << endl;
    cout << "Average of sales: " << sp.ave << endl;
}
double findAverage(salesPerson &sp)
{
    double sum = 0;
    for(int i = 0; i < 12; i++)
    {
        sum = sum + sp.sales[i];
    }
    sp.ave = sum / 12;
    return sp.ave;
}

int main()
{
    salesPerson sp1, sp2;
    sp1.name = "person 1";
    sp1.id = 111;
    sp1.sales[0] = 100;
    sp1.sales[1] = 200;
    sp1.sales[2] = 300;
    sp1.sales[3] = 400;
    sp1.sales[4] = 500;
    sp1.sales[5] = 600;
    sp1.sales[6] = 700;
    sp1.sales[7] = 800;
    sp1.sales[8] = 900;
    sp1.sales[9] = 1000;
    sp1.sales[10] = 2000;
    sp1.sales[11] = 3000;
    findAverage(sp1);

    inputData(sp2);
    findAverage(sp2);
    outputData(sp2);

    cout << "\nSalesperson with highest average is: ";
    if(sp1.ave > sp2.ave)
    {
        outputData(sp1);
    }   
    else{
        outputData(sp2);
    }

}