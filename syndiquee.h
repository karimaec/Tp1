#ifndef __SYNDIQUEE_H__
#define __SYNDIQUEE_H__

#include "employee.h"


class Syndiquee : public Employee {
  private:
    double taux_horaire;
    double nbrHeures;
  public:
    
    // Constructeur
    Syndiquee(std::string nom, int matricule,double taux_horaire, double nbrHeures);
    // Méthode
    double getPaie();
};
   
#endif