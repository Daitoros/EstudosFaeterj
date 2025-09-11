import javax.print.DocFlavor.STRING;
import java.util.Scanner;
package 3POB.lista3;

// Exercício 2: Tabuada de um número
// Descrição:
// Escreva um programa que solicite um número ao usuário e exiba a tabuada
// desse número de 1 a 10, utilizando um loop while.
// Requisitos:
// • O programa deve pedir um número inteiro ao usuário.
// • Utilizar um contador para iterar de 1 a 10.
// • Exibir a multiplicação do número pelo contador em cada iteração.

public class tabuada {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Informe um valor inteiro para exibição da tabuada: ");
        int num= sc.nextInt();
        int i=0, resultado;
        while(i<=10){
            resultado=num*i;
            System.out.println(num + " x " + i + " = " + resultado);
            i++;
        }
        sc.close();
    }
}
