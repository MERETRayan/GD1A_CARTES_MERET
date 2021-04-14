#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>

using namespace std ;

class Monstre{
    private : 

        int pointDeVie = 0 ;
        int attack = 0;
        string etat = "en Forme" ;
        bool etat2 = false ;
        string nom ; 
    
    public :
        Monstre();
        Monstre(int pv,int atk,string name);
        void AfficheStat();
        bool Mort ();
        void PerdVie(int pvPerdu);
        int getPv();
        int getAtk();
        int Attaque(int pvMob , int atkMob);
        bool ChgmtEtat();  
};

#endif
