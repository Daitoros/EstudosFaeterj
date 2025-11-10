package lista6.ex4.src.controle;

import lista6.ex4.src.dominio.Aluno;
import java.util.Scanner;

public class SimuladorElevador {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Aluno aluno = new Aluno();

        System.out.println("Informe o nome do aluno:");
        String nome = sc.nextLine();
        double numNota;
        do{
            System.out.println("\nInforme uma nota válida para o aluno:");
            numNota = sc.nextDouble();
            sc.nextLine();
        }while(aluno.validarNota()!=0);
        aluno.notaAluno(nome, numNota);
        sc.close();
    }
}
