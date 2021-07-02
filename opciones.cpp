#include <iostream>
#include <stdio.h>
#include "carrito_verduras.h"
#include "carrito_carnes.h"
#include "carrito_frutas.h"
#include "carrito_pescados.h"
#include "carrito_dulces.h"
#include "carrito_juguetes.h"
using namespace std;
#include <fstream>

void opciones(int La_opcion_productos){
    int verduras, dulces, pescado, juguete, carne, fruta;
    int cantidad_producto;

    cout << "==ESTE ES NUESTRO STOCK==\n";

    switch(La_opcion_productos){
            case 1:
            cout << "==Bienvenido al pasillo de Verduras!==\n";
            cout << "|||||||||||||\n";
            cout << "1.- Tomate\n2.- Lechuga\n3.- Col\n4.- Papa\n5.- Camote";
            cout << "\n|||||||||||||\n";
            cout << "Que verdura desea?: ";
            cin >> verduras;
            cout <<"Cuantas desea:? ";
            cin >> cantidad_producto;
            carrito_verduras(verduras,cantidad_producto);
            break;
            case 2:
            cout << "Bienvenido al pasillo de Carnes!\n";
            cout << "|||||||||||||\n";
            cout << "1.- Lomo\n2.- Pechuga\n3.- Pierna\n4.- Chorizo\n5.- Entre-pierna";
            cout << "\n|||||||||||||\n";
            cout << "Que carne desea?: ";
            cin >> carne;
            cout <<"Cuantas desea:? ";
            cin >> cantidad_producto;
            carrito_carnes(carne,cantidad_producto);
            break;
            case 3:
            cout << "Bienvenido al pasillo de Frutas!\n";
            cout << "|||||||||||||\n";
            cout << "1.- Pinha\n2.- Manzana\n3.- Platano\n4.- Pera\n5.- Sandia";
            cout << "\n|||||||||||||\n";
            cout << "Que fruta desea?: ";
            cin >> fruta;
            cout <<"Cuantas desea:? ";
            cin >> cantidad_producto;
            carrito_frutas(fruta,cantidad_producto);
            break;
            case 4:
            cout << "Bienvenido al pasillo de Pescados!\n";
            cout << "|||||||||||||\n";
            cout << "1.- Bonito\n2.- Furel\n3.- Camaron\n4.- Anchobeta\n5.- Pez globo";
            cout << "\n|||||||||||||\n";
            cout << "Que pescado desea?: ";
            cin >> pescado;
            cout <<"Cuantas desea:? ";
            cin >> cantidad_producto;
            carrito_pescados(pescado,cantidad_producto);
            break;
            case 5:
            cout << "Bienvenido al pasillo de Dulces!\n";
            cout << "|||||||||||||\n";
            cout << "1.- Galleta Oreo\n2.- Caramelos de Limón\n3.- Coca Cola\n4.- Frunas\n5.- Margaritas";
            cout << "\n|||||||||||||\n";
            cout << "Que dulce desea?: ";
            cin >> dulces;
            cout <<"Cuantos desea:? ";
            cin >> cantidad_producto;
            carrito_dulces(dulces,cantidad_producto);
            break;
            case 6:
            cout << "Bienvenido al pasillo de Juguetes!\n";
            cout << "|||||||||||||\n";
            cout << "1.- Max Steal\n2.- Barby\n3.- Camion de carga\n4.- Pista de carreras\n5.- Ajedrez";
            cout << "\n|||||||||||||\n";
            cout << "Que juguete desea?: ";
            cin >> juguete;
            cout <<"Cuantos desea:? ";
            cin >> cantidad_producto;
            carrito_juguetes(juguete,cantidad_producto);
            break;
    }
}
