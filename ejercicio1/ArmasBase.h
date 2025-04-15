#ifndef ARMA_H
#define ARMA_H
#pragma once
#include <string>
using namespace std;

class Arma {
public:
    virtual ~Arma() = default;

    virtual string getNombre() const = 0;
    virtual int getPoder() const = 0;
    virtual string getOrigen() const = 0;
    virtual string descripcion() const = 0;
    virtual void golpear() = 0;
    virtual void invocar() = 0;
};

class ItemMagico : public Arma {
protected:
    string nombre;
    int poder;
    string origen;
    int nivel_magico;
    string tipo_magia;

public:
    ItemMagico(const string& nombre, int poder, const string& origen,
               int nivel_magico, const string& tipo_magia);

    string getNombre() const override;
    int getPoder() const override;
    string getOrigen() const override;
    string descripcion() const override { return "Item mágico"; }
    void golpear() override {}
    void invocar() override {}

    virtual string get_tipo_magia() const = 0;
    virtual int get_nivel_magico() const = 0;
};

class ArmaCombate : public Arma {
protected:
    string nombre;
    int poder;
    string origen;
    int durabilidad;
    string tipo_combate;

public:
    ArmaCombate(const string& nombre, int poder, const string& origen,
                int durabilidad, const string& tipo_combate);

    string getNombre() const override;
    int getPoder() const override;
    string getOrigen() const override;
    string descripcion() const override { return "Arma de combate"; }
    void golpear() override {}
    void invocar() override {}

    virtual string get_tipo_combate() const = 0;
    virtual int get_durabilidad() const = 0;
};

#endif