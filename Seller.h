#ifndef SELLER_H
#define SELLER_H
#include "Property.h"
using namespace std;

class Seller{
    private:
        Property* ownedProperty;
    public:
        Seller(Property* ownedProperty);
        // void contactAgent(); // i actually dont think we need this function
        bool respondOffer(double price, Property* ownedPropertyFromAgent);
        // changed declarations
};

#endif