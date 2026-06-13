#include "ItemCatalogo.h"
#include <iostream>
using namespace std;

ItemCatalogo::ItemCatalogo(int _id, string _titulo, Genero _genero) {
    id = _id;
    titulo = _titulo;
    genero = _genero;
}

void ItemCatalogo::mostrar() {
    cout << "ID: " << id << endl;
    cout << "Título: " << titulo << endl;
    cout << "Género: ";
    switch (genero) {
        case Genero::DRAMA:
            cout << "Drama";
            break;
        case Genero::ACCION:
            cout << "Acción";
            break;
        case Genero::MISTERIO:
            cout << "Misterio";
            break;
        case Genero::COMEDIA:
            cout << "Comedia";
            break;
        case Genero::TERROR:
            cout << "Terror";
            break;
    }
}

int ItemCatalogo::getId() {
    return id;
}

string ItemCatalogo::getTitulo() {
    return titulo;
}

Genero ItemCatalogo::getGenero() {
    return genero;
}