#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <iostream>

using namespace std ;

int Monstre::PertVie(int atkMob , int pvMob)
{
    pvMob = pvMob - atkMob ;
    if (pvMob > 0 )
    {
        pvMob = 0 ;
    }
    return pvMob ;
}

void Monstre::AfficheStat()
{
    cout << nom << " \n";
    cout << "-------------------- \n ";
    cout << pv << " Pv \n";
    cout << attack << " : Attack \n";
    cout << etat << " : Etat  \n";
}

bool Monstre::Mort()
{
    return pv==0;
}

bool Monstre::ChgmtEtat()
{
    etat2 != etat2 ; 
    if (etat2)
    {
        etat = "epuiser";
    }
    if (!etat2)
    {
        etat = "en Forme";
    }
return etat2 ; 
}



#endif