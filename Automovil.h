#ifndef AUTOMOVIL_H_
#define AUTOMOVIL_H_

#include <string>

#include <sstream>

using namespace std;

class Automovil {
    protected:
        int id;
        string marca;
        string modelo;
        string color;
        string serie;
        string tipo;
    public:
        Automovil(): id(0), marca(""), modelo(""), color(""), serie(""), tipo(""){};
        Automovil(int _id, string _marca, string _modelo, string _color, string _serie, string _tipo): 
        id(_id), marca(_marca), modelo(_modelo), color(_color), serie(_serie), tipo(_tipo) {};

        int get_Id() {
            return id;
        }
        string get_Marca(){
            return marca;
        }
        string get_Modelo(){
            return modelo;
        }
        string get_Color(){
            return color;
        }
        string get_Serie(){
            return serie;
        } 
        string get_Tipo(){
            return tipo; 
        }
        virtual string imprime_automoviles() = 0;

};

class Carro : public Automovil {
    private:
        double precio;
    public:
        Carro(): Automovil(0, "", "", "", "", "Carro") {};
        Carro(int id, string marca, string modelo, string color, string serie, double _precio): Automovil(id, marca, modelo, color, serie, "Carro"),
        precio(_precio) {};

        int get_Id() {
            return id;
        }
        string get_Marca(){
            return marca;
        }
        string get_Modelo(){
            return modelo;
        }
        string get_Color(){
            return color;
        }
        string get_Serie(){
            return serie;
        } 
        double get_Precio(){
            return precio;
        }
        string imprime_automoviles();
};

string Carro::imprime_automoviles() {
    stringstream aut;
    aut << "La marca es " << marca << " su tipo es " << tipo << " modelo " << modelo << " color " << color <<
        " su serie es " << serie << " con un precio de " << precio << "\n";
    return aut.str();
}

class Camioneta : public Automovil {
    private:
        double precio_venta;
    public:
        Camioneta(): Automovil(0, "", "", "", "", "Camioneta") {};
        Camioneta(int id, string marca, string modelo, string color, string serie, double _precioventa): Automovil(id, marca, modelo, color, serie, "Camioneta"),
        precio_venta(_precioventa) {};

        double get_PrecioVenta(){
            return precio_venta;
        }
        string imprime_automoviles();
};

string Camioneta::imprime_automoviles() {
    stringstream aut;
    aut << "La marca es " << marca << " su tipo es " << tipo << " modelo " << modelo << " color " << color <<
        " su serie es " << serie << " con un precio de " << precio_venta << "\n";
    return aut.str();
}

#endif // AUTOMOVIL_H_