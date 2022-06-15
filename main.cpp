#include <iostream> 
#include "Automovil.h"
#include "Autodistribuidora.h"

using namespace std;

int main(int argc, char * argv[]){
    int op; string marca; string tipo; string modelo; string color; string serie; double precio; 
    Autodistribuidora autodistribuidora;
    autodistribuidora.autos_registrados();
    // Autos tipo Carro agregados por default (Prueba de la funcion agrega_Carro)
    autodistribuidora.agrega_Carro("Fiat", "Movil", "azul", "estandar", 300000);
    autodistribuidora.agrega_Carro("Fiat", "Argo", "rojo", "delujo", 300400);
    autodistribuidora.agrega_Carro("Dodge", "Challenger", "verde", "estandar", 900000);
    autodistribuidora.agrega_Carro("Dodge", "Attitude", "negro", "delujo", 400500);
    // Autos tipo Camioneta agregados por default (Prueba de la funcion agrega_Camioneta)
    autodistribuidora.agrega_Camioneta("Fiat", "Pulse", "Azul", "delujo", 355000);
    autodistribuidora.agrega_Camioneta("JEEP", "Wrangler", "rojo", "estandar", 1000900);
    autodistribuidora.agrega_Camioneta("JEEP", "Compass", "blanco", "delujo", 700900);
    autodistribuidora.agrega_Camioneta("Dodge", "Journey", "cafe", "estandar", 500900);
    do {
        cout << endl << endl;
        cout << "Sistema de la Autodistribuidora:" << endl << endl;
        cout << "Menu del sistema" << endl;
        cout << "1. Mostrar los automoviles en almacen." << endl;
        cout << "2. Mostrar los automoviles tipo Carro en almacen." << endl;
        cout << "3. Mostrar los automoviles tipo Camioneta en almacen." << endl;
        cout << "4. Agregar un Automovil tipo Carro." << endl;
        cout << "5. Agregar un Automovil tipo Camioneta." << endl;
        cout << "6. Buscar un Automovil especifico (Funcion por default)." << endl;
        cout << "7. Buscar un todos los Automoviles de esa Marca y Modelo existentes (Funcion por default)." << endl;
        cout << "8. Buscar un Automovil especifico (Usuario)." << endl;
        cout << "9. Buscar un todos los Automoviles de esa Marca y Modelo existentes (Usuario)." << endl;
        cout << "0. Salir del sistema" << endl << endl;
        cout << "Opcion: ";
        cin >> op;
        switch (op) {
            case 1:
            autodistribuidora.muestra_vehiculos();
            break;
            case 2:
            autodistribuidora.muestra_vehiculos("Carro");
            break;
            case 3:
            autodistribuidora.muestra_vehiculos("Camioneta");
            break;
            case 4:
            cout << "Introduzca los datos del Carro que desea registrar en almacen. " << endl;
            cout << "Marca del Carro: " << endl;
            cin >> marca;
            cout << "Modelo del Carro: " << endl;
            cin >> modelo;
            cout << "Color del Carro: " << endl;
            cin >> color;
            cout << "Serie del Carro (estandar o delujo): " << endl;
            cin >> serie;
            cout << "Precio de venta del Carro: " << endl; 
            cin >> precio;
            autodistribuidora.agrega_Carro(marca, modelo, color, serie, precio);
            cout << "Se agrego el Carro exitosamente" << endl;
            break;
            case 5:
            cout << "Introduzca los datos de la Camioneta que desea registrar en almacen. " << endl;
            cout << "Marca de la Camioneta: " << endl;
            cin >> marca;
            cout << "Modelo de la Camioneta: " << endl;
            cin >> modelo;
            cout << "Color de la Camioneta: " << endl;
            cin >> color;
            cout << "Serie de la Camioneta (estandar o delujo): " << endl;
            cin >> serie;
            cout << "Precio de venta de la Camioneta: " << endl; 
            cin >> precio;
            autodistribuidora.agrega_Camioneta(marca, modelo, color, serie, precio);
            cout << "Se agrego la Camioneta exitosamente" << endl;
            break;
            case 6:
            autodistribuidora.buscar_Automovil("Carro", "Dodge", "Attitude", "negro", "delujo");
            autodistribuidora.buscar_Automovil("Camioneta", "Dodge","Caravan", "negro", "estandar");
            break;
            case 7:
            autodistribuidora.buscar_Automoviles("Carro", "Fiat", "Movil");
            autodistribuidora.buscar_Automoviles("Camioneta", "JEEP", "Wrangler");
            break;
            case 8:
            cout << "Datos del automovil a buscar en almacen: " << endl;
            cout << "Desea buscar un Carro o una Camioneta? " << endl;
            cin >> tipo;
            cout << "Que marca es el vehiculo? " << endl;
            cin  >> marca;
            cout << "Introduzca modelo del vehiculo: " << endl;
            cin >> modelo;
            cout << "Color del vehiculo: " << endl;
            cin >> color;
            cout << "Es estandar o delujo el vehiculo? " << endl;
            cin >> serie;
            autodistribuidora.buscar_Automovil_Usuario(tipo, marca, modelo, color, serie);
            break;
            case 9:
            cout << "Datos de los automoviles a buscar en almacen: " << endl;
            cout << "Desea buscar un Carro o una Camioneta? " << endl;
            cin >> tipo;
            cout << "Que marca es el vehiculo? " << endl;
            cin  >> marca;
            cout << "Introduzca modelo del vehiculo: " << endl;
            cin >> modelo;
            autodistribuidora.buscar_Automoviles_Usuario(tipo, marca, modelo);
            break;
        }

    } while (op != 0);
    cout << "Cerrando el Sistema de la Autodistribuidora" << endl;
    cout << "Gracias por usar el sistema." << endl << endl;

    return 0;
}