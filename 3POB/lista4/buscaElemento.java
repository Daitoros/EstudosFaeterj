
import java.util.Scanner;

// Exercício 5: Busca de Elemento em um Array
// Descrição:
// Implemente um programa que solicite ao usuário 10 números inteiros e os
// armazene em um array. Em seguida, o usuário deve digitar um número para buscar
// no array. O programa deve informar se o número está presente e em qual posição.
// Requisitos:
// • Criar um array de tamanho 10.
// • Solicitar um número ao usuário e verificar se ele está presente no array.
// • Se o número for encontrado, exibir sua posição. Caso contrário, exibir
// "Número não encontrado.".

public class buscaElemento {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] numeros = new int[10];
        for(int i=0;i<10;i++){
            System.out.println("Informe o número" + (i+1)+ ":");
            numeros[i]= sc.nextInt();
        }
        System.out.println("Informe um número para ser buscado no array: ");
        int buscar = sc.nextInt();

        for(int i=0;i<10;i++){
            if(numeros[i]==buscar){
                System.out.println("Está na posição " + i + "!");
            }else{
                System.out.println("Número não encontrado!");
            }
        }
        sc.close();    
    }
}
