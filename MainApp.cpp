#include <iostream>
#include "Condo.h"
#include "Agent.h"
#include "Townhouse.h"
using namespace std;

// Link for collaboration
// https://lucid.app/lucidchart/346a1aa3-dc34-4b39-b0c1-51e9110b52ec/edit?viewport_loc=19%2C139%2C1365%2C737%2C0_0&invitationId=inv_36880053-9db3-41d1-a294-0239c0dcd670

int main(){
    struct listingDetails listedProperties[5]; // list of properties
    Condo c1(300,"Condo","1/1/1970","123 Easy Street",221,2,1); // first condo
    Condo c2(500,"Condo","8/7/1986","1 Long Avenue",371,2,1.5); // second condo
    Townhouse h1(true,"Town House","3/23/2013","31 Moon Road",65,3,2); // first townhouse
    Seller s1(&c1); // sells the first condo (will not get an offer, too expensive for the area)
    Seller s2(&c2); // sells the second condo 
    Seller s3(&h1); // sells the town house
    Buyer b1; //buyers
    Buyer b2;
    // Assigning AGENT PERRY *agent p!!!!!!* to deal with *all the properties
    // cause hes the goat, well the platypus i guess
    Seller *listOfSellers[2]; //list of seller pointers
    listOfSellers[0] = &s1; //assigning listofseller to seller pointer objects
    listOfSellers[1] = &s2;
    listOfSellers[2] = &s3;
    Buyer *listOfBuyers[1]; //list of buyer pointers
    listOfBuyers[0] = &b1; //assigning buyer to list
    listOfBuyers[1] = &b2;
    //creating agent
    Agent a1("Perry", listOfSellers, listOfBuyers);

    //having agent modify listings in accordance to the properties
    a1.modifyListing(&c1, 300'000, "3/21/2020", false);
    a1.modifyListing(&c2, 450'000, "7/01/2019", false);
    a1.modifyListing(&h1, 88'000, "1/11/2019", false);

    a1.printList(); // Original List
    
    //buyers make offer
    b1.makeOffer(&a1,1,425'000);
    b2.makeOffer(&a1,2,68'000);

    cout << "\n\n\n\n\n" << endl;

    a1.printList(); // new bought list
    system("pause");
    return 0;
}