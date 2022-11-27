#include <iostream>
#include "AgentJason.h"
#include "Condo.h"
#include "Seller.h"
#include "Agent.h"
#include "Townhouse.h"
#include <list>
using namespace std;

// 


// Link for collaboration
// https://lucid.app/lucidchart/346a1aa3-dc34-4b39-b0c1-51e9110b52ec/edit?viewport_loc=19%2C139%2C1365%2C737%2C0_0&invitationId=inv_36880053-9db3-41d1-a294-0239c0dcd670

int main(){
    struct listingDetails listedProperties[5];
    Condo c1(300,"Condo","1/1/1970","123 Easy Street",221,2,1); // first condo
    Condo c2(500,"Condo","8/7/1986","1 Long Avenue",371,2,1.5); // second condo
    Townhouse h1(true,"TownHouse","3/23/2013","31 Moon Road",65,3,2); // first townhouse
    Seller s1(&c1);
    Seller s2(&c2);
    Seller s3(&h1);
    Buyer b1;
    // how do we define agent, do we have multiple or just one managing multiple sellers
    // how many sellers?
    
    // atleast 2 sellers to prompt, 3rd seller gets uhh, nothing!

    //Agent a1;

    // Maybe this can be a function under agent?
    listedProperties[0].ownedProperty = &c1;
    listedProperties[0].sellingPrice = 300'000;
    listedProperties[0].date = "3/21/2020";
    listedProperties[0].soldStatus = false;
    
    // this is kind of what I want the Show Listing thing to look like
    for (int i = 0; i < 1; i++){
        cout << listedProperties[i].ownedProperty->getType() << endl;
        cout << listedProperties[i].sellingPrice << endl;
        cout << listedProperties[i].date << endl;
        string forSaleResult = listedProperties[i].soldStatus ? "Sold!" : "For Sale"; // Ternary Operator
        cout << forSaleResult << endl;                                              // condition ? ifTrue : ifFalse
    }                                                                               // pretty neat

    //listedProperties[0].sellingPrice = 9;
    
    //a1.recordOffer(listedProperties[0]);
    //cout << a1.getSellingPrice() << endl;


    system("pause");
    return 0;
}