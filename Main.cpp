#include "Monstre.cpp"
#include <iostream>
#include <string>

using namespace std ;

int MobJPv=0;
int MobJAtk=0;
string MobJName;
string choix;
int abandon = 0 ;

int main ()
{
    cout << "Bienvenue dans le monde des Bisounours ou le but étant de s'affronter \n" ;
    cout << "avec de terrible monstre que sont les Bisounours. \n";

    cout << "Quel est le nom de votre Bisounours. \n";
    cin >> MobJName;

    while (MobJAtk==0 || MobJAtk > 10 )
    {
        if (MobJAtk > 10)
        {
            cout << "Votre score d'attaque est trop haut veuillez réitérer votre action \n";
        }
        cout << "Choississez un score d'attaque entre 1 et 10 . \n";
        cin >> MobJAtk;
    }

    while (MobJPv==0 || MobJPv > 100 )
    {
        if (MobJPv > 100)
        {
            cout << "Votre nombre de Pv est trop haut veuillez réitérer votre action \n";
        }
        cout << "Choississez un nombre de Pv entre 1 et 100 pour votre bisounours. \n";
        cin >> MobJPv;
    }

    Monstre mobJoueur = Monstre(MobJAtk,MobJPv,MobJName);
    Monstre mobEnnemi1 = Monstre(5,100,"Touronchon");

    while (mobJoueur.Mort() == false  && abandon == 0 &&  mobEnnemi1.Mort() == false )
    {
        cout << "Que voulez-vous faire ? \n";
        cout << "Attaquer / 1 \nVoirStats / 2 \nAbandonner /3 \n";
        cin >> choix ; 

        if (choix == "3" || choix == "abandonner" || choix == "Abandonner")
        {
            cout << "Vous avez Quitter le combat ";
            abandon = 1 ;
        }
        else if (choix == "1" || choix == "attaquer" || choix == "Attaquer")
        {
            cout << "-------------------- \n ";
            mobEnnemi1.PerdVie(mobJoueur.Attaque(mobJoueur.getAtk(),mobEnnemi1.getPv()));
            cout << "Vous attaquez et vous lui faites perdre " << MobJAtk << " Pv" << endl ;
            cout << "Il reste " << mobEnnemi1.getPv() << "Pv a l'ennemi\n" ;
            if (mobEnnemi1.getPv()>0)
            {
                mobJoueur.PerdVie(mobEnnemi1.Attaque(mobEnnemi1.getAtk(),mobJoueur.getPv()));
                cout << "Votre ennemi vous attaque et vous fait perdre " << mobEnnemi1.getAtk() << " Pv" << endl ;
                cout << "Il vous reste " << mobJoueur.getPv() << " Pv \n" ;
            }
            cout << "-------------------- \n ";
        }
        else if (choix == "2" || choix == "VoirStats" || choix == "soirstats" )
        {
            mobJoueur.AfficheStat();
        }
        else 
        {
            cout << "Votre choix n'existe pas. \n";
        }

    }

    if (mobJoueur.getPv()==0)
    {
        cout << "Vous avez perdu contre votre Ennemi \n";
    }
    if (mobEnnemi1.getPv()==0)
    {
        cout << "Vous avez gagnez mais la prochaine fois Essayer d'être amis parce que tout est mignon dans le monde des Bisounous =)\n";
    }
}