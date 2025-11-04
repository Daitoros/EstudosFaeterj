package lista6.ex2.src.controle;

import lista6.ex1.src.dominio.ContaBancaria;
import lista6.ex2.src.dominio.Funcionario;
import java.util.Scanner;

public class GerenciadorFuncionario {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Funcionario funcionario = new Funcionario();
        
        System.out.println("Informe o nome do seu funcionario:\n");
        String nome = sc.nextLine();
        funcionario.setNome(nome);
        System.out.println("Informe a categoria do seu funcionario:\n");
        String categoria = sc.nextLine();
        funcionario.setCategoria(categoria);
        System.out.println("Informe o salário do seu funcionario:\n");
        double salario = sc.nextDouble();
        funcionario.setSalario(salario);
        System.out.println("Informe o Bônus do seu funcionario:\n");
        char bonus= sc.next(char);
        funcionario.calcularSalarioFinal(bonus);
        System.out.println("O salário final do funcionário é " + funcionario.getSalario());
        sc.close();   
    }
}
