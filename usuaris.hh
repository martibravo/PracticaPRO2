/** @file Usuari.hh
    @brief Especificació de la classe Usuari
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef _USUARI_
#define _USUARI_
#endif

/**
    @class Usuari
    @brief Inclou totes les dades que necessitem d'un usuari. Estadístiques, identificador i els seus cursos. També permet modificar-ne les dades.
*/

class Usuari {
    public: 
        string id;
        int enviats;
        int intents;
        int solucionats;
        vector<int> problemes_fets;
    private:  
        Usuari();
        void afegir_usuari(string id);
        void eliminar_usuari(string id);
        bool existeix_usuari(string id);

}