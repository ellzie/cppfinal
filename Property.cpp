#include "Property.h"
#include <iostream>

using namespace std;
 
string Property::getType()
{
    return type;
}

string Property::getDate()
{
    return date;
}

string Property::getAddress()
{
    return address;
}

int Property::getLotNum()
{
    return lotNum;
}

int Property::getBedNum()
{
    return bedNum;
}

int Property::getBathNum()
{
    return bathNum;
}
