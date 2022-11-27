#ifndef PROPERTY_H
#define PROPERTY_H
#include <string>

using namespace std;

class Property
{
    protected:
        string type;
        string date;
        string address;
        int lotNum;
        int bedNum;
        double bathNum;

    public:
        string getType();
        string getDate();
        string getAddress();
        int getLotNum();
        int getBedNum();
        int getBathNum();
};

#endif