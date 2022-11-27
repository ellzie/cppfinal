#include "AgentJason.h"
#include <iostream>

using namespace std;

Agent::Agent(Seller* contactedSeller,Buyer* contactedBuyer, listingDetails tempList){
    this->contactedSeller = contactedSeller;
    this->contactedBuyer = contactedBuyer;
    this->tempList = tempList;
}

void Agent::recordOffer(listingDetails list)
{
    sellingPrice = list.sellingPrice;
    date = list.date;
    soldStatus = list.soldStatus;
}

void Agent::contactSeller(Seller *contactedSeller, listingDetails tempList)
{
    
}

double Agent::getSellingPrice()
{
    return sellingPrice;
}
