#include "problemes.hh"

Problema::Problema() {
    intents = 0 + (rand() % 100);
    correctes = intents - (rand() % 10);
}

Problema::~Problema(){};


void Problema::llegir() {
    cout << "Intents: " << intents << endl;
    cout << "Intents correctes: " << correctes << endl;
    cout << "Ratio: " << ratio() << endl;
}

float Problema::ratio() {
    return (intents+(1.0))/(correctes+(1.0));
}

