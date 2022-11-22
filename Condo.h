#ifndef CONDO_H
#define CONDO_H
#include "Property.h"
#include <string>

using namespace std;

class Condo : public Property
{
    private:
        double hoaFees;
    
    public:
        double getHoaFees();
};

#endif