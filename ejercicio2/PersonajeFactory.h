#ifndef PERSONAJEFACTORY_H
#define PERSONAJEFACTORY_H
#pragma once
#include <memory>
#include <vector>
#include "../ejercicio1/ArmasBase.h" 
#include "../ejercicio1/combate.h"   
#include "../ejercicio1/magicos.h"    
#include "../ejercicio1/personajes.h"    
#include "../ejercicio1/guerreros.h"   
#include "../ejercicio1/magos.h"   

using namespace std;

class PersonajeFactory {
public:
    static shared_ptr<Mago> crearMagoRandom();
    static shared_ptr<Guerrero> crearGuerreroRandom();
    
    static shared_ptr<ItemMagico> crearArmaMagicaRandom();
    static shared_ptr<ArmaCombate> crearArmaCombateRandom();
};

#endif