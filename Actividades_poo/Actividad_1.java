package Actividades_poo;
import java.util.Scanner;

public class Actividad_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Numero1;
        int Cifras = 1;
        
        System.out.println("Ingrese un número positivo: ");
        Numero1 = sc.nextInt();

        if (Numero1 <= 0){
            System.out.println("El número ingresado no es positivo.");
        }else{
            while (Numero1 != 0) {
                Numero1 = Numero1 / 10;
                Cifras++;
            }    
        }
        System.out.println("El número ingresado tiene " + Cifras + " cifras.");

        sc.close();
    }
}
