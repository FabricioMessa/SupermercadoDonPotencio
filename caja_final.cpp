#include <iostream>
#include <stdio.h>
#include "ClaseCliente.h"
using namespace std;
#include <fstream>

void caja_final(float precio){
    cout << "\n";
    ofstream boleta;
    string name;
    string surname;

    boleta.open("Boleta.txt");

    cout << "Confirme de nuevo su identidad para finalizar la compra: \n";
    cout << "Nombre: ";
    cin >> name;
    cout << "Apellido: ";
    cin >> surname;

    boleta << "\tSUPERMERCADO ||TIENDITA DE DON POTENCIO||\n";
    boleta << "Cliente: " << name << " " << surname << ".\n";
    boleta << "El precio final a pagar es de " << precio << "s/.\n";
    boleta << "\tQue tenga un bien día, vuelva pronto!!\n";
}
