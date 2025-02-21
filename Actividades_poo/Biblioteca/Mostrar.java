package Actividades_poo;

public class Mostrar {
    String Nombre;
    String NombreLibro;
    String NombreLibro1;
    String NombreLibro2;
    boolean Devolvio;
    boolean Devolvio1;
    boolean Devolvio2;

    public Mostrar(String Nombre, String NombreLibro, String NombreLibro1, String NombreLibro2) { 
        this.Nombre =Nombre;
        this.NombreLibro = NombreLibro;
        this.NombreLibro1 = NombreLibro1;
        this.NombreLibro2 = NombreLibro2;
        this.Devolvio = false;
        this.Devolvio1 = false;
        this.Devolvio2 = false;
    }

    public void devolverLibro(String nombreLibro) {
        if (nombreLibro.equals(NombreLibro)) {
            this.Devolvio = true;
        } else if (nombreLibro.equals(NombreLibro1)) {
            this.Devolvio1 = true;
        } else if (nombreLibro.equals(NombreLibro2)) {
            this.Devolvio2 = true;
        } else {
            System.out.println("El libro " + nombreLibro + " no se ha encontrado.");
            return;
        }
        System.out.println("El estudiante ha devuelto el libro: " + nombreLibro);
    }
    
    public void mostrarDatos() {
        System.out.println("Nombre del estudiante: " + Nombre);
        System.out.println("Nombre del libros: " + NombreLibro + ", " + NombreLibro1 + ", " + NombreLibro2);
        System.out.println("El estudiante ha devuelto el libro: " + NombreLibro + " " + Devolvio); 
        System.out.println("El estudiante ha devuelto el libro: " + NombreLibro1 + " " + Devolvio1);
        System.out.println("El estudiante ha devuelto el libro: " + NombreLibro2 + " " + Devolvio2);
    }
}

    

