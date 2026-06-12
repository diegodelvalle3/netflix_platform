#include "Suscripcion.h"
#include <iostream>
using namespace std;

Suscripcion::Suscripcion(string _plan, float _precio, int dia, int mes, int anio) {
    plan = _plan;
    precio = _precio;
    // Convertir la fecha a time_t
    struct tm inicio = {0};
    inicio.tm_mday = dia;
    inicio.tm_mon = mes - 1;
    inicio.tm_year = anio - 1900;
    fechaInicio = std::mktime(&inicio);

    struct tm vence = inicio;
    if (plan == "Mensual") {
        vence.tm_mon += 1; // Agregar un mes
    } else if (plan == "Anual") {
        vence.tm_year += 1; // Agregar un año
    }
    fechaVencimiento = std::mktime(&vence);
}

bool Suscripcion::vigencia() {
    time_t ahora = time(0);
    return ahora < fechaVencimiento;
}

void Suscripcion::renovar() {
    if (vigencia()) {
        cout << "La suscripción aún es válida. No es necesario renovar." << endl;
        return;
    } else if (plan == "Mensual") {
        fechaVencimiento += 30 * 24 * 3600; // Agregar 30 días
    } else if (plan == "Anual") {
        fechaVencimiento += 365 * 24 * 3600; // Agregar 365 días
    } else {
        cout << "Plan de suscripción desconocido. No se puede renovar." << endl;
    }
}

string Suscripcion::getPlan() {
    return plan;
}