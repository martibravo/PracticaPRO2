/** @file Cjt_usuaris.hh
    @brief Especificación de la clase Cjt_usuaris.
*/

#ifndef _PROBLEMA_
#include "problemes.hh"
#endif

#ifndef _USUARI_
#include "usuaris.hh"
#endif

#ifndef _CJTUSUARIS_
#define _CJTUSUARIS_



/**
    @class Cjt_usuaris
    @brief Clase de diccionario de los usuarios de la aplicación. Tiene métodos para consultar, añadir y modificar los datos de la colección.
*/

class Cjt_usuaris {
    private: 
    /** @brief Diccionario de usuarios, dónde el nombre de usuario es su referencia. */
        map<string, Usuari> inscrits;
    /** @brief Iterador del diccionario para operaciones de búsqueda y consulta. */
        pair<map<string, Usuari>::iterator, bool> ret;
    /** @brief Contador de usuarios, se actualiza cuando un Usuari se da de baja o alta en la colección.*/
        int usuaris;
    public:  
      /** @brief Creadora por defecto
		@pre cierto
		@post El resultado es un Cjt_usuarios vacío. 
	*/ 
        Cjt_usuaris();
        /** @brief Destructora por defecto
	*/ 
        ~Cjt_usuaris();

    /** @brief Modificadora del conjunto de usuarios.
		\pre Un usuario no está en la colección.
		\post Si no hay un usuario con la misma ID, se añade el Usuari a la colección.
	*/ 
    void afegir(const string& id);
    /** @brief Eliminadora de usuarios.
		\pre Un usuario está en la colección.
		\post Se elimina el Usuari y sus datos asociados.
	*/
    void baixa(const string& id);
     /** @brief Operación de escritura.
		\pre true
		\post Se escribe una lista de usuarios y las estadísticas de cada usuario por el canal estándar de salida.
	*/
    void llistat();
        /** @brief Consultora del nombre de usuarios.
		\pre Ninguna.
		\post Devuelve el número de usuarios de la colección.
	*/
    int mida();
    /** @brief Consultora de usuarios.
		\pre Una ID de usuario.
		\post Devuelve cierto si el usuario existe, y falso si no ha sido creado.
	*/
    bool existeix_usuari(const string id) ;
    /** @brief Consultora de usuarios.
		\pre Una ID de usuario.
		\post Devuelve un elemento Usuari asociado a la ID del argumento.
	*/
    Usuari get_usuari(const string& id);

};
#endif