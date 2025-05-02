#include <iostream>
using namespace std;

class Ticket{
    private:
    int tickedID;
    string event;
    double price;

    public:
    int getTickedID()
    {
        return tickedID;
    }
    string getEvent()
    {
        return event;
    }
    double getPrice()
    {
        return price;
    }

    void setTicketID(int ticketID)
    {
        this->tickedID = tickedID;
    }
    void setEvent(string event)
    {
        this->event = event;
    }
    void setPrice(double price)
    {
        this->price = price;
    }

    void input()
    {
        cout << "Enter ticket id: ";
        cin >> tickedID;
        cout << "Enter event: ";
        cin >> event;
        cout << "Enter price: ";
        cin >> price;
    }
    void output()
    {
        cout << "Ticket ID: " << tickedID << endl;
        cout << "Event: " << event << endl;
        cout << "Price: " << price << endl;
    }
};

class PremiumTicket : public Ticket{
    private:
    string extraBevarage;
    string merchendise;

    public:
    PremiumTicket(string EB = "drink", string merch = "hat")
    {
        extraBevarage = EB;
        merchendise = merch;
    }
    PremiumTicket(PremiumTicket& other)
    {
        extraBevarage = other.extraBevarage;
        merchendise = other.merchendise;
    }
    string getEB()
    {
        return extraBevarage;
    }
    string getMerchendise()
    {
        return merchendise;
    }

    void setEB(string EB)
    {
        extraBevarage = EB;
    }
    void setMerchendise(string merchendise)
    {
        this->merchendise = merchendise;
    }

    void input()
    {
        Ticket::input();
        cout << "Enter extra beverage: ";
        cin >> extraBevarage;
        cout << "Enter merchendise: ";
        cin >> merchendise;
    }

    void output()
    {
        Ticket::output();
        cout << "Extra beverage: " << extraBevarage << endl;
        cout << "Merchendise: " << merchendise << endl;
    }
};

int main()
{
    PremiumTicket ticket1;

    ticket1.input();
    ticket1.output();

    return 0;
}