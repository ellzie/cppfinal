#ifndef SELLER_H
#define SELLER_H
#include "Property.h"
using namespace std;

class Seller{
    private:
        Property* ownedProperty;
    public:
        //constructor for seller to be assigned a property (ie 1 seller for 1 property)
        Seller(Property* ownedProperty);
        // responds to the buyers offer
        bool respondOffer(double price, Property* ownedPropertyFromAgent);
};

#endif