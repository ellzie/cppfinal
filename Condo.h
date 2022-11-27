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
        Condo(double hoaFees, string type, string date, string address, int lotNum, int bedNum, double bathNum);
        double getHoaFees();
};

#endif