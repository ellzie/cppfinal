#ifndef BUYER_H
#define BUYER_H
#include "Agent.h"

using namespace std;
//FORWARD DECL
    //allows buyer to use agent and listing without being fully declared... yet
class Agent;
struct listingDetails;
class Buyer{
    public:
        // allows buyer to see property made by seller
        void consultListing(Agent* a1, listingDetails list[], int listNum);
        // contacts agent who contacts seller to make an offer
        void makeOffer(Agent* a1, int listNum, double price);
};

#endif