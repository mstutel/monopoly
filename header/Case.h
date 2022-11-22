#ifndef CASE_H_
#define CASE_H_
#include <iostream>
using namespace std;

class Case{
  
  private:
    string Nom;
    int Index; 
  
  public:
    Case(string, int);
    arreterSur();
    getNom();
    setNom();
    getSuivante();
    setSuivante();
};
 
