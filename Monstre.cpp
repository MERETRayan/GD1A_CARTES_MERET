#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <iostream>

using namespace std ;

Monstre::Monstre(int atk, int pv, string name ) : attack(atk), pointDeVie(pv) , nom(name) {}

int Monstre::Attaque(int atkMob , int pvMob)
{
    pvMob = pvMob - atkMob ;
    if (pvMob < 0 )
    {
        pvMob = 0 ;
    }
    return pvMob ;
}

void Monstre::AfficheStat()
{
    cout << "-------------------- \n ";
    cout << nom << " \n";
    cout << pointDeVie << " : Pv \n";
    cout << attack << " : Attack \n";
    cout << etat << " : Etat  \n";
    cout << "-------------------- \n ";
}

bool Monstre::Mort()
{
    return pointDeVie == 0;
}

bool Monstre::ChgmtEtat()
{
    etat2 != etat2 ; 
    if (etat2)
    {
        etat = "Epuiser";
    }
    if (!etat2)
    {
        etat = "en Forme";
    }
return etat2 ; 
}

int Monstre::getPv()
{
    return pointDeVie;
}
int Monstre::getAtk()
{
    return attack;
}
void Monstre::PerdVie(int pvPerdu)
{
    pointDeVie = pvPerdu;
}


#endif