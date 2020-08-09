#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <iostream>
#include <string>
class Employee {
  protected:
  // Attribut définissant le nom et matricule
   std::string nom;
    int matricule;
  public:
  // Constructeur
    Employee();
    Employee(std::string nom, int matricule);
// "Getters" des attributs de la classe "Employee".
    int getMatricule();
    std::string getNom();
    virtual double getPaie()=0;
 
   // Destructeur virtuel
    virtual ~Employee();
    
  
    
};          
#endif