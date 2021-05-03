#include "Cjt_usuaris.hh"
#include <algorithm>

Cjt_usuaris::Cjt_usuaris()
{
    usuaris = 0;
    map<string, Usuari> inscrits;
    pair<map<string, Usuari>::iterator, bool> ret;
}

Cjt_usuaris::~Cjt_usuaris(){};

void Cjt_usuaris::afegir(const string &id)
{
    Usuari nou;
    ret = inscrits.insert(make_pair(id, nou));
    if (ret.second == false)
    {
        cout << "El usuario " << id << " ya existe" << endl;
    } else {
        ++usuaris;
        cout << "Hay " << usuaris << " usuarios registrados en el sistema." << endl;
    }
}

void Cjt_usuaris::baixa(const string& id) {
    cout << "eliminando " << id << endl;
    int resultat = inscrits.erase(id);
    if(resultat == 0) {
        cout << "El usuario \"" << id << "\" no existe y por lo tanto, no se ha dado de baja." << endl;
    } else {
        --usuaris;
        cout << "Hay " << usuaris << " usuarios registrados en el sistema." << endl;
    }
}

void Cjt_usuaris::llistat()
{
    cout << "Hay " << usuaris << " usuarios registrados en el sistema." << endl;
    for (map<string, Usuari>::iterator it = inscrits.begin(); it != inscrits.end(); ++it)
    {
        cout << "Identificador: " << it->first << endl;
        it->second.llegir();
    }
}

int Cjt_usuaris::mida()
{
    return inscrits.size();
}

bool Cjt_usuaris::existeix_usuari(const string id) {
    if(inscrits.count(id)) return true;
    else return false;
}

Usuari Cjt_usuaris::get_usuari(const string& id) {
   return inscrits[id]; 
};
