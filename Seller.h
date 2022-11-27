 #ifndef SELLER_H
#define SELLER_H
#include "Property.h"
using namespace std;

class Seller{
    private:
        Property* ownedProperty;
    public:
        Seller(Property* ownedProperty);
        void contactAgent();
        bool respondOffer();
};

#endif