#include <iostream>
#include <stdio.h>
#include "operacion.cpp"
#include "caja_final.h"
using namespace std;
#include <fstream>

void carrito_verduras(int verduras, int cantidad_producto){
    char decision;
    char answer = 'A';
    switch (verduras){
        case 1:
            float preciofinaltomate;
            preciofinaltomate = cantidad_producto * 0.40;
            cout << "Eligio la cantidad " << cantidad_producto << " de Tomates || Su costo final de esta operacion es: " << preciofinaltomate << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinaltomate);
            break;
        case 2:
            float preciofinallechuga;
            preciofinallechuga = cantidad_producto * 2.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Lechuga || Su costo final de esta operacion es: " << preciofinallechuga << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinallechuga);
            break;
        case 3:
            float preciofinalcol;
            preciofinalcol = cantidad_producto * 2.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Col || Su costo final de esta operacion es: " << preciofinalcol << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalcol);
            break;
        case 4:
            float preciofinalpapa;
            preciofinalpapa = cantidad_producto * 0.30;
            cout << "Eligio la cantidad " << cantidad_producto << " de Papa || Su costo final de esta operacion es: " << preciofinalpapa << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalpapa);
            break;
        case 5:
            float preciofinalcamote;
            preciofinalcamote = cantidad_producto * 0.30;
            cout << "Eligio la cantidad " << cantidad_producto << " de Camote || Su costo final de esta operacion es: " << preciofinalcamote << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalcamote);
            break;
    }
}
