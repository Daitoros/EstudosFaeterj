
import java.util.Scanner;

// Exercício 3: construir um programa em Java que leia 2 números inteiros e imprima o maior
// número lido.

public class maiorMenor {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o primeiro número:");
        int num1= scanner.nextInt();
        System.out.print("Digite o segundo número:");
        int num2= scanner.nextInt();
        if(num1>num2){
            System.out.print(num1);
        } else{
            System.out.print(num2);
        }
        scanner.close();
    }
}
