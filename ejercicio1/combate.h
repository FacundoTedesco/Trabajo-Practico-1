#ifndef ARMAS_DE_COMBATE_H
#define ARMAS_DE COMBATE_H
#pragma once
#include "ArmasBase.h"
using namespace std;

// Arma de los guerreros celestiales, ligera pero mortal
class HachaSimple : public ArmaCombate {
private:
    double peso;                     // Peso del arma (en kg)
    string material;            // Material del hacha (ej: acero celestial)
    string runa_grabada;        // Runa mística grabada en el hacha
    bool bendecida;                  // Indica si el arma ha sido bendecida
    int nivel_precision;             // Nivel de precisión en combate (1-10)
public:
    HachaSimple(string nombre, int poder, string origen,
                int durabilidad, string tipo_combate,
                double peso, string material,
                string runa_grabada, bool bendecida, int nivel_precision);

    void golpear() override;
    void afilar();
    void lanzar();
    double getPeso() const;
    string getMaterial() const;
    string getNombre() const override { return nombre; }
    string getOrigen() const override { return origen; }
    int get_durabilidad() const override { return durabilidad; }
    int getPoder() const override{ return poder; };
    string get_tipo_combate() const override { return tipo_combate; }
    string descripcion() const override { return "Arma de combate"; }
    void invocar() override {}
};

// Forjada en los fuegos del infierno, temida por todos
class HachaDoble : public ArmaCombate {
private:
    int filo_doble;                  // Cantidad de filos (usualmente 2)
    string forja;              // Lugar o tipo de forja (ej: Forja Oscura)
    bool maldita;                   // Si está maldita o no
    string emblema_demonio;    // Emblema que representa su origen demoníaco
    int nivel_sangrado;             // Nivel de sangrado que puede provocar (1-10)
public:
    HachaDoble(string nombre, int poder, string origen,
               int durabilidad, string tipo_combate,
               int filo_doble, string forja,
               bool maldita, string emblema_demonio, int nivel_sangrado);

    void golpear() override;
    void girar();
    int get_filo_doble() const;
    string getForja() const;
    void reforzar();
};

// Espada de juicio usada por los arcángeles
class Espada : public ArmaCombate {
private:
    double longitud;                // Longitud total (en cm)
    string tipo_hoja;          // Tipo de hoja (recta, curva, etc.)
    bool consagrada;                // Si está consagrada por un arcángel
    string gema_incrustada;   // Gema mágica incrustada en la empuñadura
    string estilo_esgrima;    // Estilo de esgrima para el cual está diseñada
public:
    Espada(string nombre, int poder, string origen,
           int durabilidad, string tipo_combate,
           double longitud, string tipo_hoja,
           bool consagrada, string gema_incrustada, string estilo_esgrima);

    void golpear() override;
    void desenvainar();
    double getLongitud() const;
    string get_tipo_hoja() const;
    void bloquear();
};

// Lanza utilizada en batallas celestiales, alcanza grandes distancias
class Lanza : public ArmaCombate {
private:
    int alcance;                    // Distancia máxima efectiva (en metros)
    string punta;              // Tipo de punta (acero, divina, etc.)
    bool puede_extenderse;          // Indica si la lanza puede extender su longitud
    string empuñadura;         // Tipo de empuñadura
    string esencia_divina;     // Tipo de esencia infundida
public:
    Lanza(string nombre, int poder, string origen,
          int durabilidad, string tipo_combate,
          int alcance, string punta,
          bool puede_extenderse, string empuñadura, string esencia_divina);

    void golpear() override;
    int getAlcance() const;
    string getPunta() const;
    void lanzar();
    void apuntar();
};

// Arma brutal de los demonios bárbaros, hecha con madera maldita
class Garrote : public ArmaCombate {
private:
    string tipo_madera;        // Madera usada (ej: roble oscuro)
    bool grabados;                  // Si tiene grabados rúnicos
    int peso_bruto;                 // Peso total del garrote (en kg)
    string reliquia_embebida;  // Objeto místico incrustado en el arma
    bool invocador_de_miedo;        // Si infunde miedo al usarse
public:
    Garrote(string nombre, int poder, string origen,
            int durabilidad, string tipo_combate,
            string tipo_madera, bool grabados,
            int peso_bruto, string reliquia_embebida, bool invocador_de_miedo);

    void golpear() override;
    string get_tipo_madera() const;
    bool tiene_grabados() const;
    void aplastar();
    void romper();
};

#endif