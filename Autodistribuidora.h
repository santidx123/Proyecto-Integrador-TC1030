#ifndef AUTODISTRIBUIDORA_H_
#define AUTODISTRIBUIDORA_H_

#include <string>
#include <iostream>
#include <sstream>
#include "Automovil.h" 

using namespace std;

const int espacio = 100;

class Autodistribuidora {
    private:
        Automovil * autos[espacio];
        int vehiculos;
    public: 
        Autodistribuidora(): vehiculos(0) {};

        void autos_registrados();
        void muestra_vehiculos();
        void muestra_vehiculos(string tipo);
        void agrega_Carro(string marca, string modelo, string color, string serie, double precio);
        void agrega_Carro();
        void agrega_Camioneta(string marca, string modelo, string color, string serie, double precio_venta);
        void buscar_Automovil(string tipo, string marca, string modelo, string color, string serie);
        void buscar_Automoviles(string tipo, string marca, string modelo);
        void buscar_Automovil_Usuario(string tipo, string marca, string modelo, string color, string serie);
        void buscar_Automoviles_Usuario(string tipo, string marca, string modelo);
};

void Autodistribuidora::autos_registrados() {
    
    autos[vehiculos] = new Carro(vehiculos, "Fiat", "Movil", "rojo", "delujo", 500000);
    vehiculos++;
    autos[vehiculos] = new Carro(vehiculos, "Dodge", "Attitude", "negro", "delujo", 800000);
    vehiculos++;
    autos[vehiculos] = new Carro(vehiculos, "Fiat", "UNO", "gris", "estandar", 400500);
    vehiculos++;
    autos[vehiculos] = new Camioneta(vehiculos, "JEEP", "Wrangler", "blanco", "delujo", 1500000);
    vehiculos++;
    autos[vehiculos] = new Camioneta(vehiculos, "RAM", "1500", "negro", "delujo", 600000);
    vehiculos++;
    autos[vehiculos] = new Camioneta(vehiculos, "Dodge", "Caravan", "azul", "estandar", 500000);
    vehiculos++;
}

void Autodistribuidora::muestra_vehiculos() {
    for (int i = 0; i < vehiculos; i++)
      cout << autos[i] -> imprime_automoviles();
}

void Autodistribuidora::muestra_vehiculos(string tipo) {
    for (int i = 0; i < vehiculos; i++) {
      if (autos[i] -> get_Tipo() == tipo)
        cout << autos[i] -> imprime_automoviles();
    }
}

void Autodistribuidora::agrega_Carro(string marca, string modelo, string color, string serie, double precio) {
    autos[vehiculos] = new Carro(vehiculos, marca, modelo, color, serie, precio);
    vehiculos++;
}

void Autodistribuidora::agrega_Camioneta(string marca, string modelo, string color, string serie, double precio_venta) {
    autos[vehiculos] = new Camioneta(vehiculos, marca, modelo, color, serie, precio_venta);
    vehiculos++;
}

void Autodistribuidora::buscar_Automovil(string tipo, string marca, string modelo, string color, string serie) {
    for (int i = 0; i < vehiculos; i++) {
      if ((autos[i] -> get_Tipo() == tipo) & (autos[i] -> get_Marca() == marca) & (autos[i] -> get_Modelo() == modelo) & (autos[i] -> get_Color() == color) & (autos[i] -> get_Serie() == serie))
        cout << autos[i] -> imprime_automoviles();
    }
}

void Autodistribuidora::buscar_Automoviles(string tipo, string marca, string modelo) {
    for (int i = 0; i < vehiculos; i++) {
      if ((autos[i] -> get_Tipo() == tipo) & (autos[i] -> get_Marca() == marca) & (autos[i] -> get_Modelo() == modelo))
        cout << autos[i] -> imprime_automoviles();
    }
}

void Autodistribuidora::buscar_Automovil_Usuario(string tipo, string marca, string modelo, string color, string serie) {
    for (int i = 0; i < vehiculos; i++) {
      if ((autos[i] -> get_Tipo() == tipo) & (autos[i] -> get_Marca() == marca) & (autos[i] -> get_Modelo() == modelo) & (autos[i] -> get_Color() == color) & (autos[i] -> get_Serie() == serie))
        cout << autos[i] -> imprime_automoviles();
    }
}

#endif // AUTODISTRIBUIDORA_H_