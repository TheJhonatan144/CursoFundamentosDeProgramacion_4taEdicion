public class Auto extends Vehiculo {
    public Auto(String placa, String marca) {
        super(placa, marca);
    }

    @Override
    public double calcularTarifa() {
        return 2.00;
    }

    @Override
    public String obtenerTipo() {
        return "Automovil";
    }

}
