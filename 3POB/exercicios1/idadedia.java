package 3POB.exercicios1;
//     5. Conversão de Idade para Dias
// Desenvolva um programa que leia a idade de uma pessoa em anos e exiba a quantidade aproximada de dias que ela já viveu.

import java.util.Scanner;

public class idadedia {
    Scanner scanner= new Scanner(System.in);

    System.out.print("Informe quantos anos você tem: ");
    int idade= scanner.nextInt();

    idade*=365;
    System.out.print(idade);
    scanner.close();
}
