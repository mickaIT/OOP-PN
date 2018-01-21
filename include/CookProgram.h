#ifndef COOKPROGRAM_H
#define COOKPROGRAM_H
#include "Program.h"

class CookProgram
    :public Program
{
    unsigned int power;
public:


    CookProgram(unsigned int power);
    ~CookProgram();

    unsigned int getPower();
    void run();
};

#endif // COOKPROGRAM_H
