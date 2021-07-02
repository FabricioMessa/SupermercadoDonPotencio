#include <iostream>
#include <stdio.h>
#include "caja_final.h"
#include "operacion.h"
using namespace std;
#include <fstream>

void carrito_carnes(int carne, int cantidad_producto){
    char answer = 'A';
    switch (carne){
        case 1:
            float preciofinallomo;
            preciofinallomo = cantidad_producto * 5.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Lomo || Su costo final de esta operacion es: " << preciofinallomo << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinallomo);
            break;
        case 2:
            float preciofinalpechuga;
            preciofinalpechuga = cantidad_producto * 4.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pechuga || Su costo final de esta operacion es: " << preciofinalpechuga << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalpechuga);
            break;
        case 3:
            float preciofinalpierna;
            preciofinalpierna = cantidad_producto * 3.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pierna || Su costo final de esta operacion es: " << preciofinalpierna << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalpierna);
            break;
        case 4:
            float preciofinalchorizo;
            preciofinalchorizo = cantidad_producto * 2.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Chorizo || Su costo final de esta operacion es: " << preciofinalchorizo << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer, preciofinalchorizo);
            break;
        case 5:
            float preciofinalentre;
            preciofinalentre = cantidad_producto * 1.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Entre-Pierna || Su costo final de esta operacion es: " << preciofinalentre << ".\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer, preciofinalentre);
            break;
    }
}
