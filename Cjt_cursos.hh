/** @file Cjt_cursos.hh
    @brief Especificación de la clase Cjt_cursos. 
*/

#ifndef _PROBLEMA_
#include "problemes.hh"
#endif

#ifndef _CURSOS_
#include "cursos.hh"
#endif

#ifndef _CJTCURSOS_
#define _CJTCURSOS_



/**
    @class Cjt_cursos
    @brief Ofrece métodos para añadir, manipular, acceder o eliminar Cursos a la colección del programa. 
*/

class Cjt_cursos {
    private: 
    /** @brief Vector de cursos */
        vector<Curs> cursos;
    public: 
    /** @brief Creadora por defecto
		@pre cierto
		@post El resultado es un Cjt_cursos vacío. 
	*/ 
        Cjt_cursos();
    /** @brief Destructora por defecto
	*/ 
        ~Cjt_cursos();
    //Modificadores
	
	/** @brief Modificadora del conjunto de cursos.
		\pre Un curso no está en la colección.
		\post Si no hay un curso con las mismas sesiones, se añade el Curs a la colección.
	*/
    void afegir(const Curs& nou);

    //Consultores 

    /** @brief Obtiene el número de cursos de la colección.
     * \pre cierto.
     * \post Resultado de cursos.size()ñ
    */
    int n_cursos();
      /** @brief Comprueba que no hay ningún curso con las mismas sesiones.
     * \pre cierto.
     * \post Cierto si no hay otro curso con las mismas sesiones, falso si existe un curso idéntico. 
    */
    bool no_igual(const vector<string>& sessions_nou);
     /** @brief Devuelve el curso con la id especificada.
     * \pre cierto.
     * \post Elemento del diccionario cursos de classe Curs con la id del parámetro . 
    */
    Curs get_curs(const int& id);

    //Lectura y escritura

    /** @brief Operación de escritura.
		\pre true
		\post Se escribe una lista de problemas y las estadísticas de cada problema por el canal estándar de salida.
	*/
    void llistat();
   

};
#endif