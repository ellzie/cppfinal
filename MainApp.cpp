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
    //listedProperties[0].sellingPrice = 9;
    //Agent a1;
    //a1.recordOffer(listedProperties[0]);
    //cout << a1.getSellingPrice() << endl;
    system("pause");
    return 0;
}