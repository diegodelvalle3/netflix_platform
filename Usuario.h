#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include <vector>
using namespace std;

class Usuario{
protected:
    string id;
    string nombre;
    string correo;
    string password;
    vector<ItemCatalogo*> favoritos;
public:
    Usuario(string _id, string _nombre, string _correo, string _password);
    bool login();
    void logout();
    void agregarFavorito(ItemCatalogo* item);
    void eliminarFavorito(ItemCatalogo* item);
    void mostrarFavoritos();
    void calificar(ItemCatalogo* item, int calificacion);
    virtual bool puedeReproducir(ItemCatalogo* item);

    string getId();
    string getNombre();
    string getCorreo();
    string getPassword();
    virtual string getCalidad();
};



#endif // USUARIO_H 