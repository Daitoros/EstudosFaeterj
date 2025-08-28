// Exercício 1: construir um programa em Java que leia a idade de uma pessoa e imprima “Maior
// de idade”, se a idade lida for maior ou igual a 18.

import java.util.Scanner;

public class lerIdade{
    public static void main(String[] args){
        Scanner scaner= new Scanner(System.in);

        System.out.print("Digite a idade:");
        int idade = scaner.nextInt();
        if(idade>=18){
            System.out.print("Maior de idade");
        }
        scaner.close();
    }
}