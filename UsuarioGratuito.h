#ifndef USUARIOSGRATUITO_H
#define USUARIOSGRATUITO_H
#include "Usuario.h"

class UsuarioGratuito : public Usuario {
private:
    string calidad = "1080p";
public:
    UsuarioGratuito(string _id, string _nombre, string _correo, string _password);
    bool puedeReproducir(ItemCatalogo* item) override;
    string getCalidad() override;
    void mostrarAnuncios();
};


#endif