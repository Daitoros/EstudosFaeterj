// Exercício 4: Média de notas de uma turma

// Descrição:
// Desenvolva um programa que calcule a média das notas de uma turma, onde
// o usuário informe quantos alunos há na turma e suas respectivas notas.
// Requisitos:
// • O programa deve solicitar a quantidade de alunos.
// • Deve utilizar um loop for para receber as notas de cada aluno.
// • Utilizar um acumulador para somar todas as notas.
// • No final, exibir a média da turma.

import java.util.Scanner;

public class mediaValores {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Informe quantos alunos tem na aula:");
        int numAlunos = sc.nextInt();
        float soma=0;
        for(int i=0;i<numAlunos;i++){
            System.out.println("Informe a nota do aluno " + (i+1) +":" );
            soma+= sc.nextFloat();
        }
            float resultado = soma/numAlunos;

        System.out.println("A média é: " + resultado);
        sc.close();
    }
}
