// Exercício 5: Números primos em um intervalo
// Descrição:
// Escreva um programa que solicite dois números ao usuário e exiba todos os
// números primos no intervalo entre eles, utilizando um loop aninhado (for
// dentro de for).
// Requisitos:
// • O programa deve solicitar dois números inteiros positivos (início e fim
// do intervalo).
// • Deve utilizar um loop externo para percorrer os números dentro do
// intervalo.
// • Deve utilizar um loop interno para verificar se cada número é primo.
// • Exibir apenas os números primos encontrados.

import java.util.Scanner;

public class numPrimos {
    public static void main(String[] args) {
        Scanner  sc = new Scanner(System.in);

        System.out.println("Informe o número de início: ");
        int inicio = sc.nextInt();
        System.out.println("Informe o número de fim: ");
        int fim = sc.nextInt();

        for(int i=inicio;i<=fim;i++){
            for(int j=2;j<i;j++){
                if(i%j==0){
                    System.out.println(i);
                }
            }
        }
        sc.close();
    }
}
