// package 3POB.exercicios1;

import java.util.Scanner;

// 9. Conversão de Moeda
// Faça um programa que leia um valor em reais (R$) e a cotação do dólar no dia. O programa deve calcular e exibir o valor equivalente em dólares (US$).

public class convertMoeda {
    public static void main(String[] args) {
        Scanner scanner= new Scanner(System.in);

        System.out.print("Informe o valor em reais: ");
        float real= scanner.nextFloat();
        System.out.print("Informe a cotação do dólar: ");
        float dolar= scanner.nextFloat();

        real*=dolar;
        System.out.print(real);
        scanner.close();
    }    
}
