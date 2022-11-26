#include "Townhouse.h"

Townhouse::Townhouse(bool backyard, string type, string date, string address, int lotNum, int bedNum, double bathNum){
    this->backyard = backyard;
    this->type = type;
    this->date = date;
    this->address = address;
    this->lotNum = lotNum;
    this->bedNum = bedNum;
    this->bathNum = bathNum;
}

bool Townhouse::getBackyard(){
    return this->backyard;
}