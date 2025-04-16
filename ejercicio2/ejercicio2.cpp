#include "PersonajeFactory.h"
#include <cstdlib>
#include <ctime>

using namespace std;

shared_ptr<Mago> PersonajeFactory::crearMagoRandom() {
    int Mago = rand() % 4;  // 0 a 3 
    switch (Mago) {
        case 0: return make_shared<Hechicero>("Hechicero", 1, 100, "Celestial", 10);
        case 1: return make_shared<Conjurador>("Conjurador", 1, 100, "Infernal", 10);
        case 2: return make_shared<Brujo>("Brujo", 1, 100, "Celestial", 10);
        case 3: return make_shared<Nigromante>("Nigromante", 1, 100, "Infernal", 10);
        default: return nullptr;
    }
}

shared_ptr<Guerrero> PersonajeFactory::crearGuerreroRandom() {
    int Guerrero = rand() % 5;  // 0 a 4 
    switch (Guerrero) {
        case 0: return make_shared<Barbaro>("Barbaro", 1, 100, "Celestial", 10);
        case 1: return make_shared<Paladin>("Paladin", 1, 100, "Infernal", 10);
        case 2: return make_shared<Caballero>("Caballero", 1, 100, "Celestial", 10);
        case 3: return make_shared<Mercenario>("Mercenario", 1, 100, "Infernal", 10);
        case 4: return make_shared<Gladiador>("Gladiador", 1, 100, "Celestial", 10);
        default: return nullptr;
    }
}

shared_ptr<ItemMagico> PersonajeFactory::crearArmaMagicaRandom() {
    int ArmaMagica = rand() % 4;  // 0 a 3 
    switch (ArmaMagica) {
        case 0: return make_shared<Baston>("Baston", 10, "Celestial", 100, "Fuego", 
                                         1.5, "Roble", true, "Luz", 3);
        case 1: return make_shared<LibroHechizos>("LibroHechizos", 10, "Infernal", 100, "Agua", 
                                                 5, "Latín", "Cuero", 200, true);
        case 2: return make_shared<Pocion>("Posion", 10, "Celestial", 100, "Tierra", 
                                         "Cura", 500, "Rojo", 0.5, 30);
        case 3: return make_shared<Amuleto>("Amuleto", 10, "Infernal", 100, "Oscuro",
                                          "Pentagrama", "Rubí", "Oro", 5, true);
        default: return nullptr;
    }
}

shared_ptr<ArmaCombate> PersonajeFactory::crearArmaCombateRandom() {
    int ArmaCombate = rand() % 5;  // 0 a 4 
    switch (ArmaCombate) {
        case 0: return make_shared<HachaSimple>("Hacha Simple", 10, "Celestial", 100, "Cuerpo a cuerpo",
                                               2.5, "Acero celestial", "Protección", true, 8);
        case 1: return make_shared<HachaDoble>("Hacha Doble", 10, "Infernal", 100, "Cuerpo a cuerpo",
                                              2, "Forja Oscura", true, "Demonio", 5);
        case 2: return make_shared<Espada>("Espada", 10, "Celestial", 100, "Cuerpo a cuerpo",
                                         100.0, "Recta", true, "Diamante", "Esgrima");
        case 3: return make_shared<Lanza>("Lanza", 10, "Infernal", 100, "A distancia",
                                        300, "Acero", true, "Cuero", "Luz");
        case 4: return make_shared<Garrote>("Garrote", 10, "Celestial", 100, "Contundente",
                                          "Roble oscuro", true, 5, "Gema del poder", true);
        default: return nullptr;
    }
}