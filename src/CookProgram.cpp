#include "CookProgram.h"
#include <iostream>

CookProgram::CookProgram(unsigned int power):power(power)
{
}

unsigned int CookProgram::getPower()
{
    return power;
}

void CookProgram::run()
{
    std::cout<<"it's running with power\n"<<getPower();
}

CookProgram::~CookProgram()
{
    //dtor
}
