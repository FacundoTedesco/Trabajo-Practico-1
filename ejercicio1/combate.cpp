#include "combate.h"
#include <iostream>
using namespace std;

// HachaSimple
HachaSimple::HachaSimple(string nombre, int poder, string origen, int durabilidad, string tipo_combate,
                         double peso, string material, string runa_grabada, bool bendecida, int nivel_precision)
    : ArmaCombate(nombre, poder, origen, durabilidad, tipo_combate),
      peso(peso), material(material), runa_grabada(runa_grabada), bendecida(bendecida), nivel_precision(nivel_precision) {}

void HachaSimple::golpear() {
    cout << "El hacha simple golpea con precisión divina.\n";
}

void HachaSimple::afilar() {
    cout << "Afilar hacha simple: +1 precisión.\n";
}

void HachaSimple::lanzar() {
    cout << "El hacha simple es lanzada con fuerza angelical.\n";
}

double HachaSimple::getPeso() const {
    return peso;
}

string HachaSimple::getMaterial() const {
    return material;
}

// HachaDoble
HachaDoble::HachaDoble(string nombre, int poder, string origen, int durabilidad, string tipo_combate,
                       int filo_doble, string forja, bool maldita, string emblema_demonio, int nivel_sangrado)
    : ArmaCombate(nombre, poder, origen, durabilidad, tipo_combate),
      filo_doble(filo_doble), forja(forja), maldita(maldita), emblema_demonio(emblema_demonio), nivel_sangrado(nivel_sangrado) {}

void HachaDoble::golpear() {
    cout << "El hacha doble desgarra con furia demoníaca.\n";
}

void HachaDoble::girar() {
    cout << "El hacha doble gira causando estragos.\n";
}

int HachaDoble::get_filo_doble() const {
    return filo_doble;
}

string HachaDoble::getForja() const {
    return forja;
}

void HachaDoble::reforzar() {
    cout << "El hacha doble es reforzada con fuego infernal.\n";
}

// Espada
Espada::Espada(string nombre, int poder, string origen, int durabilidad, string tipo_combate,
               double longitud, string tipo_hoja, bool consagrada, string gema_incrustada, string estilo_esgrima)
    : ArmaCombate(nombre, poder, origen, durabilidad, tipo_combate),
      longitud(longitud), tipo_hoja(tipo_hoja), consagrada(consagrada), gema_incrustada(gema_incrustada), estilo_esgrima(estilo_esgrima) {}

void Espada::golpear() {
    cout << "La espada emite una estocada divina.\n";
}

void Espada::desenvainar() {
    cout << "La espada se desenvaina con honor celestial.\n";
}

double Espada::getLongitud() const {
    return longitud;
}

string Espada::get_tipo_hoja() const {
    return tipo_hoja;
}

void Espada::bloquear() {
    cout << "La espada bloquea el ataque con precisión angelical.\n";
}

// Lanza
Lanza::Lanza(string nombre, int poder, string origen, int durabilidad, string tipo_combate,
             int alcance, string punta, bool puede_extenderse, string empuñadura, string esencia_divina)
    : ArmaCombate(nombre, poder, origen, durabilidad, tipo_combate),
      alcance(alcance), punta(punta), puede_extenderse(puede_extenderse), empuñadura(empuñadura), esencia_divina(esencia_divina) {}

void Lanza::golpear() {
    cout << "La lanza perfora con fuerza celestial.\n";
}

int Lanza::getAlcance() const {
    return alcance;
}

string Lanza::getPunta() const {
    return punta;
}

void Lanza::lanzar() {
    cout << "La lanza es lanzada con precisión divina.\n";
}

void Lanza::apuntar() {
    cout << "La lanza apunta al corazón del enemigo.\n";
}

// Garrote
Garrote::Garrote(string nombre, int poder, string origen, int durabilidad, string tipo_combate,
                 string tipo_madera, bool grabados, int peso_bruto, string reliquia_embebida, bool invocador_de_miedo)
    : ArmaCombate(nombre, poder, origen, durabilidad, tipo_combate),
      tipo_madera(tipo_madera), grabados(grabados), peso_bruto(peso_bruto), reliquia_embebida(reliquia_embebida), invocador_de_miedo(invocador_de_miedo) {}

void Garrote::golpear() {
    cout << "El garrote impacta brutalmente.\n";
}

string Garrote::get_tipo_madera() const {
    return tipo_madera;
}

bool Garrote::tiene_grabados() const {
    return grabados;
}

void Garrote::aplastar() {
    cout << "El garrote aplasta sin piedad.\n";
}

void Garrote::romper() {
    cout << "El garrote rompe huesos y escudos.\n";
}