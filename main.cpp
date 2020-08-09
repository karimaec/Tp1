#include <iostream>
#include <stdlib.h>
#include <string>
#include "employee.h"
#include "syndiquee.h" 
#include "contractuelle.h"
#include "ponctuelle.h" 
 void MatriculeValide(  int &matricule ) {
  do {
    std::cout<<"matricule:"<<std::endl;
     std::cin>>matricule;}
  while(matricule <10000 || matricule >99999) ;

     }
void NomValide(  std::string  &nom) {
  int taille =0;
  do {
     
    std::cout<<"nom:"<<std::endl;
     std::cin>>nom;
     taille =nom.size();
     }
  while(taille<3 ) ;

     }
int main() {
  
   int choix;
   int nbr_employees=0;
   Employee* employee[250];
   
 do{ 
     // Menu principale.
  std::cout<< "Menu: "<< std::endl;
  std::cout<< "1. Ajouter unE employéE syndiquéE: "<< std::endl;
  std::cout<< "2. Ajouter unE employéE contractuelLE: "<< std::endl;
  std::cout<< "3. Ajouter unE employéE ponctuelLE: "<< std::endl;
  std::cout<< "4. Afficher résultat de la paie pour les employéEs entréEs: "<< std::endl;
  std::cout<< "5. Quitter le logiciel. "<< std::endl; 
  std::cin>>choix;

  switch (choix)
  
  {

    case 1:
    {
      std::string nom;
      int num_matricule;
      double taux_horaire, nbr_heures;    
     NomValide(nom);
     MatriculeValide( num_matricule);
     std::cout<<"salaire:"<<std::endl;
     std::cin>>taux_horaire;
     std::cout<<"Nombre d'heures:"<<std::endl;
     std::cin>>nbr_heures;     
     employee[nbr_employees]=  new Syndiquee(nom,num_matricule,taux_horaire,nbr_heures);  
     nbr_employees++;
     std::cout<<" --------------------------------------------- "<<std::endl;
    }
    break; 

    case 2:
    {
      std::string nom; 
      int num_matricule,montant,nbr_semaimes;    
     NomValide(nom);
     MatriculeValide( num_matricule);
     std::cout<<"montant:"<<std::endl;
     std::cin>>montant;
     std::cout<<"nombre de semaines:"<<std::endl;
     std::cin>>nbr_semaimes;
     
     employee[nbr_employees]=  new Contractuelle(nom,num_matricule,montant,nbr_semaimes);    
  
     nbr_employees++;
     std::cout<<" --------------------------------------------- "<<std::endl;
    }
    break;

    case 3:
    {
      std::string nom; 
      int num_matricule;
      double montantUnique;
      NomValide(nom);
      MatriculeValide( num_matricule);
     std::cout<<"montant:"<<std::endl;
     std::cin>>montantUnique;

     
     employee[nbr_employees]=  new Ponctuelle(nom,num_matricule,montantUnique);
      nbr_employees++;
      std::cout<<" --------------------------------------------- "<<std::endl;
    }
    break;

    case 4:
    {
    double Total=0;
    double impots_federal=0;
    double impots_provinciale=0;
    for (int i=0; i< nbr_employees;i++)
      { 
   std::cout<<employee[i]->getNom()<<" "<<employee[i]->getMatricule()<<std::endl;
   std::cout<<" Paie brute de "<<employee[i]->getPaie()<<" $"<<std::endl;
   std::cout<<" Impots CA de "<<employee[i]->getPaie()*0.15<<" $"<<std::endl;
   std::cout<<" Impots QC de "<<employee[i]->getPaie()*0.15<<" $"<<std::endl;
   std::cout<<" Paie nette de "<<employee[i]->getPaie()*(0.7)<<" $"<<std::endl;
   
   Total+=employee[i]->getPaie(); 
    impots_provinciale+=employee[i]->getPaie()*0.15;  
    impots_federal+=employee[i]->getPaie()*0.15; 

   
      }
      std::cout<<""<<std::endl;
    std::cout<<"Totaux"<<std::endl;    
    std::cout<<" Montants totaux verses de "<<Total<<" $"<<std::endl;
    std::cout<<" Impots a transferer CA de "<<impots_federal<<" $"<<std::endl;
    std::cout<<" Impots a transferer QC de "<<impots_federal<<" $"<<std::endl;
    std::cout<<" --------------------------------------------- "<<std::endl;
    }
    break;



    case 5:

     for (int i=0; i< nbr_employees;i++)
    
    delete employee[i];
    
      
      
      exit(0);
    break;
    default:
    std::cout<<"Saisissez une valeur entre 1 et 5."<<std::endl;  
      std::cin>>choix;
       };
  
    }
    
    while(choix>=1 && choix<=5);
 }