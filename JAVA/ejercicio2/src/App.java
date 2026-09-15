/*
Titulo: Creacion de objetos 
Autor: Jhonantan Torres
Enuciado: 
    Crear un objeto de tipo Persona, asignar valores a sus atributos 
    y mostrar su informacion en consola.
*/



public class App { // Clase principal del programa
    public static void main(String[] args) throws Exception {
        // Aqui creamos un objeto de tipo Persona llamado persona1 
        Persona persona1 = new Persona(); 

        // Asignamos un valor al atributo nombre del objeto
        persona1.nombre = "Jhonatan";

        /*
        lo que sea texto o string siempre va entre comillas
        */

        // Asignamos un valor al atributo edad del objeto
        persona1.edad = 22;
        
        //SIEMPRE PARA PODER MOSTRAR UN TEXTO EN CONSOLA
        System.out.println("Nombre: " + persona1.nombre);
        System.out.println("Edad: " + persona1.edad);

    }
}
