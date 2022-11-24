#include <iostream>
#include "AgentJason.h"
#include <list>
using namespace std;

// 


// Link for collaboration
// https://lucid.app/lucidchart/346a1aa3-dc34-4b39-b0c1-51e9110b52ec/edit?viewport_loc=19%2C139%2C1365%2C737%2C0_0&invitationId=inv_36880053-9db3-41d1-a294-0239c0dcd670

int main(){
    cout << "real" << endl;
    cout << "Yep" << endl;

    struct listingDetails listedProperties[5];
    listedProperties[0].sellingPrice = 9;
    Agent a1;
    a1.recordOffer(listedProperties[0]);
    cout << a1.getSellingPrice() << endl;
    system("pause");
    return 0;
}