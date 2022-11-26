#include "Condo.h"

Condo::Condo(double hoaFees, string type, string date, string address, int lotNum, int bedNum, double bathNum){
    this->hoaFees = hoaFees;
    this->type = type;
    this->date = date;
    this->address = address;
    this->lotNum = lotNum;
    this->bedNum = bedNum;
    this->bathNum = bathNum;
}

double Condo::getHoaFees(){
    return this->hoaFees;
}