// Exercício 4: construir um programa em Java que leia um número inteiro e imprima “PAR”, se o
// número for par e imprima “ÍMPAR”, se o número for ímpar.

import java.util.Scanner;

public class ImPar {
    public static void main(String[] args) {
        Scanner scanner= new Scanner(System.in);
        
        System.out.print("Digite o número:");
        int num1= scanner.nextInt();

        if(num1%2==0){
            System.out.print("Par!");
        } else{
            System.out.print("Impar!");
        }
        scanner.close();
    }
}
