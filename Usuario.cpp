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
    // Implementar lógica de autenticación
    return true; // Simulación de inicio de sesión exitoso
}

void Usuario::logout() {
    // Implementar lógica de cierre de sesión
}

void Usuario::agregarFavorito(ItemCatalogo* item) {
    favoritos.push_back(item);
}

void Usuario::eliminarFavorito(ItemCatalogo* item) {
   // Implementar lógica para eliminar un item de favoritos
}

void Usuario::mostrarFavoritos() {
    cout << "Favoritos de " << nombre << ":" << endl;
    // Implementar lógica para mostrar los favoritos del usuario
}

void Usuario::calificar(ItemCatalogo* item, int calificacion) {
    // Implementar lógica para calificar un item del catálogo
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
