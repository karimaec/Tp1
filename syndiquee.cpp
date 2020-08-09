
#include "syndiquee.h"

Syndiquee::Syndiquee(std::string nom, int matricule,double taux_horaire, double nbrHeures):Employee(nom,matricule) 
{
  this->taux_horaire = taux_horaire;
  this->nbrHeures = nbrHeures;
}
double Syndiquee::getPaie(){
      double paie= this->taux_horaire*this->nbrHeures;
      return paie;
    }
    