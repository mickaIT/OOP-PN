#include <iostream>
#include "Contoller.h"
using namespace std;

int main()
{
    Contoller* contr=new Contoller();  //czemu to na wska�nikach
    contr->runProgram(1);
    contr->runProgram(68);
    contr->runProgram(2);

    return 0;
}
