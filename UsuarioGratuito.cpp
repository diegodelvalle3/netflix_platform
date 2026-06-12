#include "UsuarioGratuito.h"
#include <iostream>
using namespace std;

UsuarioGratuito::UsuarioGratuito(string _id, string _nombre, string _correo, string _password)
    : Usuario(_id, _nombre, _correo, _password) {
}

bool UsuarioGratuito::puedeReproducir(ItemCatalogo* item) {
    // Implementar lógica para determinar si el usuario gratuito puede reproducir el item
    return true; // Simulación de que el usuario gratuito puede reproducir cualquier item
}

string UsuarioGratuito::getCalidad() {
    return calidad;
}

void UsuarioGratuito::mostrarAnuncios() {
    cout << "Mostrando anuncios para " << nombre << endl;
    // Implementar lógica para mostrar anuncios al usuario gratuito
}