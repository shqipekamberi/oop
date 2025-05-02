#include <iostream>
#include <string>
using namespace std;

class Ticket {
private:
    int ticketID;
    string event;
    double price;

public:
    Ticket(int tID = 0, string e = "", double p = 0.0) : ticketID(tID), event(e), price(p) {}

    // Copy constructor
    Ticket(const Ticket& other) : ticketID(other.ticketID), event(other.event), price(other.price) {}

    int getTicketID() const { return ticketID; }
    string getEvent() const { return event; }
    double getPrice() const { return price; }

    void setTicketID(int tID) { ticketID = tID; }
    void setEvent(string e) { event = e; }
    void setPrice(double p) { price = p; }

    void output() const {
        cout << "Ticket ID: " << ticketID << endl;
        cout << "Event: " << event << endl;
        cout << "Price: " << price << endl;
    }
};

class PremiumTicket : public Ticket {
private:
    string extraBeverage;
    string merchandise;

public:
    PremiumTicket(int ticketID = 0, string event = "", double price = 0.0, string eB = "", string merch = "")
        : Ticket(ticketID, event, price), extraBeverage(eB), merchandise(merch) {}

    // Copy constructor
    PremiumTicket(const PremiumTicket& other)
        : Ticket(other), extraBeverage(other.extraBeverage), merchandise(other.merchandise) {}

    string getExtraBeverage() const { return extraBeverage; }
    string getMerchandise() const { return merchandise; }

    void setExtraBeverage(string eB) { extraBeverage = eB; }
    void setMerchandise(string merch) { merchandise = merch; }

    double taxes() const {
        const double TAX_RATE = 0.15; // 15% tax
        return getPrice() * TAX_RATE;
    }

    void output() const {
        Ticket::output();
        cout << "Extra Beverage: " << extraBeverage << endl;
        cout << "Merchandise: " << merchandise << endl;
    }
};

int main() {
    const int numTickets = 3; // Number of tickets
    PremiumTicket tickets[numTickets];

    // Input ticket data from user
    for (int i = 0; i < numTickets; ++i) {
        int ticketID;
        string event, extraBeverage, merchandise;
        double price;

        cout << "Enter details for ticket " << (i + 1) << ":" << endl;
        cout << "Ticket ID: ";
        cin >> ticketID;
        cin.ignore(); // To ignore the newline character left in the buffer
        cout << "Event: ";
        getline(cin, event);
        cout << "Price: ";
        cin >> price;
        cin.ignore(); // To ignore the newline character left in the buffer
        cout << "Extra Beverage: ";
        getline(cin, extraBeverage);
        cout << "Merchandise: ";
        getline(cin, merchandise);

        tickets[i] = PremiumTicket(ticketID, event, price, extraBeverage, merchandise);
    }

    // Find the ticket with the lowest taxes
    PremiumTicket minTaxTicket = tickets[0];
    for (int i = 1; i < numTickets; ++i) {
        if (tickets[i].taxes() < minTaxTicket.taxes()) {
            minTaxTicket = tickets[i];
        }
    }

    // Print the ticket with the lowest taxes
    cout << "\nTicket with lowest taxes:" << endl;
    minTaxTicket.output();
    cout << "Taxes: " << minTaxTicket.taxes() << endl;

    return 0;
}
