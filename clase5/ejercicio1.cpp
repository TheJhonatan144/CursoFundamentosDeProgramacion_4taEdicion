/*
EJERCICIO 1 - AREA DE UN RECTANGULO

Autor: Jhonatan Torres
Fecha: 2 de septiembre

Enunciado: Pide una base y una altura (enteros) y calcula el area
*/

#include <iostream>
#include <string> //(opcional y depende del ejericio)
using namespace std;

int main()
{
    int base, altura, area;

    area = 0;

    cout << "Ingrese base: " << endl;
    cin >> base;
    cout << "Ingrese altura: ";
    cin >> altura;

    area = base * altura;
    cout << "Area = " << area << endl;

    return 0;
}