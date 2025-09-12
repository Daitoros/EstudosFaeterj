
import java.util.Scanner;

// Exercício 4: Contagem de Números Pares em um Array

// Descrição:
// Crie um programa que solicite ao usuário 8 números inteiros e armazene-os em
// um array. O programa deve contar e exibir a quantidade de números pares no
// array.
// Requisitos:
// • Criar um array de tamanho 8.
// • Utilizar um loop for para percorrer o array e contar quantos números são
// pares.
// • Exibir a quantidade de números pares encontrados.

public class contNumPar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] numeros = new int[8];
        int pares=0;
        for(int i=0;i<8;i++){
            System.out.println("Informe o número" + (i+1)+ ":");
            numeros[i]= sc.nextInt();
            if(numeros[i]%2==0){
                pares++;
            }
        }
        System.out.println(pares + " números pares encontrados!");
        sc.close();
    }
}
