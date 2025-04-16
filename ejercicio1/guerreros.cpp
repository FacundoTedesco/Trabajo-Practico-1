#include "guerreros.h"
#include <iostream>
using namespace std;

// ----------- Bárbaro -------------
Barbaro::Barbaro(string nombre, int nivel_fe, int resistencia, string origen, int furia)
    : Guerrero(nombre, nivel_fe, resistencia, origen, furia){}

void Barbaro::gritar_batalla() const {
    cout << nombre << " grita con furia infernal en el campo de batalla." << endl;
}

void Barbaro::embestir() {
    cout << nombre << " embiste al enemigo con brutalidad salvaje." << endl;
}

void Barbaro::descansar() {
    cout << nombre << " recupera fuerzas tras un combate." << endl;
}

void Barbaro::mostrar_clase() const {
    cout << nombre << " es un Bárbaro nacido en " << origen << "." << endl;
}

void Barbaro::aumentar_furia() {
    furia += 5;
}

// ----------- Paladín -------------
Paladin::Paladin(string nombre, int nivel_fe, int resistencia, string origen, int bendicion)
    : Guerrero(nombre, nivel_fe, resistencia, origen, bendicion){}

void Paladin::rezar() {
    cout << nombre << " reza a los cielos en busca de guía." << endl;
}

void Paladin::proteger_aliado() {
    cout << nombre << " levanta su escudo para proteger a un hermano de fe." << endl;
}

void Paladin::sanar() {
    cout << nombre << " canaliza energía celestial para curar heridas." << endl;
}

void Paladin::mostrar_clase() const {
    cout << nombre << " es un Paladín del reino de " << origen << "." << endl;
}

void Paladin::aumentar_bendicion() {
    bendicion += 3;
}

// ----------- Caballero -------------
Caballero::Caballero(string nombre, int nivel_fe, int resistencia, string origen, int honor)
    : Guerrero(nombre, nivel_fe, resistencia, origen, honor){}

void Caballero::cabalgar() {
    cout << nombre << " cabalga hacia la batalla con nobleza." << endl;
}

void Caballero::duelar() {
    cout << nombre << " reta a duelo a su enemigo en defensa del honor." << endl;
}

void Caballero::rendir_honor() {
    cout << nombre << " se niega a luchar sucio. Su código lo impide." << endl;
}

void Caballero::mostrar_clase() const {
    cout << nombre << " es un Caballero de la orden de " << origen << "." << endl;
}

void Caballero::aumentar_honor() {
    honor += 2;
}

// ----------- Mercenario -------------
Mercenario::Mercenario(string nombre, int nivel_fe, int resistencia, string origen, int monedas)
    : Guerrero(nombre, nivel_fe, resistencia, origen, monedas){}

void Mercenario::negociar() {
    cout << nombre << " negocia su próxima misión por un mejor precio." << endl;
}

void Mercenario::atacar_por_dinero() {
    cout << nombre << " ataca sin piedad, motivado por oro." << endl;
}

void Mercenario::descansar() {
    cout << nombre << " toma un respiro tras el combate." << endl;
}

void Mercenario::mostrar_clase() const {
    cout << nombre << " es un Mercenario errante de " << origen << "." << endl;
}

void Mercenario::cobrar() {
    monedas += 10;
}

// ----------- Gladiador -------------
Gladiador::Gladiador(string nombre, int nivel_fe, int resistencia, string origen, int victorias)
    : Guerrero(nombre, nivel_fe, resistencia, origen , victorias) {}

void Gladiador::luchar_en_arena() {
    cout << nombre << " pelea ante miles en la gran arena celestial." << endl;
}

void Gladiador::alardear() {
    cout << nombre << " presume de sus victorias ante los demás guerreros." << endl;
}

void Gladiador::entrenar() {
    cout << nombre << " se prepara para su próximo combate." << endl;
}

void Gladiador::mostrar_clase() const {
    cout << nombre << " es un Gladiador de " << origen << " con " << victorias << " victorias." << endl;
}

void Gladiador::aumentar_victorias() {
    victorias++;
}