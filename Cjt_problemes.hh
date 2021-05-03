/** @file Cjt_problemes.hh
    @brief Especificación de la clase Cjt_problemes.
*/

#ifndef _PROBLEMA_
#include "problemes.hh"
#endif

#ifndef _CJTPROBLEMES_
#define _CJTPROBLEMES_


/**
    @class Cjt_problemes
    @brief Clase de diccionario de los problemas de la aplicación. Tiene métodos para consultar, añadir y modificar los datos de la colección.
*/

class Cjt_problemes
{
private:
/** @brief Repositorio de problemas, dónde el nombre del problema es su referencia. */
    map<string, Problema> repositori;
  /** @brief Iterador del diccionario para operaciones de búsqueda y consulta. */
    pair<map<string, Problema>::iterator, bool> ret;

public:
 /** @brief Creadora por defecto
		@pre cierto
		@post El resultado es un Cjt_problemes vacío. 
	*/ 
    Cjt_problemes();
    /** @brief Destructora por defecto
	*/ 
    ~Cjt_problemes();
    /** @brief Modificadora del conjunto de problemas.
		\pre Un problema no está en la colección <em> repositorio </em>.
		\post Si no hay un problema con la misma ID, se añade el Problema a la colección.
	*/ 
    void afegir(const string& id);
     /** @brief Operación de escritura.
		\pre true
		\post Se escribe una lista de problemas y las estadísticas de cada problema por el canal estándar de salida.
	*/
    void llistat();
     /** @brief Modificadora del conjunto de problemas..
		\pre Un cjt_problemes desordenado.
		\post Se reordena el conjunto según el ratio de intentos y envíos correctos. 
	*/
    void ordenar();
    /** @brief Consultora del nombre de problemas.
		\pre Ninguna.
		\post Devuelve el número de problemas del repositorio.
	*/
    int mida();
      /** @brief Consultora de problemas.
		\pre Una ID de problema.
		\post Devuelve cierto si el problema existe, y falso si no ha sido creado.
	*/
    bool existeix(string id) const;
    /** @brief Consultora de problemas.
		\pre Una ID de problema.
		\post Devuelve un elemento Problema asociado a la ID del argumento.
	*/
    Problema get_problema(const string& id);
};
#endif