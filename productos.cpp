#include <iostream>
#include "opciones.h"
#include <stdio.h>
using namespace std;
#include <fstream>

void productos(char La_Primera_Respuesta){
    int opcion_productos;
    if(La_Primera_Respuesta == 'A')
    {
        cout << "==TENEMOS LOS SIGUIENTES PRODUCTOS DISPONIBLES==\n";
        cout << "==PARA SELECCIONAR CUALQUIER PRODUCTO COLOQUE EL NUMERO DE DICHO PRODUCTO==";
        cout << "\n|||||||||||||\n";
        cout << "1. Verduras\n2. Carnes\n3. Frutas\n4. Pescado\n5. Dulces\n6. Juguetes";
        cout << "\n|||||||||||||\n";
        cout << "Que producto desea?: ";
        cin >> opcion_productos;
        opciones(opcion_productos);
    }
}
