#include <iostream>
//#include "AgentJason.h"
#include "Condo.h"
#include "Seller.h"
#include "Agent.h"
#include "Townhouse.h"
#include <list>
using namespace std;

// will define agent soon. setting up all the listing stuff and creating objects
    // oh yeah agent is defined. so is a masterlist that only agent can control


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

    // Assigning AGENT PERRY *agent p!!!!!!* to deal with property condo 1
    // and so on and so forth with another agent
    Agent a1("Perry", &s1, &b1);
    //Agent a2("tom", &s1, &b1);
    //Agent a3("tom", &s1, &b1);

    // adding properties to the master list. ignore above this is the new way.
    a1.modifyListing(&c1, 300'000, "3/21/2020", false);
    a1.modifyListing(&c2, 450'000, "7/01/2019", false);
    a1.modifyListing(&h1, 88'000, "1/11/2019", false);

    a1.printList();

    system("pause");
    return 0;
}