#include <iostream>
#include <stdio.h>

using namespace std;

class Cliente
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
}