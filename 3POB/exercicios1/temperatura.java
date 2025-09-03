package 3POB.exercicios1;

    // Crie um programa que leia uma temperatura em graus Celsius e a converta para Fahrenheit.

import java.util.Scanner;

public class temperatura {
    Scanner scanner= new Scanner(System.in);

    System.out.print("Digite a temperatura em Celsius: ");
    float Celsius= scanner.nextFloat();

    Celsius*=9;
    Celsius/=5;
    Celsius+=32;

    System.out.print(Celsius);

    scanner.close();
}
