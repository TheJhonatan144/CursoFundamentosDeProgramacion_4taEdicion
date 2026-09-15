/*
Titulo: Ejercicio 1 - Clase, objeto y atributos
Autor: Jhonatan Torres
Enunciado: 
    Crear una clase llamada Estudiante con los atributos nombre, edad y carrera.
    Luego, desde la clase principal, crear dos objetos y mostrar sus datos en consola.

*/


public class App {
    public static void main(String[] args){
        // Aqui creamos el ibjeto de tipo Estudiante
        Estudiante estudiante1 = new Estudiante();

        // Asignamos el valor "jhonatan" al atributo nombre del objeto estudiante1
        estudiante1.nombre = "Jhonatan";

        // Asignamos el valor 20 al atributo edad del objeto estudiante1
        estudiante1.edad = 20;

        // Asignamos el valor de ingenieria de softwar al atributo carrera del objeto estudiante1
        estudiante1.carrera = "Ingenieria de Software";

        Estudiante estudiante2 = new Estudiante();

        estudiante2.nombre = "Luis";

        estudiante2.edad = 38;

        estudiante2.carrera = "Ingenieria Mecanica";


        // Imprimir los datos en consola
        System.out.println("=== ESTUDIANTE 1 ===");
        System.out.println("Nombre: " + estudiante1.nombre);
        System.out.println("Edad: " + estudiante1.edad);
        System.out.println("Carrera: " + estudiante1.carrera);

        System.out.println(); // Imprimos una linea en blanco

        System.out.println("=== ESTUDIANTE 2 ===");
        System.out.println("Nombre: " + estudiante2.nombre);
        System.out.println("Edad: " + estudiante2.edad);
        System.out.println("Carrera: " + estudiante2.carrera);


        




        
        
    }
}
