#include "Agent.h"
#include <iostream>

using namespace std;
 
void Agent::recordOffer(listingDetails list)
{
    sellingPrice = list.sellingPrice;
}

double Agent::getSellingPrice()
{
    return sellingPrice;
}
