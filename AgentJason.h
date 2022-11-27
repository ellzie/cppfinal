#ifndef AGENT_H
#define AGENT_H
#include "Seller.h"
#include "Buyer.h"
#include <string>
#include <list>

// passing two args through contactSeller
//  -contactedSeller to send information to and store
//  -templist details for info to store to seller

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
        listingDetails tempList;
        // what are these for
        double sellingPrice;
        string date;
        bool soldStatus;
    public:
        Agent(Seller* contactedSeller,Buyer* contactedBuyer, listingDetails tempList);
        void recordOffer(listingDetails tempList);
        void contactSeller(Seller *contactedSeller, listingDetails tempList);
        void modifyListing(listingDetails tempList);
        double getSellingPrice();
        friend Seller contactSeller(Seller *contactedSeller, listingDetails tempList);
};

#endif