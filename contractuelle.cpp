#include "contractuelle.h"

Contractuelle::Contractuelle(std::string nom, int matricule,int montant, int semaines):Employee(nom,matricule) 
{
  this->Montant = montant;
  this->semaines = semaines;
}
double Contractuelle::getPaie(){
      double paie= (double)this->Montant/(double)this->semaines;
      return paie; 
    }
   