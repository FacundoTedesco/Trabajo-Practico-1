#include "magicos.h"
#include <iostream>
using namespace std;

// Bastón
Baston::Baston(string nombre, int poder, string origen, int durabilidad, string tipo_magia,
               double longitud, string madera, bool grabado, string aura, int runas)
    : ItemMagico(nombre, poder, origen, durabilidad, tipo_magia),
      longitud(longitud), madera(madera), grabado(grabado), aura(aura), runas(runas) {}

void Baston::invocar() {
    cout << "Bastón canaliza una energía divina con aura de " << aura << "." << endl;
}

void Baston::canalizar() {
    cout << "El bastón canaliza una luz celestial mediante " << runas << " runas." << endl;
}

double Baston::getLongitud() const { return longitud; }
string Baston::getMadera() const { return madera; }
bool Baston::tiene_grabado() const { return grabado; }
string Baston::getAura() const { return aura; }
int Baston::get_cantidad_runas() const { return runas; }
string Baston::get_tipo_magia() const  { return tipo_magia; }
int Baston::get_nivel_magico() const  { return nivel_magico; }
string Baston::descripcion() const  { return "Bastón mágico"; }

// Libro de Hechizos
LibroHechizos::LibroHechizos(string nombre, int poder, string origen, int durabilidad, string tipo_magia,
                             int cantidad_hechizos, string idioma, string encuadernado, int paginas, bool tiene_sello)
    : ItemMagico(nombre, poder, origen, durabilidad, tipo_magia),
      cantidad_hechizos(cantidad_hechizos), idioma(idioma), encuadernado(encuadernado), paginas(paginas), tiene_sello(tiene_sello) {}

void LibroHechizos::invocar() {
    cout << "Libro de hechizos invoca un encantamiento en " << idioma << "." << endl;
}

void LibroHechizos::leer() {
    cout << "Se leen " << cantidad_hechizos << " conjuros de un total de " << paginas << " páginas." << endl;
}

int LibroHechizos::get_cantidad_hechizos() const { return cantidad_hechizos; }
string LibroHechizos::getIdioma() const { return idioma; }
string LibroHechizos::getEncuadernado() const { return encuadernado; }
int LibroHechizos::getPaginas() const { return paginas; }
string LibroHechizos::get_tipo_magia() const  { return tipo_magia; }
int LibroHechizos::get_nivel_magico() const  { return nivel_magico; }
string LibroHechizos::descripcion() const  { return "Libro de hechizos"; }
bool LibroHechizos::posee_sello() const { return tiene_sello; }

// Poción
Pocion::Pocion(string nombre, int poder, string origen, int durabilidad, string tipo_magia,
               string efecto, int volumen, string color, double viscosidad, int caducidad)
    : ItemMagico(nombre, poder, origen, durabilidad, tipo_magia),
      efecto(efecto), volumen(volumen), color(color), viscosidad(viscosidad), caducidad(caducidad) {}

void Pocion::invocar() {
    cout << "Poción de " << efecto << " es activada con un color " << color << "." << endl;
}

void Pocion::beber() {
    cout << "La poción es bebida, viscosidad: " << viscosidad << ", cura en " << efecto << "." << endl;
}

string Pocion::getEfecto() const { return efecto; }
int Pocion::getVolumen() const { return volumen; }
string Pocion::getColor() const { return color; }
double Pocion::getViscosidad() const { return viscosidad; }
string Pocion::get_tipo_magia() const  { return tipo_magia; }
int Pocion::get_nivel_magico() const  { return nivel_magico; }
string Pocion::descripcion() const  { return "Poción mágica"; }
int Pocion::getCaducidad() const { return caducidad; }

// Amuleto
Amuleto::Amuleto(string nombre, int poder, string origen, int durabilidad, string tipo_magia,
                 string simbolo, string gema, string material, int brillo, bool protectora)
    : ItemMagico(nombre, poder, origen, durabilidad, tipo_magia),
      simbolo(simbolo), gema(gema), material(material), brillo(brillo), protectora(protectora) {}

void Amuleto::invocar() {
    cout << "Amuleto de " << simbolo << " brilla con la gema " << gema << "." << endl;
}

void Amuleto::activar() {
    cout << "El amuleto brilla con intensidad " << brillo << " y protege al portador." << endl;
}

string Amuleto::getSimbolo() const { return simbolo; }
string Amuleto::getGema() const { return gema; }
string Amuleto::getMaterial() const { return material; }
int Amuleto::getBrillo() const { return brillo; }
string Amuleto::get_tipo_magia() const  { return tipo_magia; }
int Amuleto::get_nivel_magico() const  { return nivel_magico; }
string Amuleto::descripcion() const  { return "Amuleto mágico"; }
bool Amuleto::es_protectora() const { return protectora; }