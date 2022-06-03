#include <iostream> 
#include "Automovil.h"
#include "Autodistribuidora.h"

using namespace std;

int main(int argc, char * argv[]){
    Autodistribuidora autodistribuidora;
    autodistribuidora.crear_ejemplos();
    autodistribuidora.muestra_vehiculos();
    autodistribuidora.muestra_vehiculos("Carro");
    autodistribuidora.muestra_vehiculos("Camioneta");
    autodistribuidora.agrega_Carro("Fiat", "Movil", "azul", "estandar", 300000);
    autodistribuidora.agrega_Camioneta("JEEP", "1500", "rojo", "delujo", 900000);
    autodistribuidora.muestra_vehiculos("Carro");
    autodistribuidora.muestra_vehiculos("Camioneta");
}