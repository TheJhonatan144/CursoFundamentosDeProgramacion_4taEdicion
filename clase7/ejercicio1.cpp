/*
EJERCICIO 1 - CALCULAR SUMA Y PROMEDIO DE 4 NUMEROS USANDO FUNCIONES

Autor: Jhonatan Torres
Fecha: 07 septiembre 2026

Enunciado:
    Desarrollar un programa en C++ que me permita ingresar 4 numero enteros.
    El programa debe usasr funciones para:
        - leer los 4 numeros
        - calcular la suma
        - calcular el promedio
        - mostrar los resultados
    El objetivo es comprender como dividir un problema en varias funciones con tareas claras.

    E/P/S

    Entrada:
        4 numeros enteros
    Proceso:
        Leer 4 numeros
        Calcular la suma
        Calcular el promedio
        Mostrar los resultados en pantalla
    Salida:
        La suma de los 4 numeros
        El promedio de los 4 numeros

*/

#include <iostream>
using namespace std;

int main()
{
    // Variables donde se guardaran los numeros
    int n1, n2, n3, n4;

    // Variables para resultados
    int suma;
    double promedio;

    // LLAMAMOS A LA FUNCION QUE LEE LOS 4 NUMEROS
    leerCuatroNumeros(n1, n2, n3, n4);

    // Llamamos a la funcion que calcula la suma
    suma = calcularSuma(n1, n2, n3, n4);
}

// Esta funcion lee 4 numeros y los guarda en las variables originales
void leerCuatroNumeros(int &a, &b, &c, &d)
{
    cout << "ingrese 4 numeros enteros: ";
    cin >> a >> b >> c >> d;
}

// Esta funcion recibe 4 numero y devuelve la suma
int calcularSuma(int a, int b, int c, int d)
{
    return a + b + c + d;
}
