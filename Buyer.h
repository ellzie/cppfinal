#ifndef BUYER_H
#define BUYER_H
#include "Agent.h"

using namespace std;
class Agent;
struct listingDetails;
class Buyer{
    public:
        void consultListing(Agent* a1, listingDetails list[], int listNum);
        void makeOffer(Agent* a1, int listNum, double price);
};

#endif