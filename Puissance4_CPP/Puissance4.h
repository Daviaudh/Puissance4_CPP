#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "Grille.h"
#include <string>

class Puissance4{

    private:
        Grille _grilleDeJeu;
        int _numeroTour;
        char _symboleCourant;

    public:
        Puissance4();
        void afficheGrille();
        void ajouteSymbole(int x);
        bool testeVictoireVerticale();
        bool testeVictoireHorizontale();
        bool testeVictoireDiagonale();
        bool testeJeuNul();

        void finTour();

};

#endif