package 3POB.exercicios1;

import java.util.Scanner;

// 7. Cálculo do Perímetro e Área de um Retângulo
// Faça um programa que solicite a base e a altura de um retângulo e exiba o seu perímetro e sua área.

public class PAtriangulo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Informe a base do triângulo: ");
        float base= sc.nextFloat();
        System.out.print("Informe a altura do triângulo: ");
        float altura= sc.nextFloat();
        float area=base*altura;
        float perimetro;
        perimetro=base+altura;
        perimetro*=2;
        System.out.println("O perímetro é: " + perimetro);
        System.out.println("A área é: " + area);
        sc.close()
    }
}
