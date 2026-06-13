#include "UsuarioGratuito.h"
#include <iostream>
using namespace std;

UsuarioGratuito::UsuarioGratuito(string _id, string _nombre, string _correo, string _password)
    : Usuario(_id, _nombre, _correo, _password), calidad("1080p") {
}

bool UsuarioGratuito::puedeReproducir(ItemCatalogo* item) {
    if (item->getGenero() == Genero::TERROR || item->getGenero() == Genero::MISTERIO) {
        cout << "Lo sentimos, el contenido '" << item->getTitulo() << "' no está disponible para usuarios gratuitos." << endl;
        return false;
    }
    return true;
}

string UsuarioGratuito::getCalidad() {
    return calidad;
}

void UsuarioGratuito::mostrarAnuncios() {
    cout << "Mostrando anuncios para usuarios gratuitos..." << endl;
    cout << "Anuncio 1: ¡Suscríbete a Netflix Premium para disfrutar de contenido sin anuncios!" << endl;
    cout << "Presiona Enter para continuar..." << endl;
    cin.ignore();
    cout << "Anuncio 2: ¡Disfruta de una calidad de video mejorada con Netflix Premium!" << endl;
    cout << "Presiona Enter para continuar..." << endl;
    cin.ignore();
    cout << "Anuncio 3: ¡Accede a contenido exclusivo con Netflix Premium!" << endl;
    cout << "Presiona Enter para continuar..." << endl;
    cin.ignore();
}