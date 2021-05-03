/** @file usuaris.hh
    @brief Especificació de la classe Usuari
*/

#ifndef _PROBLEMA_
#include "problemes.hh"
#endif

#ifndef _USUARI_
#define _USUARI_



/**
    @class Usuari
    @brief Inclou totes les dades que necessitem d'un usuari. Estadístiques, identificador i els seus mètodes.
*/



class Usuari {
    private: 
      /** @brief Estadísticas del usuario
	*/ 
        int enviats;
        int intents;
        int solucionats;
    /** @brief Diccionario de los problemas hechos por el usuario, dónde la ID del problema es su referencia. El par contiene los intentos, y en caso de envío correcto, cuantos intentos correctos ha habido. */
        map<string, pair<int, int>> problemes_fets;
        /** @brief Identificador del curso del usuario
	*/ 
        int curs;
        /** @brief Vector con los problemas que puede hacer ahora mismo el usuario. Se actualiza después de un envío correcto.
	*/ 
        vector<string> problemes_enviables;
    public:  
      /** @brief Creadora por defecto
		@pre cierto
		@post El resultado es un Usuari vacío. 
	*/ 
        Usuari();
           /** @brief Destructora por defecto
	*/ 
        ~Usuari();
        /** @brief Operación de escritura.
		\pre true
		\post Se escribe las estadísticas del usuario por el canal estándar de salida.
	*/
        void llegir();
        /** @brief Modificadora del usuario.
		\pre Un int que identifica el curso
		\post Si se cumplen los requisitos, se inscribe al usuario en un curso.
	*/
        void inscriure_curs(const int& curs_id);
        /** @brief Modificadora del usuario.
		\pre nada
		\post Si se cumplen los requisitos, se quita al usuario de un curso.
	*/
        void baixa_curs();
          /** @brief Consultora del curso del Usuari.
		\pre Ninguna.
		\post Devuelve el identificador del curso del usuario.
	*/
        int get_curs();
        void problemes_resolts();
        void es_poden_enviar();
        void enviament_fallit(const string& id);
        void enviament_correcte(const string& id, const vector<string>& nous_p_disponibles);

};
#endif