#include "usuaris.hh"

/**
#include "problemes.hh"
#include "sessions.hh"
#include "cursos.hh"

**/

int main() {
    //llegir problemes
    //llegir sessions
    //llegir cursos
    //llegir usuaris

    //llegir ordres del terminal

    cout << "EVALUATOR inicializado. Comando:";
    string command;
    cin >> command;
    while (command != "fin") {
        if(command == "nuevo_problema" || command=="np") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="nueva_sesion" || command=="ns") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="nuevo_curso" || command=="nc") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="alta_usuario" || command=="a") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="baja_usuario" || command=="b") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="inscribir_curso" || command=="i") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="curso_usuario" || command=="cu") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="sesion_problema" || command=="sp") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="problemas_resueltos" || command=="pr") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="problemas_enviables" || command=="pe") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="envio" || command=="e") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="listar_problemas" || command=="lp") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="escribir_problema" || command=="ep") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="listar_sesiones" || command=="ls") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="escribir_sesion" || command=="es") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="listar_cursos" || command=="lc") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="escribir_curso" || command=="ec") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="listar_usuarios"|| command=="lu") {
            cout << "Vols fer " << command << endl;
        }
        else if(command=="escribir_usuario" || command=="eu") {
            cout << "Vols fer " << command << endl;
        }
        else { cout << "El comando " << command << " no existe. Por favor, compureba la escritura y intentalo de nuevo" << endl;}

		cin >> command;
    }
}