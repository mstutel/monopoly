#ifndef CASE_H_
#define CASE_H_

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
 
