#ifndef AGENT_H
#define AGENT_H
#include "Seller.h"
#include "Buyer.h"
#include <string>
#include <list>

using namespace std;

// listing of property struct

struct listingDetails{
    Property* ownedProperty;
    double sellingPrice;
    string date;
    bool soldStatus;
    double mostRecentOffer;
};
class Buyer;
// mostly just changed declarations here
class Agent{
    private:
        Seller* contactedSellers[100];
        Buyer* contactedBuyers[100];
        listingDetails listOfProperties;
        string name;
        listingDetails listedProperties[100];
        int count = 0;
    public:
        //assigning buyers and sellers to a singular agent
        Agent(string name,  Seller* contactedSellers[],  Buyer* contactedBuyers[]);
        //records the details of the list of properties
        void recordOffer(listingDetails listOfProperties);
        // contacts seller for when buyer makes an offer
        void contactSeller(int listingNum, double price);
        // agent can modify a property listing
        void modifyListing(Property* p1, int sPrice, string date, bool status);
        //prints list
        void printList();
};

#endif