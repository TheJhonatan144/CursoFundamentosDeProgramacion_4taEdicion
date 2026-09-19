public class Vehiculo {
    private String placa;
    private String marca;

    public Vehiculo(String placa, String marca) {
        this.placa = placa;
        this.marca = marca;
    }

    public String getPlaca() {
        return placa;
    }

    public String getMarca() {
        return marca;
    }

    // Metodos que despues voy a sobreescribir
    public double calcularTarifa() {
        return 0;
    }

    public String obtenerTipo() {
        return "Vehiculo";
    }
}
