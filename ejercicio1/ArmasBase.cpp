#include "ArmasBase.h"
using namespace std;

// ---------- Implementación ItemMagico ----------

ItemMagico::ItemMagico(const string& nombre, int poder, const string& origen, int nivel_magico, const string& tipo_magia)
    : nombre(nombre), poder(poder), origen(origen), nivel_magico(nivel_magico), tipo_magia(tipo_magia) {}

string ItemMagico::getNombre() const {
    return nombre;
}

int ItemMagico::getPoder() const {
    return poder;
}

string ItemMagico::getOrigen() const {
    return origen;
}

// ---------- Implementación ArmaCombate ----------

ArmaCombate::ArmaCombate(const string& nombre, int poder, const string& origen, int durabilidad, const string& tipo_combate)
    : nombre(nombre), poder(poder), origen(origen), durabilidad(durabilidad), tipo_combate(tipo_combate) {}

string ArmaCombate::getNombre() const {
    return nombre;
}

int ArmaCombate::getPoder() const {
    return poder;
}

string ArmaCombate::getOrigen() const {
    return origen;
}