#ifndef BUYER_H
#define BUYER_H
#include "Agent.h"

using namespace std;

class Buyer{
    private:
        static int count = 0;
    public:
        void consultListing(Agent a1, listingDetails list[], int listNum);
        void makeOffer(Agent a1, int listNum);
};

#endif