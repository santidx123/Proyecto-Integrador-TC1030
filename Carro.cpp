#include <iostream>
#include <string>
#include <sstream>
#include "Carro.h"

using namespace std;

Carro::Carro(){
    modelo = "AMG";
    color = "negro";
    num_puertas = 4;
    precio = 450000;
    serie = "Delujo";
}

Carro::Carro(string mo, string c, int num_p, int pre, string s){
    cout << "Constructor Pasajero" << endl;
    modelo = mo;
    color = c;
    num_puertas = num_p;
    precio = pre;
    serie = s;
}

Carro::~Carro(){

}

string Carro::getModelo() {
    return modelo;
}

string Carro::getColor() {
    return color;
}

int Carro::getNumPuertas() {
    return num_puertas;
}

int Carro::getPrecio() {
    return precio;
}

string Carro::getSerie() {
    return serie;
}

void Carro::setModelo(string mo) {
    modelo = mo;
}

void Carro::setColor(string c) {
    color = c;
}

void Carro::setNumPuertas(int num_p) {
    num_puertas = num_p;
}

void Carro::setPrecio(int pre) {
    precio = pre;
}

void Carro::setSerie(string s) {
    serie = s;
}

void Carro::printCarro() {
    cout << " Modelo: " << modelo << " Color: " << color << " Numero de puertas: " << num_puertas << " Precio: " << precio << " Serie: " << serie << endl;
}