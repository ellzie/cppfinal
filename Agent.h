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
        list<listingDetails*> *listing;
    public:
        void recordOffer(listingDetails tempList);
        void contactSeller(Seller *contactedSeller, listingDetails tempList);
        void modifyListing(listingDetails tempList);
        double getSellingPrice();
        //passed listing through function

        //created getSellingPrice function()
};

#endif