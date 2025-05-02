#include <iostream>
using namespace std;

struct ID{
    int number;
    string IDclass;
};
struct Ticket{
    ID ticketID;
    string event;
    double price;

    void inputInfo()
    {
        cout << "Enter number: ";
        cin >> ticketID.number;
        cout << "Enter ticket class: ";
        cin >> ticketID.IDclass;
        cout << "Enter event: ";
        cin >> event;
        cout << "Enter price: ";
        cin >> price;
    }

    void outputInfo()
    {
        cout << "Number: " << ticketID.number << endl;
        cout << "Class: " << ticketID.IDclass << endl;
        cout << "Event: " << event << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Ticket t1, t2, t3;

    cout << "Enter data of ticket 1: ";
    t1.inputInfo();
    cout << "Enter data of ticket 2: ";
    t2.inputInfo();
    cout << "Enter data of ticket 3: ";
    t3.inputInfo();

    cout << endl;

    t1.outputInfo();
    t2.outputInfo();
    t3.outputInfo();

    cout << endl;

    cout << "Enter data of ticket 1: ";
    cin >> t1.ticketID.number >> t1.ticketID.IDclass >> t1.event >> t1.price;
    cout << endl;

    cout << "Data about ticket 2: ";
    cout << t2.ticketID.number << "\t" << t2.ticketID.IDclass << "\t" << t2.event << "\t" << t2.price;

    cout << "The tickets that should be printed: " << endl;
    if(t1.event == "concert" && t1.ticketID.IDclass == "super")
    {
        t1.outputInfo();
    }
    if(t2.event == "concert" && t2.ticketID.IDclass == "super")
    {
        t2.outputInfo();
    }
    if(t3.event == "concert" && t3.ticketID.IDclass == "super")
    {
        t3.outputInfo();
    }

    return 0;
}
