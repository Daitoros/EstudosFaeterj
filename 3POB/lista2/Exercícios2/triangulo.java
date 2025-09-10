
import java.util.Scanner;

// Exercício 11: construir um programa em Java que leia os valores de A, B e C e que imprima
// “Não forma triângulo”, se um dos valores for maior que a soma dos outros 2, caso contrário,
// imprimir “Forma triângulo”.


public class triangulo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe o valor de A: ");
        float A = scanner.nextFloat();

        System.out.print("Informe o valor de B: ");
        float B = scanner.nextFloat();

        System.out.print("Informe o valor de C: ");
        float C = scanner.nextFloat();
        
        if(A>B+C){
            System.out.println("Não forma triângulo!");
        }else if (B>A+C){
            System.out.println("Não forma triângulo!");
        }else if (C>A+B){
            System.out.println("Não forma triângulo!");
        }else{
            System.out.println("Forma triângulo!");
        }
        
    }
}
