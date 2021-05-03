/** @file Cjt_sessions.hh
    @brief Especificación de la clase Cjt_sessions.
*/

#ifndef _SESSIO_
#include "sessions.hh"
#endif

#ifndef _CJTSESSIONS_
#define _CJTSESSIONS_


/**
    @class Cjt_sessions
    @brief Clase de diccionario de las sesiones de la aplicación. Tiene métodos para consultar, añadir y modificar los datos de la colección.
*/

class Cjt_sessions
{
private:
/** @brief Diccionario de sesiones, dónde el nombre de sesión es su referencia. */
    map<string, Sessio> repositori;
/** @brief Iterador del diccionario para operaciones de búsqueda y consulta. */
    pair<map<string, Sessio>::iterator, bool> ret;

public:
 /** @brief Creadora por defecto
		@pre cierto
		@post El resultado es un Cjt_sessions vacío. 
	*/ 
    Cjt_sessions();
    /** @brief Destructora por defecto
	*/ 
    ~Cjt_sessions();
/** @brief Modificadora del conjunto de sesiones.
		\pre Una sesión no está en la colección.
		\post Se añade una Sessió vacía a la colección.
	*/ 
    void afegir();
 /** @brief Operación de escritura.
		\pre true
		\post Se escribe una lista de sesiones y las estadísticas de cada sesión por el canal estándar de salida.
	*/
    void llistat();
      /** @brief Consultora del nombre de sesiones.
		\pre Ninguna.
		\post Devuelve el número de sesiones de la colección.
	*/
    int mida();
    /** @brief Consultora de sesiones.
		\pre Una ID de sesión.
		\post Devuelve cierto si la sesión existe, y falso si no ha sido creada.
	*/
    bool existeix(string id) const;
     /** @brief Consultora de sesiones.
		\pre Una ID de sesión.
		\post Devuelve un elemento de clase Sessio asociado a la ID del argumento.
	*/
    Sessio get_sessio(const string& id);
};
#endif