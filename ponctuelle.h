#ifndef __PONCTUELLE_H__
#define __PONCTUELLE_H__

#include "employee.h"


class Ponctuelle : public Employee {
  private:
    double montantUnique;
    
  public:
    
    // Constructeur
    Ponctuelle(std::string nom, int matricule,double montantUnique);
    // Méthode
    double getPaie();
   
};

#endif