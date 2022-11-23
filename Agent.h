#ifndef AGENT_H
#define AGENT_H
#include "Seller.h"
#include "Buyer.h"
#include <string>
#include <list>

using namespace std;

struct listingDetails{
    Property* ownedProperty;
    double sellingPrice = 3;
    string date;
    bool soldStatus;
};

class Agent{
    private:
        Seller* contactedSeller;
        Buyer* contactedBuyer;
        //list<listingDetails*> *listing = new list<listingDetails*>;
        // removed line for new list variable probably(?)
        listingDetails tempList;

        //adding temporary variables to test agent cpp file
        double sellingPrice;
        string date;
        bool soldStatus;
    public:
        void recordOffer(listingDetails tempList);
        void contactSeller();
        void modifyListing(listingDetails tempList);
        double getSellingPrice();
        //passed listing through function

        //created getSellingPrice function()
};

#endif