#include "sessions.hh"

Sessio::Sessio() {
    BinTree<int> problemes;
    vector<int> cursos_sessio;
    int nprob = 0;
}

Sessio::Sessio(BinTree<int>& probl_estructura) {
    BinTree<int> problemes = probl_estructura;
    vector<int> cursos_sessio;
    int nprob = 0;
}

void Sessio::llegir() {
    cout << "aqui se imprime una sesion" << endl;
}


vector<string> Sessio::problemes_disponibles(const string& problema_solucionat) {
    //torna els problemes desbloquejats amb la solucion del problema anterior. 
    return vector<string> (0);
}

