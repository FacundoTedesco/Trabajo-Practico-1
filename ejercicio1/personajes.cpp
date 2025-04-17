#include "personajes.h"
using namespace std;

//Guerrero
Guerrero::Guerrero(string nombre, int nivel_fe, int energia, string origen, int resistencia)
    : nombre(nombre), nivel_fe(nivel_fe), energia(energia), origen(origen), resistencia(resistencia) {}

string Guerrero::getNombre() const { return nombre; }
int Guerrero::get_nivel_fe() const { return nivel_fe; }
int Guerrero::getEnergia() const { return energia; }
string Guerrero::getOrigen() const { return origen; }
int Guerrero::getResistencia() const { return resistencia; } 

//Mago
Mago::Mago(string nombre, int nivel_fe, int energia, string origen,  int sabiduria)
    : nombre(nombre), nivel_fe(nivel_fe), energia(energia), origen(origen), sabiduria(sabiduria){}

string Mago::getNombre() const { return nombre; }
int Mago::get_nivel_fe() const { return nivel_fe; }
int Mago::getEnergia() const { return energia; }
string Mago::getOrigen() const { return origen; }
int Mago::getSabiduria() const { return sabiduria; }
