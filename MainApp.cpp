#include <iostream>
#include "Agent.h"
using namespace std;

// maybe we should put all changes at the top for comments and ish

// Link for collaboration
// https://lucid.app/lucidchart/346a1aa3-dc34-4b39-b0c1-51e9110b52ec/edit?viewport_loc=19%2C139%2C1365%2C737%2C0_0&invitationId=inv_36880053-9db3-41d1-a294-0239c0dcd670

int main(){
    cout << "real" << endl;
    cout << "Yep" << endl;

    //creating objects

    struct listingDetails l1;
    Agent a1;
    a1.recordOffer(l1);
    cout << a1.getSellingPrice() << endl;
    system("pause");
    return 0;
}