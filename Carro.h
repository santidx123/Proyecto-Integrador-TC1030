/*
Santiago Reynaldo Aguilar Vega
A01709030
*/

#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Carro {
    public:
        Carro();
        Carro(string, string, int, int, string);
        virtual ~Carro();
        void printCarro();
        string getModelo();
        string getColor();
        int getNumPuertas();
        int getPrecio();
        string getSerie();
        void setModelo(string);
        void setColor(string);
        void setNumPuertas(int);
        void setPrecio(int);
        void setSerie(string);
    private:
        string modelo, color, serie;
        int num_puertas, precio;
};

#endif // AUTOMOVIL_H_INCLUDED