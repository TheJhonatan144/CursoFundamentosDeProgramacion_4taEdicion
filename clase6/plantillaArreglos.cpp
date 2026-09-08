/*
PLANTILLA ARREGLOS
Autor: Jhonatan Torres
Fecha: 3 de septiembre del 2026

*/

#include <iostream>
using namespace std;

int main()
{
    int datos[5]; // Arreglo de 5 enteros
    int i;

    // Carga de datos
    for (i = 0; i < 5; i++)
    {
        cin >> datos[i];
    }

    // Impresion de datos
    for (i = 0; i < 5; i++)
    {
        cout << datos[i] << endl;
    }

    return 0;
}