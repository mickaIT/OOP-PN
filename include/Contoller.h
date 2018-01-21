#ifndef CONTOLLER_H
#define CONTOLLER_H

#include <vector>
#include "Program.h"

class Contoller
{
    std::vector<Program*> programs;
public:
    Contoller();

    ~Contoller();
    void runProgram(unsigned int programId);

};

#endif // CONTOLLER_H
