package 3POB.exercicios1;

import java.util.Scanner;

public class soma {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite o primeiro número: ");
        int num1 = scanner.nextInt();

        System.out.println("Digite o segundo número: ");
        int num2 = scanner.nextInt();

        int resultado=num1+num2;

        System.out.print(resultado);
    }
}
