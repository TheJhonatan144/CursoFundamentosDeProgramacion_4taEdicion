/*
EJERCICIO 4 - ACUMULADOR CON FOR

Autor: Jhonatan Torres
Fecha: 2 de septiembre

Enunciado:
    Elaborar un programa en C++ que solicite al usuario 5 numeros enteros y calcule la suma total de esos
    numeros usando un bucle for
    Al final el program debe mostrar el resutlado acumulado

    E/P/S

    Entrada:
        - Cinco numeros enteros ingresado por el usuario

    Proceso:
        - Inicializar una variable suma en 0
        - Repetir 5 veces:
            pedir numero
            leer numero
            sumar ese al acumulador
        - mostrar la suma total
    Salida:
        - La suma total de los 5 numeros ingresados
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int i, numero, suma;

    // Inicializamos el acumulador en 0
    suma = 0;

    // Usamos un for porque ya sabemos que se repetira 5 veces
    for (i = 1; i <= 5; i++)
    {
        // Pedimos cada numero al usuario
        cout << "Ingrese el numero  " << i << ": ";
        cin >> numero;

        // Acumulamos el numero ingresado en la suma total
        suma = suma + numero;
    }

    // Mostramos la suma final
    cout << "La suma total es: " << suma << endl;

    return 0;
}