#ifndef MONSTRE_H
#define MONSTRE_H



#include <string>

using namespace std ;

class Monstre {
    private : 

        int pv = 0 ;
        int attack = 0;
        string etat = "Epuisé" ;
        bool etat2 = false ;
        string nom ; 
    
    public :

        void AfficheStat();
        bool Mort ();
        int PertVie(int pvMob , int atkMob);
        bool ChgmtEtat();
        Monstre();
        Monstre(int pv ,int atk ,string nom);
        
};

#endif
