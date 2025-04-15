#include "magos.h"
#include <iostream>
using namespace std;

// Hechicero

Hechicero::Hechicero(string nombre, int nivel_fe, int energia, string origen, int sabiduria)
    : Mago(nombre, nivel_fe, energia, origen, sabiduria) {}

void Hechicero::lanzar_hechizo() {
    cout << nombre << " lanza un hechizo de fuego celestial." << endl;
}

void Hechicero::estudiar() {
    cout << nombre << " estudia antiguos grimorios sagrados." << endl;
}

void Hechicero::meditar() {
    cout << nombre << " medita en el templo del Cielo." << endl;
}

void Hechicero::mostrar_clase() const {
    cout << nombre << " es un Hechicero de origen " << origen << "." << endl;
}

void Hechicero::aumentar_sabiduria() {
    sabiduria += 4;
}

// Conjurador

Conjurador::Conjurador(string nombre, int nivel_fe, int energia, string origen, int invocaciones)
    : Mago(nombre, nivel_fe, energia, origen, invocaciones){}

void Conjurador::invocar_espectro() {
    cout << nombre << " invoca un espectro desde el inframundo." << endl;
}

void Conjurador::recitar_conjuro() {
    cout << nombre << " recita un conjuro arcano." << endl;
}

void Conjurador::sellar_portal() {
    cout << nombre << " sella un portal entre mundos." << endl;
}

void Conjurador::mostrar_clase() const {
    cout << nombre << " es un Conjurador de origen " << origen << "." << endl;
}

void Conjurador::aumentar_invocaciones() {
    invocaciones++;
}

// Brujo

Brujo::Brujo(string nombre, int nivel_fe, int energia, string origen, int maldiciones)
    : Mago(nombre, nivel_fe, energia, origen, maldiciones){}

void Brujo::maldecir() {
    cout << nombre << " lanza una maldición infernal." << endl;
}

void Brujo::preparar_breaje() {
    cout << nombre << " mezcla ingredientes prohibidos en su caldero." << endl;
}

void Brujo::consultar_astros() {
    cout << nombre << " consulta los astros demoníacos." << endl;
}

void Brujo::mostrar_clase() const {
    cout << nombre << " es un Brujo de origen " << origen << "." << endl;
}

void Brujo::aumentar_maldiciones() {
    maldiciones += 2;
}

// Nigromante

Nigromante::Nigromante(string nombre, int nivel_fe, int energia, string origen, int resurrecciones)
    : Mago(nombre, nivel_fe, energia, origen, resurrecciones) {}

void Nigromante::levantar_muertos() {
    cout << nombre << " levanta un ejército de almas perdidas." << endl;
}

void Nigromante::absorber_vida() {
    cout << nombre << " absorbe la esencia vital de su enemigo." << endl;
}

void Nigromante::hablar_con_los_caidos() {
    cout << nombre << " conversa con espíritus del infierno." << endl;
}

void Nigromante::mostrar_clase() const {
    cout << nombre << " es un Nigromante de origen " << origen << "." << endl;
}

void Nigromante::aumentar_resurrecciones() {
    resurrecciones++;
}