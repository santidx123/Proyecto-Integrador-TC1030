#include <iostream> 
#include "Automovil.h"
#include "Autodistribuidora.h"

using namespace std;

int main(int argc, char * argv[], int op){
    Autodistribuidora autodistribuidora;
    autodistribuidora.autos_registrados();
    do {
        cout << endl << endl;
        cout << "Sistema de la Autodistribuidora:" << endl << endl;
        cout << "Menu del sistema" << endl;
        cout << "1. Mostrar los automoviles en almacen." << endl;
        cout << "2. Mostrar los automoviles tipo Carro en almacen." << endl;
        cout << "3. Mostrar los automoviles tipo Camioneta en almacen." << endl;
        cout << "4. Agregar un Automovil tipo Carro." << endl;
        cout << "5. Agregar un Automovil tipo Camioneta." << endl;
        cout << "6. Buscar un Automovil especifico." << endl;
        cout << "7. Buscar un todos los Automoviles de esa Marca y Modelo existentes." << endl;
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
            autodistribuidora.agrega_Carro("Fiat", "Movil", "azul", "estandar", 300000);
            autodistribuidora.agrega_Carro("Fiat", "Argo", "rojo", "delujo", 300400);
            autodistribuidora.agrega_Carro("Dodge", "Challenger", "verde", "estandar", 900000);
            autodistribuidora.agrega_Carro("Dodge", "Attitude", "negro", "delujo", 400500);
            cout << "Se agrego el Carro exitosamente" << endl;
            break;
            case 5:
            autodistribuidora.agrega_Camioneta("Fiat", "Pulse", "Azul", "delujo", 355000);
            autodistribuidora.agrega_Camioneta("JEEP", "Wrangler", "rojo", "estandar", 1000900);
            autodistribuidora.agrega_Camioneta("JEEP", "Compass", "blanco", "delujo", 700900);
            autodistribuidora.agrega_Camioneta("Dodge", "Journey", "cafe", "estandar", 500900);
            cout << "Se agrego la Camioneta exitosamente" << endl;
            break;
            case 6:
            autodistribuidora.buscar_Automovil("Carro", "Fiat", "Movil", "rojo", "delujo");
            autodistribuidora.buscar_Automovil("Camioneta", "JEEP", "Wrangler", "blanco", "delujo");
            break;
            case 7:
            autodistribuidora.buscar_Automoviles("Carro", "Fiat", "Movil");
            autodistribuidora.buscar_Automoviles("Camioneta", "JEEP", "Wrangler");
            break;
        }

    } while (op != 0);
    cout << "Cerrando el Sistema de la Autodistribuidora" << endl;
    cout << "Gracias por usar el sistema." << endl;

    return 0;
}