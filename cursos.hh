/** @file cursos.hh
    @brief Especificación de la clase Curs
*/

#ifndef _PROBLEMA_
#include "problemes.hh"
#endif

#include "Cjt_problemes.hh"
#include "Cjt_sessions.hh"

#ifndef _CURS_
#define _CURS_

/**
    @class Curs
    @brief Crea un tipo de datos Curs y sus métodos para crear, eliminar y consultar sus datos.
*/

class Curs
{
private:
    /** @brief Vector de strings con los identificadores de los usuarios inscritos */
    vector<string> inscrits;

public:
    /** @brief Vector de strings con los identificadores de las sesiones del curso */
    vector<string> sessions;
    /** @brief Creadora por defecto
     * \pre nada
     * \post Un Curs vacio
     */
    Curs();
    /** @brief Creadora con vector de sesiones
     * \pre nada
     * \post Un Curs con una lista de sesiones
     */
    Curs(const vector<string> &sessionsc);
    
        /** @brief Añade un usuario a este curso. 
     * \pre El usuario no está inscrito en el curso.
     * \post El usuario está inscrito en el curso.
     */
        void afegir_usuari();
    /** @brief Elimina un usuario de este curso. 
     * \pre El usuario está inscrito en el curso.
     * \post El usuario no está inscrito en el curso.
     */
    void eliminar_usuari();
    /** @brief Compureba que un problema no está en ninguna sesión del curso. 
     * \pre Cierto.
     * \post Cierto si el problema no existe dentro del conjunto de sesiones del curso. Falso si sí lo está.
     */
    bool problema_no_esta(const string id);
    /** @brief Consulta el número de inscritos en el curso. Se actualiza con <em>afegir_usuari()</em> y <em>eliminar_usuari()</em>.
     * \pre nada.
     * \post Integer con el número de estudiantes de este curso.
     */
    int n_inscrits();
     /** @brief Compureba que una sesión no contiene un problema que ya está en el curso. 
     * \pre Cierto.
     * \post Cierto si el problema no existe dentro del conjunto de sesiones del curso. Falso si sí lo está.
     */
    bool no_igual(const vector<string> &nova_sessio);
     /** @brief Imprime por el canal estándar de salida la lista de sesiones y las estadísticas del curso. 
     */
    void llegir();
     /** @brief Retorna la sesión del curso donde está el problema con esa identificación.
     */
    string buscar_problema(const string &id); //torna sessio
};
#endif