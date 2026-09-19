public class Moto extends Vehiculo {
    public Moto(String placa, String marca) {
        super(placa, marca);
    }

    @Override
    public double calcularTarifa() {
        return 1.00;
    }

    @Override
    public String obtenerTipo() {
        return "Motocicleta";
    }

}
