#include <iostream>
using namespace std;

class Ticket{
    private:
    int ticketID;
    string event;
    double price;

    public:
    Ticket(int tID = 0, string e = "", double p = 0.0)
    {
        ticketID = tID;
        event = e;
        price = p;
    }
    Ticket(Ticket& other)
    {
        ticketID = other.ticketID;
        event = other.event;
        price = other.price;
    }
    int getTicketID(){ return ticketID; }
    string getEvent(){ return event; }
    double getPrice() { return price; }

    void setTicketID(int tID){ ticketID = tID; }
    void setEvent(string e) { event = e; }
    void setPrice(double p) { price = p;}
    void output()
    {
        cout << "Ticket ID: " <<  ticketID << endl;
        cout << "Event: " << event << endl;
        cout << "Price: " << price << endl;
    }
};

class PremiumTicket : public Ticket{
    private:
    string extraBevarage;
    string merchendise;

    public:
    PremiumTicket(int ticketID = 0, string event = "", double price = 0.0, string eB = "", string merch = "") : Ticket(ticketID, event, price)
    {
       extraBevarage = eB;
       merchendise = merch;
    }
    PremiumTicket(PremiumTicket& other) : Ticket(other)
    {
        extraBevarage = other.extraBevarage;
        merchendise = other.merchendise;
    }

    string getEB(){ return extraBevarage; }
    string getMerch() { return merchendise;}
    void setEB(string eB){ extraBevarage = eB;}
    void setMerch(string merch) { merchendise = merch;}

    void output()
    {
        Ticket::output();
        cout << "Extra beverage: " << extraBevarage << endl;
        cout << "Merchendise: " << merchendise << endl;
    }
    double taxes(double taxPercentage)
    {
        return (getPrice() * taxPercentage) / 100.0;
    }

   
};


int main()
{
    // PremiumTicket pt1(1, "match", 250, "drink", "hat");
    // PremiumTicket pt2;
    // cout << "Enter info about ticket 2: ";
    int tID;
    string event, eB, merch;
    double price;

    // cout << "Enter info about ticket 2 (ticketID event price extraBeverage merchandise): " << endl;
    // cin >> tID >> event >> price >> eB >> merch;

    // pt2.setTicketID(tID);
    // pt2.setEvent(event);
    // pt2.setPrice(price);
    // pt2.setEB(eB);
    // pt2.setMerch(merch);
    

    // cout << "Info about ticket 1: " <<  endl;
    // pt1.output();

    // cout << "Info about ticket 2: " <<  endl;
    // cout << pt2.getTicketID() << pt2.getEvent() << pt2.getPrice() << pt2.getEB() << pt2.getMerch();

    // double taxPercentage;
    // cout << "\nEnter tax percentage: ";
    // cin >> taxPercentage;

    // double calculatedTaxes = pt1.taxes(taxPercentage);
    // cout << "Taxes on the ticket: " << calculatedTaxes << endl;

    PremiumTicket pt[3];
    for(int i = 0; i < 3; i++)
    {
        pt[i].setTicketID(ttID);
        pt[i].setEvent(event);
        pt[i].setPrice(price);
        pt[i].setEB(eB);
        pt[i].setMerch(merch);
    }

    for(int i = 0; i < 3; i++)
    {
        pt[i].output();
    }

    return 0;
}