#include "Agent.h"
#include <iostream>

using namespace std;

Agent::Agent(string name, Seller* contactedSeller, Buyer* contactedBuyer, listingDetails tempList){
    this->contactedSeller = contactedSeller;
    this->contactedBuyer = contactedBuyer;
    this->listOfProperties = tempList;
    this->name = name;
}

void Agent::recordOffer(listingDetails tempList)
{
    this->listOfProperties.ownedProperty = tempList.ownedProperty;
    this->listOfProperties.sellingPrice = tempList.sellingPrice;
    this->listOfProperties.date = tempList.date;
    this->listOfProperties.soldStatus = tempList.soldStatus;
}

void Agent::contactSeller(Seller *contactedSeller, listingDetails tempList)
{
    contactedSeller->respondOffer();
}
