/*
Titulo: Mini sistema de hormiguero
Autor: Jhonatan Torres
Fecha: 16 de septiembre del 2026

Enunciado:
    Desarrollar un programa en Java que simule un mini sitema de hormiguero en consola.
    El sistema debe permitir:
        - crear hormigas
        - manejar dos tipos de hormigas: Larva y Soldado
        - almacenar las hormigas en una lista
        - mostrar todas las hormigas registradas
        - alimentar una hormiga por su id
        - mostrar un comportamiento distinto segun el tipo de hormiga
        - validar que el id exista
        - usar try/catch para evitar errores de entrada.
*/

import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        Hormiguero hormiguero = new Hormiguero();

        int opcion = 0;
        do {
            try {
                System.out.println("==== MENU HORMIGUERO ====");
                System.out.println("1. Agregar larva");
                System.out.println("2. Agregar soldado");
                System.out.println("3. Mostrar hormigas");
                System.out.println("4. Alimentar hormiga");
                System.out.println("5. Eliminar hormiga");
                System.out.println("6. Salir");
                System.out.println("Ingrese una opcion");

                opcion = sc.nextInt();

                switch (opcion) {
                    case 1:
                        System.out.println("Ingres ID para la larva: ");
                        int idLarva = sc.nextInt();
                        hormiguero.agregarLarva(idLarva);
                        break;

                    case 2:
                        System.out.print("Ingrese ID para el soldado: ");
                        int idSoldado = sc.nextInt();
                        hormiguero.agregarSoldado(idSoldado);
                        break;

                    case 3:
                        hormiguero.mostrarHormigas();
                        break;

                    case 4:
                        System.out.print("Ingrese el ID de la hormiga a alimentar: ");
                        int idAlimentar = sc.nextInt();
                        hormiguero.alimentarHormiga(idAlimentar);
                        break;

                    case 5:
                        System.out.print("Ingrese el ID de la hormiga a eliminar");
                        int idEliminar = sc.nextInt();
                        hormiguero.eliminarHormiga(idEliminar);
                        break;

                    case 6:
                        System.out.print("Saliendo del programa...");
                        break;

                    default:
                        System.out.println("Opcion invalida. Intente nuevamente.");
                }

            } catch (Exception e) {
                System.out.println("Error: ingreso invalido. Debe escribir un numero.");
                sc.nextLine(); // Limpiar el buffer para evitar bucle infinito
            }

        } while (opcion != 6);

        sc.close();

    }
}
