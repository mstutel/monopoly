#ifndef CASE_H_
#define CASE_H_
#include <iostream>
using namespace std;

class Case{
  
  private:
    string nom;
    suivante case;
  
  public:
    arreterSur();
    getNom();
    setNom();
    getSuivante();
    setSuivante();
};
 
