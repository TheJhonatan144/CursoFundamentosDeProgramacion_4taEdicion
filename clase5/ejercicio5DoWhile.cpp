/*
EJERCICIO 5 - Menu Repetitivo con Do While

Autor: Jhonatan Torres
Fecha: 2 de septiembre

Enunciado:
    Elaborar un programa en C++ que muestre un menu repetitivo con las siguientes opciones:
        1. Sumas dos numeros
        2. Mostrar la tabla de multiplicar de un numero
        3. Salir

        El programa debe reptirse hasta que el usuario elija la opcion 3.
            Si el usuario ingresa una opcion invalida, el programa debe mostrar un mensaje de error y volver a mostrar el menu


    E/P/S

    Entrada:


    Proceso:

    Salida:

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables
    int opcion, num1, num2, suma, numero, i;

    // Usamos do while porque queremos que le menu se muestre la menos una vez
    do
    {
        // Mostramos el menu principal
        cout << "==== MENU ====" << endl;
        cout << "1. Sumar dos numeros" << endl;
        cout << "2. Mostrar tabla de multiplicar" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";

        cin >> opcion;

        // Evaluamos la opcion elegida
        if (opcion == 1)
        {
            // Pedimos dos numeros para sumarlos
            cout << "Ingrese el primer numero: ";
            cin >> num1;

            cout << "Ingrese el segundo numero: ";
            cin >> num2;

            // REalizar la suma
            suma = num1 + num2;

            // Mostramos el resultado
            cout << "La suma es:  " << suma << endl;
        }
        else if (opcion == 2)
        {
            // pedimos un numero para mostrar
            cout << "Ingrese un numero: ";
            cin >> numero;

            // Mostramos la tabla del 1 al 10 usando un for
            for (i = 1; i <= 10; i++)
            {
                cout << numero << " x " << i << " = " << numero * i << endl;
            }
        }
        else if (opcion == 3)
        {
            // Mostramos mensaje de salida
            cout << "Saliendo del programa..." << endl;
        }
        else
        {
            // Si la opcion no esta en el rango valido, mostrar un error
            cout << "Error: opcion invalida. Intente nuevamente." << endl;
        }

        // El menu seguira repitiendose mientras la opcion sea diferente de 3
    } while (opcion != 3);

    return 0;
}