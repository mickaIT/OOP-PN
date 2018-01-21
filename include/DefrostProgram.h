#ifndef DEFROSTPROGRAM_H
#define DEFROSTPROGRAM_H
#include "Program.h"

class DefrostProgram
    :public Program
{
public:
    DefrostProgram();
    ~DefrostProgram();
    void run();

};

#endif // DEFROSTPROGRAM_H
