#ifndef SUSCRIPCION_H
#define SUSCRIPCION_H
#include "UsuarioPremium.h"
#include <string>
#include <ctime>
using namespace std;

class Suscripcion{
private:
    string plan;
    time_t fechaInicio;
    time_t fechaVencimiento;
    float precio;
public:
    Suscripcion(string _plan, float _precio, int dia, int mes, int anio);
    bool vigencia();
    void renovar();
    string getPlan();
};

#endif // SUSCRIPCION_H