#include "Usuario.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

Usuario::Usuario(string _id, string _nombre, string _correo, string _password) {
    id = _id;
    nombre = _nombre;
    correo = _correo;
    password = _password;
}

bool Usuario::login() {
    string inputCorreo, inputPassword;
    cout << "Correo: ";
    cin >> inputCorreo;
    cout << "Contraseña: ";
    cin >> inputPassword;
    if (inputCorreo == correo && inputPassword == password) {
        cout << "Inicio de sesión exitoso. Bienvenido, " << nombre << "!" << endl;
        return true;
    } else {
        cout << "Correo o contraseña incorrectos. Inténtalo de nuevo." << endl;
        return false;
    }
}

void Usuario::logout() {
    cout << "Has cerrado sesión. Hasta luego, " << nombre << "!" << endl;
}

void Usuario::agregarFavorito(ItemCatalogo* item) {
    for (auto& favorito : favoritos) {
        if (favorito == item) {
            cout << "Este contenido ya está en tus favoritos." << endl;
            return;
        }
    }
    favoritos.push_back(item);
    cout << "Contenido agregado a favoritos: " << item->getTitulo() << endl;
}

void Usuario::eliminarFavorito(ItemCatalogo* item) {
    for (auto it = favoritos.begin(); it != favoritos.end(); ++it) {
        if (*it == item) {
            favoritos.erase(it);
            cout << "Contenido eliminado de favoritos: " << item->getTitulo() << endl;
            return;
        }
    }
    cout << "Este contenido no se encuentra en tus favoritos." << endl;
}

void Usuario::mostrarFavoritos() {
    if (favoritos.empty()) {
        cout << "No tienes favoritos aún." << endl;
        return;
    }
    cout << "Tus favoritos:" << endl;
    for (auto& favorito : favoritos) {
        cout << "- " << favorito->getTitulo() << endl;
    }
}

void Usuario::calificar(ItemCatalogo* item, int calificacion) {
    if (calificacion < 1 || calificacion > 5) {
        cout << "Calificación inválida. Debe ser entre 1 y 5." << endl;
        return;
    }
    cout << "Has calificado '" << item->getTitulo() << "' con " << calificacion << " estrellas." << endl;
}

string Usuario::getId() {
    return id;
}

string Usuario::getNombre() {
    return nombre;
}

string Usuario::getCorreo() {
    return correo;
}

string Usuario::getPassword() {
    return password;
}
