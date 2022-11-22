#ifndef CASE_H_
#define CASE_H_
#include <iostream>
#include <string>
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
 
