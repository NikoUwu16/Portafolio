package Actividades_poo;
import java.util.Scanner;

public class Actividad_2 {
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Numero1;
        int SumaDivisores = 0;

        System.out.println("Ingrese un número positivo: ");
        Numero1 = sc.nextInt();

        for ( int i = 1; i < Numero1; i++){
            if (Numero1 % i == 0){
                SumaDivisores += i;
            }
        }

        if (SumaDivisores == Numero1){
            System.out.println("El número " + Numero1 +" es perfecto.");
        } else {
            System.out.println("El número "+ Numero1 +" no es perfecto.");
        }        
     }
    
}
