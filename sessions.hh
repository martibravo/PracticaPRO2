/** @file sessions.hh
    @brief Especificación de la clase Sessio
*/
#ifndef _PROBLEMA_
#include "problemes.hh"
#endif

#ifndef _SESSIO_
#define _SESSIO_



/**
    @class Sessio
    @brief Incluye todos los datos y estadísticas que se necesitan de una sesión, y los métodos para crearlas, modificarlas y destruirlas. 
*/

class Sessio {
    private: 
    /** @brief Dado que los problemas en la sesión tienen prerequisitos, se ha optado por usar un árbol binario para dar respuesta a esa estructura. El árbol contiene los nombres de los problemas, convertidos a <em>int</em>. */
        BinTree<int> problemes;
        /** @brief Vector de cursos que contienen esta sesión */
        vector<int> cursos_sessio;
    public:  
    /** @brief Creadora por defecto
		@pre cierto
		@post El resultado es una Sessio vacía. 
	*/ 
        Sessio();
    /** @brief Creadora con el BinTree de problemas ya creado
		@pre cierto
		@post El resultado es una Sessio con un BinTree. 
	*/ 
        Sessio(BinTree<int>& probl_estructura);
        /** @brief Operación de escritura.
		\pre true
		\post Se escriben las estadísticas de la sesión por el canal estándar de salida.
	*/
        void llegir();
        /** @brief Consultora de la sesión.
		\pre Problemas de la sesión en formato BinTree
		\post Se retorna un vector con todos las <em>id</em> de los problemas de la sesión, para facilitar la comparación.
	*/
        vector<string> sessio_serializada();
    /** @brief Consultora de problemas.
		\pre Se produce un envío correcto de un problema.
		\post Se retorna un vector con todos las <em>id</em> de los problemas de la sesión que ahora tienen los requisitos cumplidos y se pueden resolver.
	*/
        vector<string> problemes_disponibles(const string& problema_solucionat);
};
#endif