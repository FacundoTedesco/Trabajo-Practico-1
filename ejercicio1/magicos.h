#ifndef ARMAS_MAGICAS_H
#define ARMAS_MAGICAS_H
#pragma once
#include "ArmasBase.h"
using namespace std;

// Espera: longitud (cm), madera (tipo de madera), grabado (sí/no), aura (nombre), runas (número de runas)
class Baston : public ItemMagico {
private:
    double longitud;
    string madera;
    bool grabado;
    string aura;
    int runas;

public:
    Baston(string nombre, int poder, string origen, int durabilidad, string tipo_magia,
           double longitud, string madera, bool grabado, string aura, int runas);

    void invocar() override;
    void canalizar();
    double getLongitud() const;
    string getMadera() const;
    bool tiene_grabado() const;
    string getAura() const;
    int get_cantidad_runas() const;
    string get_tipo_magia() const override ;
    int get_nivel_magico() const override ;
    string descripcion() const override;
    void golpear() override {}
};

// Espera: cantidad_hechizos, idioma (latín, hebreo, etc.), encuadernado (cuero/tela), paginas (número), tiene_sello
class LibroHechizos : public ItemMagico {
private:
    int cantidad_hechizos;
    string idioma;
    string encuadernado;
    int paginas;
    bool tiene_sello;

public:
    LibroHechizos(string nombre, int poder, string origen, int durabilidad, string tipo_magia,
                  int cantidad_hechizos, string idioma, string encuadernado, int paginas, bool tiene_sello);

    void invocar() override;
    void leer();
    int get_cantidad_hechizos() const;
    string getIdioma() const;
    string getEncuadernado() const;
    int getPaginas() const;
    bool posee_sello() const;
    string get_tipo_magia() const override;
    int get_nivel_magico() const override;
    string descripcion() const override;
    void golpear() override {}

};

// Espera: efecto, volumen (ml), color, viscosidad, caducidad (en días)
class Pocion : public ItemMagico {
private:
    string efecto;
    int volumen;
    string color;
    double viscosidad;
    int caducidad;

public:
    Pocion(string nombre, int poder, string origen, int durabilidad, string tipo_magia,
           string efecto, int volumen, string color, double viscosidad, int caducidad);

    void invocar() override;
    void beber();
    string getEfecto() const;
    int getVolumen() const;
    string getColor() const;
    double getViscosidad() const;
    int getCaducidad() const;
    string get_tipo_magia() const override ;
    int get_nivel_magico() const override;
    string descripcion() const override;
    void golpear() override {}
};

// Espera: simbolo, gema, material, brillo (nivel), protectora (sí/no)
class Amuleto : public ItemMagico {
private:
    string simbolo;
    string gema;
    string material;
    int brillo;
    bool protectora;

public:
    Amuleto(string nombre, int poder, string origen, int durabilidad, string tipo_magia,
            string simbolo, string gema, string material, int brillo, bool protectora);

    void invocar() override;
    void activar();
    string getSimbolo() const;
    string getGema() const;
    string getMaterial() const;
    int getBrillo() const;
    bool es_protectora() const;
    string get_tipo_magia() const override;
    int get_nivel_magico() const override;
    string descripcion() const override;
    void golpear() override {}
};

#endif