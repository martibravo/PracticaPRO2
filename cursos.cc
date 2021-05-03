#include "cursos.hh"

Curs::Curs() {
    vector<string> sessions;
    vector<string> inscrits;
}

Curs::Curs(const vector<string>& sessionsc) {
    int n_sessions = sessionsc.size();
    vector<string> sessions = sessionsc;
    vector<string> inscrits;
}

bool Curs::problema_no_esta(const string id) {
    cout << "comprobando si problema " << id << " no esta en otra sesion del curso" << endl;
    return true;
}

bool Curs::no_igual(const vector<string>& nova_sessio) {
    //PRE: vector de IDs de problemas de una sesion nueva
    //POST: true si no hay ninguna sesion con un problema igual, false si hay un problema repetido en el curso
    return true;
}

int Curs::n_inscrits() {
    return inscrits.size();
}

void Curs::llegir() {
    cout << "Inscritos: " << inscrits.size() << endl;
    cout << "Sesiones: " << sessions.size() << endl;
};

string Curs::buscar_problema(const string& id) {
    return "sessio";
}