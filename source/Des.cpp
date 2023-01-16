#include "Des.h"

bool Des::checkDouble()
{
    if (de1 == de2) {return true;}
    else {return false;}
}

int Des::resultat()
{
    return de1 + de2;
}

void Des::LancerLesDes()
{
    srand((unsigned int)time(0)); // sert à ne pas avoir le même tirage à chaque fois
    de1 = rand() % 6 + 1;
    de2 = rand() % 6 + 1;
}
