#include "usuaris.hh"

Usuari::Usuari() {
    enviats = 0;
    intents = 0;
    solucionats = 0;
    curs = 0;
    map<string, pair<int, int>> problemes_fets; // Diccionari amb la id del problema, els intents i els enviaments correctes de cada problema.
    vector<string> problemes_enviables;
}

Usuari::~Usuari(){};


void Usuari::llegir() {
    cout << "Enviats: " << enviats << endl;
    cout << "Curs: " << enviats << endl;
    cout << "Intents: " << intents << endl;
    cout << "Solucionats: " << intents << endl;
}

void Usuari::inscriure_curs(const int& curs_id) {
    if(curs != 0) cout << "El usuario ya se ha inscrito en un curso y no lo ha completado.";
    else {
        curs = curs_id;
    }
    
};

void Usuari::baixa_curs() {
    if(curs == 0) cout << "El usuario no se ha inscrito en ningun curso.";
    else curs = 0;
}

int Usuari::get_curs() {
    return curs;
}

void Usuari::problemes_resolts() {
    // imprimir diccionari de problemes resolts.
    cout << "Problemas resueltos por este usuario" << endl;
}

void Usuari::es_poden_enviar() {
    // imprimir diccionari de problemes per enviar. Cada vegada que es fa un enviament s'actualitza.
    cout << "Problemas resueltos por este usuario" << endl;
}

void Usuari::enviament_fallit(const string& id) {
    //afegeix problema a problemes_fets, o si ja hi es afegir un intent.
}

void Usuari::enviament_correcte(const string& id, const vector<string>& nous_p_disponibles) {
    //afegeix problema a problemes_fets, o si ja hi es afegir un intent i un enviament correcte.
    //eliminar problema de problemes_enviables i afegir els que ara estan disponibles
}