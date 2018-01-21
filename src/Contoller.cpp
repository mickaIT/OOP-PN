#include "Contoller.h"
//#include "Program.h"
#include "CookProgram.h"
#include "DefrostProgram.h"
#include <iostream>
#include <stdexcept>
#include <vector>
Contoller::Contoller()
{
    this->programs.push_back(new CookProgram(450));  //this!!!
    this->programs.push_back(new CookProgram(600));
    this->programs.push_back(new DefrostProgram());
}
void Contoller::runProgram(unsigned int programId)
{
    try
    {
        //(this->programs[programId])->run();
        // ^ this wouldn't throw an exception
        // just crash for index out of bounds
        (this->programs.at(programId))->run();
    }
    catch (std::out_of_range& oor)
    {
        std::cout << "ERROR! Out of Range: " << oor.what() << std::endl;
    }
}

Contoller::~Contoller()
{
    for(auto it=programs.begin(); it!=programs.end(); it++)
    {
        delete (*it);
    }
}
