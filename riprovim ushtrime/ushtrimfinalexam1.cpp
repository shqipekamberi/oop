#include <iostream>
using namespace std;

struct ID{
    int number;
    string classes;
};
struct Ticket{
    ID ticketID;
    string event;
    double price;

    void inputInfo()
    {
        cout << "Enter ID info (number, class): ";
        cin >> ticketID.number >> ticketID.classes;
        cout << "Enter event: ";
        cin >> event;
        cout << "Enter price: ";
        cin >> price;
    }
    void outputInfo()
    {
        cout << "ID number: " << ticketID.number << endl;
        cout << "ID class: " << ticketID.classes << endl;
        cout << "Event: " << event << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Ticket t1, t2, t3;

    cout << "Enter info about ticket 1: " << endl;
    t1.inputInfo();

    cout << "Enter id number about ticket 2: " << endl;
    cin >> t2.ticketID.number;
    cout << "Enter id class about ticket 2: " << endl;
    cin >> t2.ticketID.classes;
    cout << "Enter evnt of ticket 2: " << endl;
    cin >> t2.event;
    cout << "Enter price of ticket 2: " << endl;
    cin >> t2.price;

    cout << "Enter info about ticket 3: " << endl;
    t3.inputInfo();

    // cout << "Information about ticket1: " << endl;
    // t1.outputInfo();

    // cout << "Information about ticket 2: " << endl;
    // cout << "ID number: " << t2.ticketID.number << endl;
    // cout << "ID class: " << t2.ticketID.classes << endl;
    // cout << "Event: " << t2.event << endl;
    // cout << "Price: " << t2.price << endl;

    // cout << "Information about ticket 3: " << endl;
    // t3.outputInfo();

    cout << "Events that are a concert and have id class super: " << endl;

    if(t1.event == "concert" && t1.ticketID.classes == "super")
    {
        t1.outputInfo();
    }
    if(t2.event == "concert" && t2.ticketID.classes == "super")
    {
        cout << "ID number: " << t2.ticketID.number << endl;
        cout << "ID class: " << t2.ticketID.classes << endl;
        cout << "Event: " << t2.event << endl;
        cout << "Price: " << t2.price << endl;
    }
    if(t3.event == "concert" && t3.ticketID.classes == "super")
    {
        t3.outputInfo();
    }

    return 0;
}