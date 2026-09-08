/*
EJERCICIO 3 - BUSCAR UN NUMERO EN EL ARREGLO
Autor: Jhonatan Torres
Fecha: 3 de septiembre del 2026

Enunciado:
    Realizar un programa en C++ que permita ingresar 6 numeros enteros en un arreglo.
    Luego pedir al usuario un numero adicional para buscar dentro del arreglo.

    el programa debe indicar:
        - si el nunermo fue encontrado
        - y en que posicion se encuentra

    Si el numero no existe en el arreglo, debe mostrar un mensaje indicando que no fue
    encontrado.
    En esta clase se trabajara con la primera coindicendia encontrada.
*/

#include <iostream>
using namespace std;

int main()
{
    // Arreglo donde vamos a guardar 6 numeros enteros
    int numeros[6];

    // Variable para recorrer el arreglo
    int i;

    // Variable donde guardaremos el numero que el usuario quiere buscar
    int buscado;

    // Variable para guardar la posicion donde se encontro el numero
    int posicion = -1;

    // Variable bandera: nos ayuda a saber si encontramos o no el numero
    bool encontrado = false;

    // CARGA DE DATOS

    for (i = 0; i < 6; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << endl;

    // Pedimos el numero que se desea buscar
    cout << "Ingrse el numero que desea buscar: ";
    cin >> buscado;

    // BUSQUEDA SECUENCIAL

    // Recorremos el arreglo posicion por posicion
    for (i = 0; i < 6; i++)
    {
        // Comparamos si el valor guardado en la posicion i es
        // igual al numero que queremos buscar.
        if (numeros[i] == buscado && encontrado == false)
        {
            // Si coincide, marcamos que si fue encontrado
            encontrado = true;

            // Guardamos la posicion donde lo encontramos
            posicion = i;
        }
    }

    cout << endl;

    // RESULTADO FINAL
    if (encontrado == true)
    {
        cout << "Numero encontrado en la posicion: " << posicion << endl;
    }
    else
    {
        cout << "Numero no encontrado en el arreglo." << endl;
    }

    return 0;
}
