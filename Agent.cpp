#include "Agent.h"
#include <iostream>

using namespace std;

Agent::Agent(string name, Seller* contactedSellers[], Buyer* contactedBuyers[]){
    this->name = name;
    // assigning the list
    for (int i = 0; i < 3; i++){
        this->contactedSellers[i] = contactedSellers[i];
    }
    for (int i = 0; i < 2; i++){
        this->contactedBuyers[i] = contactedBuyers[i];
    }
}

void Agent::recordOffer(listingDetails tempList)
{
    this->listOfProperties.ownedProperty = tempList.ownedProperty;
    this->listOfProperties.sellingPrice = tempList.sellingPrice;
    this->listOfProperties.date = tempList.date;
    this->listOfProperties.soldStatus = tempList.soldStatus;
}

void Agent::contactSeller(int listingNum, double price)
{ // the additions to the function allow the agent to choose which seller to contact about which house with the offer
    bool sellerDecision = contactedSellers[listingNum]->respondOffer(price, listedProperties[listingNum].ownedProperty);
    listedProperties[listingNum].soldStatus = sellerDecision;
}

void Agent::modifyListing(Property* p1, int sPrice, string date, bool status)
{
    listedProperties[count].ownedProperty = p1;
    listedProperties[count].sellingPrice = sPrice;
    listedProperties[count].date = date;
    listedProperties[count].soldStatus = status;
    count = count + 1;
}

void Agent::printList()
{
    for (int i = 0; i < 3; i++){
        cout << listedProperties[i].ownedProperty->getType() << endl;
        cout << listedProperties[i].sellingPrice << endl;
        cout << listedProperties[i].date << endl;
        string forSaleResult = listedProperties[i].soldStatus ? "Sold!" : "For Sale";
        cout << forSaleResult << endl;
        cout << endl;
    }
}
