
import java.util.Scanner;

// Exercício 7: construir um programa em Java que leia um número inteiro e imprima “Positivo”,
// se o número lido for maior que 0, imprima “Negativo”, se o número lido for menor que 0 e
// imprima “Nulo”, se o número lido for igual a 0.

public class Zero {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite o número: ");
        int num1= scanner.nextInt();

        if(num1>0){
            System.out.println("Positivo");
        }else{
            if(num1==0){
                System.out.println("Nulo");
            }else{
                System.out.println("Negativo");
            }
        }
        scanner.close();
    }
}
