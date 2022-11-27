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
    public:
        Agent(string name,  Seller* contactedSeller,  Buyer* contactedBuyer, listingDetails listOfProperties);
        void recordOffer(listingDetails listOfProperties);
        void contactSeller(Seller *contactedSeller, listingDetails listOfProperties);
        void modifyListing(listingDetails listOfProperties);
        // deleted getSellingPrice function
};

#endif