#include "Buyer.h"
#include <iostream>

using namespace std;

void Buyer::consultListing(Agent a1, listingDetails list[], int listNum)
{
    cout << list[listNum].ownedProperty->getType() << endl;
    cout << list[listNum].sellingPrice << endl;
    cout << list[listNum].date << endl;
    string forSaleResult = list[listNum].soldStatus ? "Sold!" : "For Sale";
    cout << forSaleResult << endl;
    cout << endl;
}

void Buyer::makeOffer(Agent a1, int listNum)
{
    a1.contactSeller(listNum, listNum);
}
