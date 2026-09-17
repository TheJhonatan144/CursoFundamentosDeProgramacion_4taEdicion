/*
Descripcion:
Clase hija que representa a una Larva
*/

public class Larva  extends Hormiga{
    public Larva(int id){
        // llamamos al constructor de la clase padre
        super(id, "Larva");
    }

    @Override
    public void mostrarAccion(){
        System.out.println("La larva esta creciendo dentro del hormiguero");
    }
}
