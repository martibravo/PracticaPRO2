#include "Cjt_sessions.hh"
#include <algorithm>

Cjt_sessions::Cjt_sessions()
{
    map<string, Sessio> repositori;
    pair<map<string, Sessio>::iterator, bool> ret;
};

Cjt_sessions::~Cjt_sessions(){};

void Cjt_sessions::afegir()
{ 
    BinTree<int> estructura_problemes;
    //llegir nova estructura de problemes (cin)
    Sessio nova(estructura_problemes);

}

void Cjt_sessions::llistat()
{
    map<string, Sessio>::iterator it;
    vector<pair<string, Sessio>> ordenat;
    copy(repositori.begin(), repositori.end(), back_inserter(ordenat));
    for(int i = 0; i < ordenat.size(); ++i) {
        ordenat[i].second.llegir();
    }
}

int Cjt_sessions::mida()
{
    return repositori.size();
}

//Problema consultar(string id) {

//}
Sessio Cjt_sessions::get_sessio(const string& id) {
    return repositori[id];
}