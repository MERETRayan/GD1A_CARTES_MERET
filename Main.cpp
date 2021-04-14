#include "Monstre.cpp"
#include <iostream>
#include <string>

using namespace std ;

int MobJPv ;
int MobJAtk;
string MobJName;

int main ()
{
    cout << "Bienvenue dans le monde des Bisounours ou le but étant de s'affronter \n" ;
    cout << "avec de terrible monstre que sont les bisounours. \n";

    cout << "Quel est le nom de votre Bisounours. \n";
    cin >> MobJName;

    while (MobJAtk==0 && MobJAtk < 10 )
    {
        if (MobJAtk>10)
        {
            cout << "Votre score d'attaque est trop haut veuillez réitérer votre action \n";
        }
        cout << "Choississez un score d'attaque entre 1 et 10 . \n";
        cin >> MobJAtk;
    }
    while (MobJPv==0 && MobJPv < 10 )
    {
        if (MobJPv>100)
        {
            cout << "Votre nombre de Pv est trop haut veuillez réitérer votre action \n";
        }
        cout << "Choississez un nombre de Pv entre 1 et 100 pour votre bisounours  . \n";
        cin >> MobJPv;
    }

    Monstre mobJoueur = Monstre(MobJPv,MobJAtk,MobJName);
    //mobJoueur.AfficheStat();
}