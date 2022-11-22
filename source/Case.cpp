#include "Case.h"
#include <iostream>
#include <string>
using namespace std;

Case::Case(string nom, int index)
{
    this->Nom = nom;
    this->Index = index;
}

string Case::GetNom()
{
    return Nom;
}

int Case::GetIndex()
{
    return Index;
}

void Case::SetCase(int index)
{
    Index = index;
}

void Case :: SetNom(string nom)
{
    Nom = nom;
}
