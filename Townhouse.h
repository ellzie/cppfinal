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
        bool getBackyard();
};

#endif