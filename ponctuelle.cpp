  
  #include "ponctuelle.h"

Ponctuelle::Ponctuelle(std::string nom, int matricule,double montant):Employee(nom,matricule)
 {
  this-> montantUnique =  montant;
 }
double Ponctuelle::getPaie(){
      double paie=this-> montantUnique;
      return paie;
    }