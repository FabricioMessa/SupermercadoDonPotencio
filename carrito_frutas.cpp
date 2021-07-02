#include <iostream>
#include <stdio.h>
#include "operacion.h"
#include "caja_final.h"
using namespace std;
#include <fstream>

void carrito_frutas(int fruta, int cantidad_producto){
    char decision;
    char answer = 'A';
    switch (fruta){
        case 1:
            float preciofinalpina;
            preciofinalpina = cantidad_producto * 1.20;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pinha || Su costo final de esta operacion es: " << preciofinalpina << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalpina);
            break;
        case 2:
            float preciofinalmanzana;
            preciofinalmanzana = cantidad_producto * 0.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Manzana || Su costo final de esta operacion es: " << preciofinalmanzana << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalmanzana);
            break;
        case 3:
            float preciofinalplatano;
            preciofinalplatano = cantidad_producto * 0.40;
            cout << "Eligio la cantidad " << cantidad_producto << " de Platano || Su costo final de esta operacion es: " << preciofinalplatano << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalplatano);
            break;
        case 4:
            float preciofinalpera;
            preciofinalpera = cantidad_producto * 0.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pera || Su costo final de esta operacion es: " << preciofinalpera << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalpera);
            break;
        case 5:
            float preciofinalsandia;
            preciofinalsandia = cantidad_producto * 1.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Sandia || Su costo final de esta operacion es: " << preciofinalsandia << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            operacion(answer,preciofinalsandia);
            break;
    }
}
