package lista6.ex5.src.controle;

import lista6.ex5.src.dominio.CaixaEletronico;
import java.util.Scanner;

public class SimuladorElevador {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        CaixaEletronico caixa = new CaixaEletronico();

        System.out.println("Deposite um valor inicial:");
        Double saldoInicial = sc.nextDouble();
        caixa.inserirSalario(saldoInicial);
        double valor;
        do{
            System.out.println("\nInforme um valor a sacar ou digite 0 para sair:");
            valor = sc.nextDouble();
            sc.nextLine();
            caixa.sacar(valor);
        }while(valor!=0);
        sc.close();
    }
}
