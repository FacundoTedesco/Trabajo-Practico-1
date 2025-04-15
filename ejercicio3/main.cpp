#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

const int VIDA_MAXIMA = 100;
const int DANIO = 10;

enum Movimiento {
    GOLPE_FUERTE = 1,
    GOLPE_RAPIDO,
    DEFENSA_GOLPE
};

struct Personaje {
    string nombre;
    string arma;
    int vida = VIDA_MAXIMA;
};

void mostrar_barra_vida(const string& nombre, int vida) {
    cout << nombre << " [";
    int porcentaje = (vida * 20) / VIDA_MAXIMA;
    for (int i = 0; i < 20; i++) {
        if (i < porcentaje) cout << "█";
        else cout << "-";
    }
    cout << "] " << vida << " HP\n";
}

Movimiento elegir_movimiento_jugador() {
    int opcion;
    do {
        cout << "Su opción: (1) Golpe Fuerte, (2) Golpe Rápido, (3) Defensa y Golpe: ";
        cin >> opcion;
    } while (opcion < 1 || opcion > 3);
    return static_cast<Movimiento>(opcion);
}

Movimiento elegir_movimiento_aleatorio() {
    return static_cast<Movimiento>((rand() % 3) + 1);
}

string movimiento_a_texto(Movimiento m) {
    switch (m) {
        case GOLPE_FUERTE: return "Golpe Fuerte";
        case GOLPE_RAPIDO: return "Golpe Rápido";
        case DEFENSA_GOLPE: return "Defensa y Golpe";
    }
    return "";
}

void combate(Personaje& p1, Personaje& p2, Movimiento m1, Movimiento m2) {
    cout << p1.nombre << " ataca con " << p1.arma << " usando " << movimiento_a_texto(m1) << endl;
    cout << p2.nombre << " ataca con " << p2.arma << " usando " << movimiento_a_texto(m2) << endl;

    if (m1 == m2) {
        cout << "Ambos usaron la misma táctica. ¡Empate!\n";
        return;
    }

    if ((m1 == GOLPE_FUERTE && m2 == GOLPE_RAPIDO) ||
        (m1 == GOLPE_RAPIDO && m2 == DEFENSA_GOLPE) ||
        (m1 == DEFENSA_GOLPE && m2 == GOLPE_FUERTE)) {
        p2.vida -= DANIO;
        cout << p1.nombre << " hace " << DANIO << " puntos de daño a " << p2.nombre << "!\n";
    } else {
        p1.vida -= DANIO;
        cout << p2.nombre << " hace " << DANIO << " puntos de daño a " << p1.nombre << "!\n";
    }
}

int main() {
    srand(time(nullptr));

    vector<string> nombres_magos = {"Hechicero", "Conjurador", "Brujo", "Nigromante"};
    vector<string> nombres_guerreros = {"Bárbaro", "Paladín", "Caballero", "Mercenario", "Gladiador"};
    vector<string> armas_magicas = {"Bastón", "Libro de Hechizos", "Poción", "Amuleto"};
    vector<string> armas_combate = {"Hacha Simple", "Hacha Doble", "Espada", "Lanza", "Garrote"};

    // Elección del jugador 1
    cout << "Elija su personaje:\n";
    for (size_t i = 0; i < nombres_magos.size(); ++i)
        cout << i + 1 << ". " << nombres_magos[i] << " (Mago)\n";
    for (size_t i = 0; i < nombres_guerreros.size(); ++i)
        cout << i + 1 + nombres_magos.size() << ". " << nombres_guerreros[i] << " (Guerrero)\n";

    int eleccion_personaje;
    cin >> eleccion_personaje;

    Personaje jugador1;
    if (eleccion_personaje <= (int)nombres_magos.size()) {
        jugador1.nombre = nombres_magos[eleccion_personaje - 1];
        cout << "Elija su arma:\n";
        for (size_t i = 0; i < armas_magicas.size(); ++i)
            cout << i + 1 << ". " << armas_magicas[i] << endl;
        int arma;
        cin >> arma;
        jugador1.arma = armas_magicas[arma - 1];
    } else {
        jugador1.nombre = nombres_guerreros[eleccion_personaje - nombres_magos.size() - 1];
        cout << "Elija su arma:\n";
        for (size_t i = 0; i < armas_combate.size(); ++i)
            cout << i + 1 << ". " << armas_combate[i] << endl;
        int arma;
        cin >> arma;
        jugador1.arma = armas_combate[arma - 1];
    }

    // Elección aleatoria para jugador 2
    Personaje jugador2;
    bool es_mago = rand() % 2;
    if (es_mago) {
        jugador2.nombre = nombres_magos[rand() % nombres_magos.size()];
        jugador2.arma = armas_magicas[rand() % armas_magicas.size()];
    } else {
        jugador2.nombre = nombres_guerreros[rand() % nombres_guerreros.size()];
        jugador2.arma = armas_combate[rand() % armas_combate.size()];
    }

    cout << "Tu oponente es " << jugador2.nombre << " con " << jugador2.arma << ". ¡Comienza la batalla!\n\n";

    while (jugador1.vida > 0 && jugador2.vida > 0) {
        mostrar_barra_vida(jugador1.nombre, jugador1.vida);
        mostrar_barra_vida(jugador2.nombre, jugador2.vida);

        Movimiento m1 = elegir_movimiento_jugador();
        Movimiento m2 = elegir_movimiento_aleatorio();

        combate(jugador1, jugador2, m1, m2);
        cout << "---------------------------------------------\n";
    }

    if (jugador1.vida <= 0)
        cout << jugador1.nombre << " ha sido derrotado. ¡Fin del juego!\n";
    else
        cout << jugador2.nombre << " ha sido derrotado. ¡Has ganado!\n";

    return 0;
}