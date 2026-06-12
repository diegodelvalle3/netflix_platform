#include "UsuarioPremium.h"
#include <iostream>
using namespace std;

UsuarioPremium::UsuarioPremium(string _id, string _nombre, string _correo, string _password, Suscripcion _suscripcion)
    : Usuario(_id, _nombre, _correo, _password), suscripcion(_suscripcion) {
}

bool UsuarioPremium::puedeReproducir(ItemCatalogo* item) {
    // Implementar lógica para determinar si el usuario premium puede reproducir el item
    return true; // Simulación de que el usuario premium puede reproducir cualquier item
}

string UsuarioPremium::getCalidad() {
    return calidad;
}

void UsuarioPremium::descargar(ItemCatalogo* item) {
    descargas.push_back(item);
}

void UsuarioPremium::mostrarDescargas() {
    cout << "Descargas de " << nombre << ":" << endl;
    // Implementar lógica para mostrar las descargas del usuario premium
}