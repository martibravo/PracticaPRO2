/** @file problemes.hh
    @brief Especificació de la classe Problema
*/



#ifndef _PROBLEMA_
#define _PROBLEMA_

#ifndef NO_DIAGRAM
#include "internal/BinTree.hh"
#include "internal/BinTreeIOint.hh"
#endif

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
using namespace std;


/**
    @class Problema
    @brief Inclou totes les dades que necessitem d'un problema. Estadístiques, identificador i els seus mètodes.
*/

class Problema {
    private: 
        int intents;
        int correctes;
    public:
        Problema();    
        ~Problema();
        string consultar_ID() const;
        int consultar_intents();
        int consultar_correctes();
        float ratio();
        void llegir();
        void buscar_problema(const string& id);



};
#endif