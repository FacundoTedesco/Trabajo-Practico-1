#include <iostream>
#include <memory>
#include <cstdlib>
#include <ctime>

#include "combate.h"
#include "ejercicio2/PersonajeFactory.h"

std::string generarBarraDeVida(int hp) {
    int bloques = hp / 10; // Cada 10 HP es un bloque
    std::string barra = "[";
    for (int i = 0; i < 10; ++i) {
        if (i < bloques)
            barra += "█";
        else
            barra += " ";
    }
    barra += "]";
    return barra;
}

int main() {
    std::srand(std::time(nullptr));

    // Elección del jugador 1
    std::cout << "Elige tu tipo de personaje:\n";
    std::cout << "1. Hechicero\n2. Conjurador\n3. Brujo\n4. Nigromante\n";
    std::cout << "5. Barbaro\n6. Paladin\n7. Caballero\n8. Mercenario\n9. Gladiador\n";
    int opcion;
    std::cin >> opcion;

    std::shared_ptr<Personaje> jugador1Pers;
    if (opcion >= 1 && opcion <= 4)
        jugador1Pers = PersonajeFactory::crearMagoPorIndice(opcion - 1);
    else
        jugador1Pers = PersonajeFactory::crearGuerreroPorIndice(opcion - 5);

    std::cout << "Elige tu arma:\n";
    std::cout << "1. Baston\n2. Libro de Hechizos\n3. Poción\n4. Amuleto\n";
    std::cout << "5. Hacha Simple\n6. Hacha Doble\n7. Espada\n8. Lanza\n9. Garrote\n";
    std::cin >> opcion;

    std::shared_ptr<Arma> jugador1Arma;
    if (opcion >= 1 && opcion <= 4)
        jugador1Arma = PersonajeFactory::crearArmaMagicaPorIndice(opcion - 1);
    else
        jugador1Arma = PersonajeFactory::crearArmaCombatePorIndice(opcion - 5);

    // Jugador 2 random
    auto jugador2Pers = (std::rand() % 2 == 0) ? PersonajeFactory::crearMagoRandom()
                                              : PersonajeFactory::crearGuerreroRandom();
    auto jugador2Arma = (std::rand() % 2 == 0) ? PersonajeFactory::crearArmaMagicaRandom()
                                              : PersonajeFactory::crearArmaCombateRandom();

    Jugador jugador1(jugador1Pers, jugador1Arma);
    Jugador jugador2(jugador2Pers, jugador2Arma);

    while (jugador1.getHP() > 0 && jugador2.getHP() > 0) {
        std::cout << "\nJugador 1 (" << jugador1.getTipo() << ") HP: " << jugador1.getHP()
                  << " " << generarBarraDeVida(jugador1.getHP()) << "\n";
        std::cout << "Jugador 2 (" << jugador2.getTipo() << ") HP: " << jugador2.getHP()
                  << " " << generarBarraDeVida(jugador2.getHP()) << "\n";

        std::cout << "\nElige tu accion:\n";
        std::cout << "1. Golpe Fuerte\n2. Golpe Rapido\n3. Defensa y Golpe\n";
        int accionJugador1;
        std::cin >> accionJugador1;

        int accionJugador2 = 1 + std::rand() % 3;

        combate::resolverRonda(
            jugador1,
            static_cast<Accion>(accionJugador1),
            jugador2,
            static_cast<Accion>(accionJugador2)
        );
    }

    std::cout << "\n--- Fin del combate ---\n";
    if (jugador1.getHP() <= 0 && jugador2.getHP() <= 0)
        std::cout << "¡Empate! Ambos jugadores han caído.\n";
    else if (jugador1.getHP() <= 0)
        std::cout << jugador2.getTipo() << " ha ganado la batalla.\n";
    else
        std::cout << jugador1.getTipo() << " ha ganado la batalla.\n";

    return 0;
}
