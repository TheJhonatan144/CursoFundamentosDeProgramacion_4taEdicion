#include <iostream>
#include <string>

using namespace std;

int main()
{
    int edad;

    // 1. Simulamos una entrada normal del programa
    cout << "Introduce tu edad: ";
    cin >> edad;

    cout << "Tu edad es " << edad << " anos." << endl;
    cout << "El programa ha terminado de calcular.\n"
         << endl;

    
    // TRUCO PARA QUE NO SE CIERRE LA VENTANA
    
    cout << "Presiona ENTER para salir del programa...";

    cin.ignore(); // Limpia el "Enter" que se quedo guardado al poner la edad
    cin.get();    // Congela la pantalla hasta que el usuario presione Enter

    return 0;
}