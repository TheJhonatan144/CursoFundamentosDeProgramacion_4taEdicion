/*
Titulo: Sistema de vehiculos de un estacionamiento
Autor: Jhonatan Torres
Fecha: 18 de septiembre del 2026

Enunciado: 
    Un estacionamiento necesita desarrollar un sistema sencillo para registrar diferentes tipos de vehiculos.
    Todos los vehiculos posee:
        placa;
        marca;

    Sin embargo, el estacionamiento recibe dos tipos diferentes:
        - automoviles;
        - motocicletas;

    Cada vehiculo debe poder calcular el valor que debe pagar por utilizar el estacionamiento.
        - automovil $2
        - motocicleta $1

    Ademas, cada tipo de vehiculo debe indicar que tipo de vehiculo representa. 



*/

public class App {
    public static void main(String[] args) throws Exception {
        Vehiculo vehiculo1 = new Auto("ABC-1234", "Toyota");

        Vehiculo vehiculo2 = new Moto("XYZ-5678", "Nissan");

        mostrarVehiculo(vehiculo1);
        mostrarVehiculo(vehiculo2);

    }

    public static void mostrarVehiculo(Vehiculo vehiculo) {
        System.out.println("Tipo: " + vehiculo.obtenerTipo());
        System.out.println("Marca: " + vehiculo.getMarca());
        System.out.println("Placa: " + vehiculo.getPlaca());
        System.out.println("Tarifa: $" + vehiculo.calcularTarifa());
    }
}
