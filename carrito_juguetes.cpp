#include <iostream>
#include <stdio.h>
#include "operacion.h"
#include "caja_final.h"
using namespace std;
#include <fstream>

void carrito_juguetes(int juguete, int cantidad_producto){
    char decision;
    char answer = 'A';
    switch (juguete){
        case 1:
            float preciofinalmax;
            preciofinalmax = cantidad_producto * 70.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Max Steal || Su costo final de esta operacion es: " << preciofinalmax << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalmax);
            break;
        case 2:
            float preciofinalbar;
            preciofinalbar = cantidad_producto * 75.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Barby || Su costo final de esta operacion es: " << preciofinalbar << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalbar);
            break;
        case 3:
            float preciofinalcamion;
            preciofinalcamion = cantidad_producto * 10.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Camion de carga || Su costo final de esta operacion es: " << preciofinalcamion << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalcamion);
            break;
        case 4:
            float preciofinalpista;
            preciofinalpista = cantidad_producto * 120.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pista de carreras || Su costo final de esta operacion es: " << preciofinalpista << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalpista);
            break;
        case 5:
            float preciofinalajedrez;
            preciofinalajedrez = cantidad_producto * 50.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Ajedrez || Su costo final de esta operacion es: " << preciofinalajedrez << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalajedrez);
            break;
    }
}
