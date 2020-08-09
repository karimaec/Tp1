#ifndef __CONTRACTUELLE_H__
#define __CONTRACTUELLE_H__
#include "employee.h"


class Contractuelle : public Employee {
  private:
    int Montant;
    int semaines;
  public:
    
    // Constructeur
    Contractuelle(std::string nom, int matricule,int Montant, int semaines);
    // Méthode paie
    double getPaie();
  
    
};
#endif