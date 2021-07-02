#include <iostream>
#include <stdio.h>
#include "operacion.h"
#include "caja_final.h"
using namespace std;
#include <fstream>

void carrito_dulces(int dulces, int cantidad_producto){
    char decision;
    char answer = 'A';
    switch (dulces){
        case 1:
            float preciofinaloreo;
            preciofinaloreo = cantidad_producto * 1.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Galleta Oreo || Su costo final de esta operacion es: " << preciofinaloreo << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinaloreo);
            break;
        case 2:
            float preciofinalcaramelo;
            preciofinalcaramelo = cantidad_producto * 0.10;
            cout << "Eligio la cantidad " << cantidad_producto << " de Caramelos de Limon || Su costo final de esta operacion es: " << preciofinalcaramelo << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalcaramelo);
            break;
        case 3:
            float preciofinalcoca;
            preciofinalcoca = cantidad_producto * 2.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Coca Cola || Su costo final de esta operacion es: " << preciofinalcoca << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalcoca);
            break;
        case 4:
            float preciofinalfrunas;
            preciofinalfrunas = cantidad_producto * 0.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Frunas || Su costo final de esta operacion es: " << preciofinalfrunas << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalfrunas);
            break;
        case 5:
            float preciofinalmarga;
            preciofinalmarga = cantidad_producto * 1.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Margaritas || Su costo final de esta operacion es: " << preciofinalmarga << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalmarga);
            break;
    }
}
