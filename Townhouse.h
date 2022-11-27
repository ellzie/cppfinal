#ifndef TOWNHOUSE_H
#define TOWNHOUSE_H
#include "Property.h"
#include <string>

using namespace std;

class Townhouse : public Property
{
    private:
        bool backyard;

    public:
        Townhouse(bool backyard, string type, string date, string address, int lotNum, int bedNum, double bathNum);
        bool getBackyard();
};

#endif