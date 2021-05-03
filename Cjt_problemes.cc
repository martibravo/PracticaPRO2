#include "Cjt_problemes.hh"
#include <algorithm>

Cjt_problemes::Cjt_problemes()
{
    map<string, Problema> repositori;
    pair<map<string, Problema>::iterator, bool> ret;
};

Cjt_problemes::~Cjt_problemes(){};

void Cjt_problemes::afegir(const string& id)
{
    map<string, Problema>::iterator it = repositori.end();
    Problema problem;
    ret = repositori.insert(make_pair(id, problem));
    if (ret.second == false)
    {
        cout << "El problema " << id << " ya existia" << endl;
    }
}

bool per_ratio(pair<string, Problema>& a,pair<string, Problema>& b) {
        return a.second.ratio() < b.second.ratio();
    }

void Cjt_problemes::llistat()
{
    map<string, Problema>::iterator it;
    vector<pair<string, Problema>> ordenat;
    copy(repositori.begin(), repositori.end(), back_inserter(ordenat));
    
    sort(ordenat.begin(), ordenat.end(), per_ratio);

    for(int i = 0; i < ordenat.size(); ++i) {
        cout << "Problema " << i << ": ";
        ordenat[i].second.llegir();
        cout << endl;
    }
}

void Cjt_problemes::ordenar()
{
}

int Cjt_problemes::mida()
{
    return repositori.size();
}

Problema Cjt_problemes::get_problema(const string& id) {
   return repositori[id]; 
};
