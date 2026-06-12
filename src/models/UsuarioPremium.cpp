#include "UsuarioPremium.h"
#include <iostream>
using namespace std;

UsuarioPremium::UsuarioPremium(string _id, string _nombre, string _correo, string _password, Suscripcion _suscripcion)
    : Usuario(_id, _nombre, _correo, _password), suscripcion(_suscripcion), calidad("4K") {
}

bool UsuarioPremium::puedeReproducir(ItemCatalogo* item) {
    if (!suscripcion.vigencia()) {
        cout << "La suscripción ha vencido. No puedes reproducir este contenido." << endl;
        return false;
    }
    return true;
}

string UsuarioPremium::getCalidad() {
    return calidad;
}

void UsuarioPremium::descargar(ItemCatalogo* item) {
    if (!suscripcion.vigencia()) {
        cout << "La suscripción ha vencido. No puedes descargar este contenido." << endl;
        return;
    }
    
    for (auto& descargado : descargas) {
        if (descargado == item) {
            cout << "Este contenido ya ha sido descargado." << endl;
            return;
        }
    }
    descargas.push_back(item);
    cout << "Contenido descargado: " << item->getTitulo() << endl;
}

void UsuarioPremium::mostrarDescargas() {
    if (descargas.empty()) {
        cout << "No has descargado ningún contenido." << endl;
        return;
    }

    cout << "Contenidos descargados:" << endl;
    for (auto& item : descargas) {
        cout << "- " << item->getTitulo() << endl;
    }
}