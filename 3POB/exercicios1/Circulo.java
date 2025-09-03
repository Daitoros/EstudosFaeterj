package 3POB.exercicios1;

//     2. Área de um Círculo

import java.util.Scanner;

// Desenvolva um programa que leia o raio de um círculo e calcule sua área.

public class Circulo {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        System.out.print("Informe raio do círculo: ");
        float raio = sc.nextFloat();

        float area = (raio*raio);
        area*=3.14159;

        System.out.print(area);

    }
}
