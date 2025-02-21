package Actividades_poo;
import java.util.Scanner;

public class Biblioteca {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Mostrar[] registros = new Mostrar[100];
        int contador = 0;

        while (true) {
            System.out.println("Bienvenido a la biblioteca");
            System.out.println("1. Registrar datos"); 
            System.out.println("2. Consultar los libros prestados a un estudiante");
            System.out.println("3. Marcar un libro como devuelto");
            System.out.println("4. Consultar el historial de prestamos");
            System.out.println("5. Salir");
            System.out.println("Selecciona una opción: ");
            int opcion = sc.nextInt();
            sc.nextLine(); 

            switch (opcion) {
                case 1:
                    if (contador < registros.length) {
                        System.out.println("Ingresa el Nombre: ");
                        String Nombre = sc.nextLine();

                        System.out.println("Ingresa el nombres del los 3 libros : ");
                        String NombreLibro = sc.nextLine();
                        String NombreLibro1 = sc.nextLine();
                        String NombreLibro2 = sc.nextLine();
                        System.out.println("Los libros se han registrado correctamente.");

                        registros[contador] = new Mostrar(Nombre, NombreLibro, NombreLibro1, NombreLibro2);
                        contador++;
                    } else {
                        System.out.println("No se pueden registrar más estudiantes.");
                    }
                    break;

                case 2:
                    System.out.println("Ingresa el Nombre del estudiante: ");
                    String nombreConsulta = sc.nextLine();
                    boolean encontrado = false;
                    for (int i = 0; i < contador; i++) {
                        if (registros[i].Nombre.equals(nombreConsulta)) {
                            registros[i].mostrarDatos();
                            encontrado = true;
                            break;
                        }
                    }
                    if (!encontrado) {
                        System.out.println("No se ha encontrado ningún estudiante con ese nombre.");
                    }
                    break;

                case 3:
                    System.out.println("Ingresa el Nombre del estudiante: ");
                    String nombreDevolucion = sc.nextLine();
                    encontrado = false;
                    for (int i = 0; i < contador; i++) {
                        if (registros[i].Nombre.equals(nombreDevolucion)) {
                            System.out.println("Ingresa el nombre del libro a devolver: ");
                            String nombreLibro = sc.nextLine();
                            if (nombreLibro.equals(registros[i].NombreLibro) || 
                                nombreLibro.equals(registros[i].NombreLibro1) || 
                                nombreLibro.equals(registros[i].NombreLibro2)) {
                                registros[i].devolverLibro(nombreLibro);
                                encontrado = true;
                                break;
                            } else {
                                System.out.println("El libro " + nombreLibro + " no se ha encontrado en los registros del estudiante.");
                            }
                        }
                    }   
                    if (!encontrado) {
                        System.out.println("No se ha encontrado ningún estudiante con ese nombre.");
                    }
                    break;
                case 4:
                    System.out.println("Ingresa el Nombre del estudiante: ");
                    String nombreHistorico = sc.nextLine();
                    encontrado = false;
                    for (int i = 0; i < contador; i++) {
                        if (registros[i].Nombre.equals(nombreHistorico)) {
                            registros[i].mostrarDatos();
                            encontrado = true;
                            break;
                        }
                    }
                    if (!encontrado) {
                        System.out.println("No se ha encontrado ningún estudiante con ese nombre.");
                    }
                     break;

                case 5:
                    System.out.println("Gracias por usar la biblioteca");
                    sc.close();
                    return;

                default:
                    System.out.println("Opción no válida");
                    break;
            }
        }
    }
}