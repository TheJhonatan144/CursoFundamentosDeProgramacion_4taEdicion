/*
EJERCICIO 2 - CARGAR Y MOSTRAR 5 NOTAS
Autor: Jhonatan Torres
Fecha: 3 de septiembre del 2026

Enunciado:
    Realizar un programa en C++ que permita ingresar 5 notas enteras en un arreglo.
    Luego, el programa debe mostrar todas las notas ingresadas, una por una, indicando
    tambien la posicion en la qu fueron guardadas.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos un arreglo de 5 enteros para guardar las notas
    int notas[5];

    // Variable que usaremos para recorrer el arreglo
    int i;

    // CARGA DE DATOS

    // Recorremos las 5 posiciones del arreglo
    for (i = 0; i < 5; i++)
    {
        // Pedimos al usuario una nota
        cout << "Ingrese la nota " << i + 1 << ": ";
        // Guardamos la nota en la posicion i del arreglo
        }

    cout << endl; // SIGNIFICA QUE SOLO DOY UN SALTO DE LINEA

    cout << "Notas registradas: " << endl;

    // IMPRESION DE DATOS

    // Volvemos a recorrer el arreglo para mostrar lo que guardamos
    for (i = 0; i < 5; i++)
    {
        // Mostramos la posicion y el valor guardado en esa posicion
        cout << "Posicion " << i << ": " << notas[i] << endl;
    }

    return 0;
}