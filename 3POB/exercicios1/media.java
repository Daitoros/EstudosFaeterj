package 3POB.exercicios1;

// 4. Cálculo de Média Simples
// Faça um programa que solicite ao usuário três notas (valores decimais) e exiba a média aritmética delas.

import java.util.Scanner;

public class media {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Informe o valor 1: ");
        float num1= sc.nextFloat();
        System.out.print("Informe o valor 2: ");
        float num2= sc.nextFloat();
        System.out.print("Informe o valor 3: ");
        float num3= sc.nextFloat();

        float media=num1+num2+num3;

        media/=3;
        System.out.print(media);
        sc.close()
    }
}
