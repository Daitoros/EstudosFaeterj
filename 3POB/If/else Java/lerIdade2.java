// Exercício 2: construir um programa em Java que leia a idade de uma pessoa e imprima “Maior
// de idade”, se a idade lida for maior ou igual a 18 e imprima “Menor de idade”, caso contrário.

import java.util.Scanner;

public class lerIdade2{
    public static void main(String[] args){
        Scanner scaner= new Scanner(System.in);

        System.out.print("Digite a idade:");
        int idade = scaner.nextInt();
        if(idade>=18){
            System.out.print("Maior de idade");
        }
        else{
            System.out.print("Menor de idade");
        }
        scaner.close();
    }
}