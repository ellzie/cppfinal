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
        list<listingDetails*> *listing;
    public:
        void recordOffer();
        void contactSeller();
        void modifyListing();
};

#endif