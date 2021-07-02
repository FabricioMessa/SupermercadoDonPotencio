#include <iostream>
#include <stdio.h>
#include "productos.h"
#include "caja_final.h"
using namespace std;
#include <fstream>

void operacion(char answer, float precio){
    char decision;
    cout << "\nDesea hacer otra operacion?(S/N): ";
    cin >> decision;
    if (decision == 'S')
    {
        productos(answer);
    }
    else if(decision == 'N')
    {
        cout<<"Pasa a caja final";
        caja_final(precio);
    }
}

