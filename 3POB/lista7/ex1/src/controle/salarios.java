package lista7.ex1.src.controle;

import lista7.ex1.src.dominio.Funcionario;
import lista7.ex1.src.dominio.Estagiario;
import lista7.ex1.src.dominio.Gerente;

import java.util.Scanner;

public class salarios {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Funcionario funcionario = new Funcionario("Ben10000", 10000);
        Estagiario estagiario = new Estagiario("BenTennysson", 1000.0);
        Gerente gerente = new Gerente("BenTenTennysson", 1000.0);

        System.out.println("O salário final de " + gerente.getNome() + " é " + gerente.calcularSalario()+ "!\n");
        System.out.println("O salário final de " + funcionario.getNome() + " é " + funcionario.calcularSalario()+ "!\n");
        System.out.println("O salário final de " + estagiario.getNome() + " é " + estagiario.calcularSalario()+ "!\n");
    }
}
