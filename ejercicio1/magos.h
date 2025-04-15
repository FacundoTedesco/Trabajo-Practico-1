#ifndef MAGOS_H
#define MAGOS_H
#pragma once
#include "personajes.h"
using namespace std;

class Hechicero : public Mago {
public:
    Hechicero(string nombre, int nivel_fe, int energia, string origen, int sabiduria);

    void lanzar_hechizo();         // Hechizo elemental ofensivo
    void estudiar();               // Estudia grimorios antiguos
    void meditar();                // Recupera energía espiritual
    void mostrar_clase() const;   // Muestra su tipo y origen (celestial/infernal)
    void aumentar_sabiduria();    // Aumenta el conocimiento arcano

private:
    int sabiduria; // Representa el conocimiento mágico adquirido
};

class Conjurador : public Mago {
public:
    Conjurador(string nombre, int nivel_fe, int energia, string origen, int invocaciones);

    void invocar_espectro();       // Llama una criatura del más allá
    void recitar_conjuro();        // Pronuncia palabras de poder
    void sellar_portal();          // Cierra brechas entre planos
    void mostrar_clase() const;
    void aumentar_invocaciones();  // Registra invocaciones exitosas

private:
    int invocaciones; // Número de entidades invocadas
};

class Brujo : public Mago {
public:
    Brujo(string nombre, int nivel_fe, int energia, string origen, int maldiciones);

    void maldecir();               // Aplica una maldición oscura
    void preparar_breaje();        // Crea pócimas mágicas
    void consultar_astros();       // Predice sucesos según constelaciones
    void mostrar_clase() const;
    void aumentar_maldiciones();   // Aumenta el poder de sus maldiciones

private:
    int maldiciones; // Número o intensidad de maldiciones lanzadas
};

class Nigromante : public Mago {
public:
    Nigromante(string nombre, int nivel_fe, int energia, string origen, int resurrecciones);

    void levantar_muertos();         // Convoca no-muertos a luchar
    void absorber_vida();            // Transfiere vitalidad enemiga a sí mismo
    void hablar_con_los_caidos();    // Se comunica con espíritus
    void mostrar_clase() const;
    void aumentar_resurrecciones();  // Incrementa su dominio sobre la muerte

private:
    int resurrecciones; // Cantidad de veces que ha revivido seres
};

#endif