
import java.util.Scanner;

// Exercício 6: construir um programa em Java que leia o salário bruto e o sexo de um funcionário.
// Se o sexo for “M” (masculino), calcular, armazenar e imprimir um desconto de 5% e o salário
// líquido, caso contrário, calcular, armazenar e imprimir um desconto de 3% e o salário líquido.

public class salario {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Informe o salário:");
        float salario = scanner.nextFloat();
        System.out.println("Informe M pra masculino e F para feminino:");
        char sexo = scanner.next().charAt(0);

        if(sexo=='M'){
            salario-=salario*0.05;
            System.out.println("O salário final é: " + salario);
        } else{
            salario-=salario*0.03;
            System.out.println("O salário final é: " + salario);
        }
        scanner.close();
    }
}
