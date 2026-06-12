#ifndef USUARIOSPREMIUM_H
#define USUARIOSPREMIUM_H
#include "Usuario.h"
#include "Suscripcion.h"

class UsuarioPremium : public Usuario {
private:
    string calidad = "4K";
    vector<ItemCatalogo*> descargas;
    Suscripcion suscripcion;
public:
    UsuarioPremium(string _id, string _nombre, string _correo, string _password, Suscripcion _suscripcion);
    bool puedeReproducir(ItemCatalogo* item) override;
    string getCalidad() override;
    void descargar(ItemCatalogo* item);
    void mostrarDescargas();
};

#endif // USUARIOSPREMIUM_H