#include <iostream>
#include <fstream>
#include "ClaseCliente.cpp"
#include "productos.cpp"
#include "opciones.cpp"
#include "carrito_verduras.cpp"
#include "carrito_carnes.cpp"
#include "carrito_frutas.cpp"
#include "carrito_pescados.cpp"
#include "carrito_dulces.cpp"
#include "carrito_juguetes.cpp"
#include "caja_final.cpp"

using namespace std;
//=====================================================================================================================================================================
/*class Cliente
{
private:
    string name;
    string surname;
public:
    Cliente(string, string);
    void comprarplus();
};

Cliente::Cliente(string _name, string _surname)
{
    name = _name;
    surname = _surname;
}

void Cliente::comprarplus()
{
    std::cout << "Cliente: " << name << " " << surname << ". \n";
}*/
//=======================================================================================================================================================================
void welcome();
//void opciones(int);
//void productos(char);
//void cajafinal(int);
//void carrito_verduras(int, int);
//void carrito_carnes(int, int);
//void carrito_frutas(int, int);
//void carrito_pescados(int, int);
//void carrito_dulces(int, int);
//void carrito_juguetes(int, int);
//========================================================================================================================================================================
int main(){

    for (int i = 0; i < 50; i++)
    {
        welcome();
        system("cls");
    }

    string nombre;
    string apellido;

    char primera_Respuesta;

    cout << "Escriba su nombre: ";
    cin >> nombre;
    cout << "Escriba su apellido: ";
    cin >> apellido;

    Cliente c1 = Cliente(nombre, apellido);
    c1.comprarplus();
    cout << "\n";

    do
    {
        cout << "Buenas, viene a comprar algo? (A.Si / B.No): ";
        cin >> primera_Respuesta;
    } while ((primera_Respuesta != 'A') && (primera_Respuesta != 'B'));

    if (primera_Respuesta == 'A')
    {
        productos(primera_Respuesta);
    }

    if (primera_Respuesta == 'B')
    {
        cout << "Gracias, que tenga un buen dia.\n";
    }

    system("pause");
    return 0;
}

//==================================================================================================================================================================================
void welcome(){

    cout << "\t===============================================================================================================\n";
    cout << "\t===============================================================================================================\n";
    cout << "\t||    _ __   __ __   __ __    __ __ __    __          __ __ __    __ __ __    __ __  __ _  __    __ __ __    ||\n";
    cout << "\t||   |    | |     | |     |  |        |  |  |        |        |  |        |  |     |/    |/  |  |        |   ||\n";
    cout << "\t||   |/|  | |/|   | |/|   |  |  |-----   |  |        |  |--|__|  |  |--|  |  |    _     _    |  |  |-----    ||\n";
    cout << "\t||     |  |   |   |   |   |  |  |__ __   |  |        |  |        |  |  |  |  |   / |   / |   |  |  |__ __    ||\n";
    cout << "\t||    /  /   /   /   /   /   |        |  |  |        |  |        |  |  |  |  |   | |   | |   |  |        |   ||\n";
    cout << "\t||   /  /   /   /   /   /    |  |-----   |  |        |  |        |  |  |  |  |   | |   | |   |  |  |-----    ||\n";
    cout << "\t||  |   |__/    |__/   /     |  |__ __   |  |__ __   |  |__|--|  |  |  |  |  |   | |   | |   |  |  |__ __    ||\n";
    cout << "\t||  |                  |     |        |  |        |  |        |  |   --   |  |   | |   | |   |  |        |   ||\n";
    cout << "\t||   ------------------       --------    --------    ........    --------    ---   ---   ---    --------    ||\n";
    cout << "\t===============================================================================================================\n";
    cout << "\t===============================================================================================================\n";
    cout << "\n";
}

