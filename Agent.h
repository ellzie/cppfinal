#ifndef AGENT_H
#define AGENT_H
#include "Seller.h"
#include "Buyer.h"
#include <string>
#include <list>

using namespace std;

struct listingDetails{
    Property* ownedProperty;
    double sellingPrice;
    string date;
    bool soldStatus;
};

class Agent{
    private:
        Seller* contactedSeller;
        Buyer* contactedBuyer;
        //list<listingDetails*> *listing;
        listingDetails listOfProperties;
        string name;
        //adding the properties list inside agent since he controls the list i think
        listingDetails listedProperties[100];
        int count = 0;
    public:
        Agent(string name,  Seller* contactedSeller,  Buyer* contactedBuyer);
        void recordOffer(listingDetails listOfProperties);
        void contactSeller(Seller *contactedSeller, listingDetails listOfProperties);
        //pass a property in and can add to list, along with all listing details
        void modifyListing(Property* p1, int sPrice, string date, bool status);
        void printList();
};

#endif