#ifndef ITEMCATALOGO_H
#define ITEMCATALOGO_H
#include <string>
#include "enums/Genero.h"
using namespace std;

class ItemCatalogo{
protected:
    int id;
    string titulo;
    Genero genero;
public: 
    ItemCatalogo(int _id, string _titulo, Genero _genero);
    void mostrar();
    int getId();
    string getTitulo();
    Genero getGenero();
};

#endif // ITEMCATALOGO_H