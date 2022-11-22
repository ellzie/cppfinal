#ifndef PROPERTY_H
#define PROPERTY_H
#include <string>

using namespace std;

class Property
{
    private:
        string type;
        string date;
        string address;
        int lotNum;
        int bedNum;
        int bathNum;

    public:
        string getType();
        string getDate();
        string getAddress();
        int getLotNum();
        int getBedNum();
        int getBathNum();
};

#endif