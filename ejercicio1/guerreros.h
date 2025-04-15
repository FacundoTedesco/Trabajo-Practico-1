#ifndef GUERREROS_H
#define GUERREROS_H
#pragma once
#include "personajes.h"
using namespace std;

//los 4 atributos nombre, nivel_fe, resistencia, origen vienen por herencia

class Barbaro : public Guerrero {
public:
    Barbaro(string nombre, int nivel_fe, int resistencia, string origen, int furia);
    void gritar_batalla() const;       // Clama a la guerra con fuerza infernal
    void embestir();                   // Ataque físico brutal
    void descansar();                  // Recupera energía en el campo de batalla
    void mostrar_clase() const;       // Muestra el tipo de guerrero
    void aumentar_furia();            // Incrementa su rabia demoníaca

private:
    int furia;                         // Ira acumulada, usada en ataques especiales
};

class Paladin : public Guerrero {
public:
    Paladin(string nombre, int nivel_fe, int resistencia, string origen, int bendicion);
    void rezar();                      // Conecta con el cielo para obtener fe
    void proteger_aliado();           // Usa su escudo para defender a otros
    void sanar();                      // Canaliza energía celestial para curar
    void mostrar_clase() const;
    void aumentar_bendicion();        // Incrementa su estado de gracia divina

private:
    int bendicion;                    // Nivel de protección divina
};

class Caballero : public Guerrero {
public:
    Caballero(string nombre, int nivel_fe, int resistencia, string origen, int honor);
    void cabalgar();                   // Recorre los campos sagrados o infernales
    void duelar();                     // Lucha por su código
    void rendir_honor();              // Realiza una acción noble
    void mostrar_clase() const;
    void aumentar_honor();            // Aumenta su reputación entre los suyos

private:
    int honor;                         // Representa su reputación y dignidad
};

class Mercenario : public Guerrero {
public:
    Mercenario(string nombre, int nivel_fe, int resistencia, string origen, int monedas);
    void negociar();                   // Aumenta sus ganancias antes de luchar
    void atacar_por_dinero();         // Lucha sin lealtades, por pago
    void descansar();                 
    void mostrar_clase() const;
    void cobrar();                     // Incrementa sus monedas tras cada combate

private:
    int monedas;                       // Recompensa acumulada por sus servicios
};

class Gladiador : public Guerrero {
public:
    Gladiador(string nombre, int nivel_fe, int resistencia, string origen, int victorias);
    void luchar_en_arena();           // Pelea por gloria en coliseos celestiales o infernales
    void alardear();                   // Muestra sus logros a los demás
    void entrenar();                   // Mejora sus habilidades en combate
    void mostrar_clase() const;
    void aumentar_victorias();        // Aumenta su registro de triunfos

private:
    int victorias;                     // Cantidad de combates ganados
};

#endif // GUERREROS_H