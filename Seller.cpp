#include "Seller.h"
#include <iostream>

using namespace std;
 
Seller::Seller(Property* ownedProperty)
{
    ownedProperty->getType();
}

bool Seller::respondOffer()
{
    return true;
}
