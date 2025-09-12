
// Exercício 2: Cálculo da Média de Notas
// Descrição:
// Desenvolva um programa que peça ao usuário para inserir 4 notas e armazene-as
// em um array. Depois, o programa deve calcular e exibir a média das notas.
// Requisitos:
// • Criar um array de tamanho 4 para armazenar as notas.
// • Utilizar um loop for para somar todas as notas e calcular a média.
// • Se a média for maior ou igual a 7, exibir "Aprovado", senão, exibir
// "Reprovado".

import java.util.Scanner;

public class mediaNotas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] notas = new int[4];
        int media= 0;
        for(int i=0;i<4;i++){
            System.out.println("Informe o número" + (i+1)+ ":");
            notas[i]= sc.nextInt();
            media+=notas[i];
        }
        if((media/=4)>=7){
            System.out.println("Aprovado!");
        }else{
            System.out.println("Reprovado!");
        }
        sc.close();
    }
}
