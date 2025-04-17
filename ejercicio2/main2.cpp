#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <cstdlib>
#include <ctime>

#include "../ejercicio1/ArmasBase.h" 
#include "../ejercicio1/combate.h"   
#include "../ejercicio1/magicos.h"    
#include "../ejercicio1/personajes.h"    
#include "../ejercicio1/guerreros.h"   
#include "../ejercicio1/magos.h"
#include "PersonajeFactory.h"  

using namespace std;

struct PersonajeConArmas {
    shared_ptr<Personaje> personaje;
    vector<shared_ptr<Arma>> armas;
};

void eliminarPersonajesNulos(vector<PersonajeConArmas>& personajesArmados) {
    for (auto& entry : personajesArmados) {
        if (!entry.personaje) {
            entry.armas.clear();  // Borra las armas del personaje nulo
        }
    }

    personajesArmados.erase(
        remove_if(personajesArmados.begin(), personajesArmados.end(),
                  [](const PersonajeConArmas& p) {
                      return !p.personaje;
                  }),
        personajesArmados.end()
    );
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    int cantidadMagos = rand() % 5 + 3;     // 3 a 7
    int cantidadGuerreros = rand() % 5 + 3; // 3 a 7

    vector<PersonajeConArmas> personajesArmados;

    // Crear magos
    for (int i = 0; i < cantidadMagos; ++i) {
        auto mago = PersonajeFactory::crearMagoRandom();
        int cantidadArmas = rand() % 3; // 0 a 2

        vector<shared_ptr<Arma>> armas;
        for (int j = 0; j < cantidadArmas; ++j) {
            armas.push_back(PersonajeFactory::crearArmaMagicaRandom());
        }

        personajesArmados.push_back({mago, armas});
    }

    // Crear guerreros
    for (int i = 0; i < cantidadGuerreros; ++i) {
        auto guerrero = PersonajeFactory::crearGuerreroRandom();
        int cantidadArmas = rand() % 3; // 0 a 2

        vector<shared_ptr<Arma>> armas;
        for (int j = 0; j < cantidadArmas; ++j) {
            armas.push_back(PersonajeFactory::crearArmaCombateRandom());
        }

        personajesArmados.push_back({guerrero, armas});
    }

    // Simular que un personaje muere
    if (!personajesArmados.empty()) {
        personajesArmados[0].personaje = nullptr;
    }

    // Eliminar personajes nulos y sus armas
    eliminarPersonajesNulos(personajesArmados);

    // Mostrar resultado final
    for (const auto& par : personajesArmados) {
        auto personaje = par.personaje;
        auto armas = par.armas;

        cout << "Personaje: " << personaje->getOrigen() << " - " << personaje->getNombre() << endl;

        if (armas.empty()) {
            cout << "  -> No tiene armas" << endl;
        } else {
            cout << "  -> Armas:" << endl;
            for (const auto& arma : armas) {
                cout << "     - " << arma->getNombre() << endl;
            }
        }

        cout << "--------------------------------------" << endl;
    }

    return 0;
}