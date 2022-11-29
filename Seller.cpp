#include "Seller.h"
#include "Agent.h"
#include <iostream>

using namespace std;
 
Seller::Seller(Property* ownedProperty)
{ 
    ownedProperty->getType();
    // this just gets property type and the seller is connected to that property
}

bool Seller::respondOffer(double price, Property* ownedPropertyFromAgent)
{ // VERY extensive algorithm to determine if he should buy or sell (do not do with real money)
    if ((ownedPropertyFromAgent->getType() == "Condo") && (price > 400'000 ))
        return true;
    else if (ownedPropertyFromAgent->getType() == "Town House")
        return true;
    else 
        return false;
}