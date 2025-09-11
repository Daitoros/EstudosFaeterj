import java.util.Scanner;

// Exercício 1: Maior e Menor Valor em um Array
// Descrição:
// Crie um programa que solicite ao usuário 5 números inteiros e armazene-os em
// um array. Após isso, o programa deve exibir o maior e o menor número do array.
// Requisitos:
// • Criar um array de tamanho 5.
// • Utilizar um loop for para percorrer o array e encontrar o maior e o menor
// valor.
// • Exibir o maior e o menor número armazenados no array.

public class maiorMenorArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] numeros = new int[5];
        int menor= numeros[0];
        int maior= numeros[0];
        for(int i=0;i<5;i++){
            System.out.println("Informe o número" + (i+1)+ ":");
            numeros[i]= sc.nextInt();
            if(i>0 && numeros[i]<menor){
                menor=numeros[i];
            } else if(i>0 && numeros[i]>maior){
                maior=numeros[i];
            }
        }
        System.out.println("O maior valor é: " + maior + "E o menor valor é: " + menor);
        sc.close();
    }    
}
