#ifndef PERSONAJES_H
#define PERSONAJES_H
#pragma once
#include <string>
using namespace std;

class Personaje {
public:
    virtual string getNombre() const = 0;
    virtual int get_nivel_fe() const = 0;
    virtual int getEnergia() const = 0;
    virtual string getOrigen() const = 0;
    virtual ~Personaje() {} // Destructor virtual obligatorio
};

class Guerrero : public Personaje {
public:
    Guerrero(string nombre, int nivel_fe, int energia, string origen, int resistencia);

    string getNombre() const override;
    int get_nivel_fe() const override;
    int getEnergia() const override;
    string getOrigen() const override;
    virtual int getResistencia() const;

protected:
    string nombre;
    int nivel_fe;
    int energia;
    string origen;
    int resistencia; 
};

class Mago : public Personaje {
public:
    Mago(string nombre, int nivel_fe, int energia, string origen, int sabiduria);

    string getNombre() const override;
    int get_nivel_fe() const override;
    int getEnergia() const override;
    string getOrigen() const override;
    virtual int getSabiduria() const;

protected:
    string nombre;
    int nivel_fe;
    int energia;
    string origen;
    int sabiduria; 
};

#endif // PERSONAJES_H
