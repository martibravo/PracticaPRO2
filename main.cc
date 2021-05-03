/** @mainpage
	En el módulo main.cc se encuentra el programa principal.
	Para la aplicación evaluator, necesitaremos las clases Usuari, Sessio, Problema y Curso, así como sus conjuntos
    Cjt_usuaris, Cjt_sessions, Cjt_problemes y Cjt_cursos.
*/

/** @file main.cc
    @brief Cuerpo del programa. 
    
    <em>EVALUATOR: plataforma de gestión de problemas y cursos de programación </em>.
*/

#include "Cjt_cursos.hh"
#include "Cjt_usuaris.hh"

int main()
{

    /** @brief Aquí se inicializan vacíos los contenedores de los datos del programa.
    */
    Cjt_usuaris users;
    Cjt_problemes problems;
    Cjt_sessions sessions;
    Cjt_cursos cursos;

    /** @brief Empieza por leer y crear los datos con los que se inicializará la aplicación. 
     * Primero problemas, después sesiones, cursos y por último, usuarios.
    */
    int P, Q, N, M;
    cin >> P;
    string identifier;
    for (int i = 0; i < P; ++i)
    {
        cin >> identifier;
        problems.afegir(identifier);
    }
    //llegir sessions
    cin >> Q;
    for (int i = 0; i < Q; ++i)
    {
        sessions.afegir();
    }
    //llegir cursos

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        vector<string> sessions_curs;
        int n_sessions;
        cin >> n_sessions;
        string sessio_curs;
        for (int j = 0; j < n_sessions; ++j)
        {
            cin >> sessio_curs;
            sessions_curs.push_back(sessio_curs);
        }
        Curs nou(sessions_curs);
        cursos.afegir(nou);
    }
    cin >> M;
    for (int i = 0; i < M; ++i)
    {
        cin >> identifier;
        users.afegir(identifier);
    }

    /** @brief Después de la lectura inicial, aquí el programa lee los comandos y es donde está la lógica principal del programa. 
     * Cada función usa uno o diferentes métodos de cada clase para completar el comando. 
        */
    string command;
    cin >> command;
    while (command != "fin")
    {
        string id;
        int nota;
        int curso;
        string user;
        string problema;
        if (command == "nuevo_problema" || command == "np")
        {
            cin >> id;
            problems.afegir(id);
        }
        else if (command == "nueva_sesion" || command == "ns")
        {
            sessions.afegir();
        }
        else if (command == "nuevo_curso" || command == "nc")
        {
            vector<string> sessions_curs;
            int n_sessions;
            cin >> n_sessions;
            string sessio_curs;
            for (int j = 0; j < n_sessions; ++j)
            {
                cin >> sessio_curs;
                sessions_curs.push_back(sessio_curs);
            }
            Curs nou(sessions_curs);
            cursos.afegir(nou);
        }
        else if (command == "alta_usuario" || command == "a")
        {
            cin >> id;
            users.afegir(id);
        }
        else if (command == "baja_usuario" || command == "b")
        {
            cin >> id;
            users.baixa(id);
        }
        else if (command == "inscribir_curso" || command == "i")
        {
           cin >> user >> curso;
           if(cursos.n_cursos() < curso || users.existeix_usuari(user)) {
             users.get_usuari(user).inscriure_curs(curso);
           }
        }
        else if (command == "curso_usuario" || command == "cu")
        {
            cin >> user;
            if(users.existeix_usuari(user)) {
                users.get_usuari(user).get_curs();
            }

        }
        else if (command == "sesion_problema" || command == "sp")
        {
            cin >> curso >> id;
            cout << "El problema " << cursos.get_curs(curso).buscar_problema(id) << " se encuentra en la sesion (falta implementar)"; 
            
        }
        else if (command == "problemas_resueltos" || command == "pr")
        {
            cin >> id;
            users.get_usuari(id).problemes_resolts();
        }
        else if (command == "problemas_enviables" || command == "pe")
        {
            cin >> id;
            users.get_usuari(id).es_poden_enviar();
        }
        else if (command == "envio" || command == "e")
        {
            int resultado;
            cin >> user >> problema >> resultado;
            Usuari alumne = users.get_usuari(user);
            if(resultado == 1) {
                curso = alumne.get_curs();
                string session = cursos.get_curs(curso).buscar_problema(problema);
                vector<string> disponibles = sessions.get_sessio(session).problemes_disponibles(problema);
                alumne.enviament_correcte(problema, disponibles);
            } else {
                alumne.enviament_fallit(problema);
            }
        }
        else if (command == "listar_problemas" || command == "lp")
        {
            problems.llistat();
        }
        else if (command == "escribir_problema" || command == "ep")
        {
            cin >> id;
            cout << "Problema: " << id << endl;
            problems.get_problema(id).llegir();
        }
        else if (command == "listar_sesiones" || command == "ls")
        {
            cout << "Vols fer " << command << endl;
        }
        else if (command == "escribir_sesion" || command == "es")
        {
            cout << "Vols fer " << command << endl;
        }
        else if (command == "listar_cursos" || command == "lc")
        {
            cout << "Cursos del sistema: " << endl;
            cursos.llistat();
        }
        else if (command == "escribir_curso" || command == "ec")
        {
            cin >> curso;
            cout << "Curso: " << curso << endl;
            cursos.get_curs(curso).llegir();
        }
        else if (command == "listar_usuarios" || command == "lu")
        {
            users.llistat();
        }
        else if (command == "escribir_usuario" || command == "eu")
        {
            cin >> id;
            cout << "Usuario: " << id << endl;
            users.get_usuari(id).llegir();
        }
        else
        {
            cout << "El comando '" << command << "' no existe. Por favor, compureba la escritura y intentalo de nuevo." << endl;
        }

        cin >> command;
    }
}