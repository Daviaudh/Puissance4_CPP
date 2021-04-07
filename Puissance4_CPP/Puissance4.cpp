#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Puissance4.h"
#include <iostream>


    Puissance4::Puissance4() : _symboleCourant('X'), _grilleDeJeu(7, 6), _numeroTour(0) {}

    void Puissance4::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Puissance4::ajouteSymbole(int x){
        int y =-1;
        for ( int i = 0; i < 6; i++)
        {
           if(_grilleDeJeu.getContent(x,i)==' ')
           {
               y = i ;
           }
           
        }
        if (y!=-1){
            _grilleDeJeu.setContent(x,y,_symboleCourant);
        }

        
    }

    bool Puissance4::testeVictoireVerticale(){
        for(int i =0;i<7;i++){
            for(int j=0;j<3;j++){
                if(_grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i,j+1)
                && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i,j+2)
                && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i,j+3)
                && _grilleDeJeu.getContent(i,j)!=' ')
                {return true;}
            }
        }
        return false;
    }

    bool Puissance4::testeVictoireHorizontale(){
      for(int j =0;j<6;j++){
            for(int i=0;i<4;i++){
                if(_grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+1,j)
                && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+2,j)
                && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+3,j)
                && _grilleDeJeu.getContent(i,j)!=' ')
                {return true;}
            }
        }
        return false;   
    }

    bool Puissance4::testeVictoireDiagonale(){
      for(int j =0;j<3;j++){
            for(int i=0;i<4;i++){
                if(_grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+1,j+1)
                && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+2,j+2)
                && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+3,j+3)
                && _grilleDeJeu.getContent(i,j)!=' ')
                {return true;}
            }
        }
           for(int j =3;j<6;j++){
            for(int i=0;i<4;i++){
                if(_grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+1,j-1)
                && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+2,j-2)
                && _grilleDeJeu.getContent(i,j)==_grilleDeJeu.getContent(i+3,j-3)
                && _grilleDeJeu.getContent(i,j)!=' ')
                {return true;}
            }
        }
        return false;
    }

    bool Puissance4::testeJeuNul(){
        return _numeroTour==42;
        }

    void Puissance4::finTour(){
        _symboleCourant=='X'?_symboleCourant='O':_symboleCourant='X';
        _numeroTour++;
   }

#endif