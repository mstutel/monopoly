#ifndef CASE_H_
#define CASE_H_
#include <iostream>
using namespace std;

class Case{
  
  private:
    string Nom;
    Case *Suivante; 
  
  public:
    Case();
    arreterSur();
    getNom();
    setNom();
    getSuivante();
    setSuivante();
};
 
