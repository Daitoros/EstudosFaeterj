package lista6.ex1.src.controle;

import lista6.ex1.src.dominio.ContaBancaria;
import java.util.Scanner;

public class func {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ContaBancaria conta = new ContaBancaria();
        
        int controle=1;
        System.out.println("Informe seu nome para criar a conta:\n");
        String titular = sc.nextLine();
        conta.setTitular(titular);
        while(controle!=0){
            System.out.println("Determine a ação que deseja realizar: \n 1- Depositar\n 2- Sacar \n 3- Exibir saldo\n 0- Sair");
            controle= sc.nextInt();
            switch (controle) {
                case 1:
                    System.out.println("\nInforme o valor que deseja depositar:");
                    double valorDeposito= sc.nextDouble();
                    sc.nextLine();
                    conta.Depositar(valorDeposito);
                    break;
                case 2:
                    System.out.println("\nInforme o valor que deseja sacar:");
                    double valorSaque= sc.nextDouble();
                    sc.nextLine();
                    conta.sacar(valorSaque);
                    break;
                case 3:
                    conta.exibirSaldo();
                    sc.nextLine();
                default:
                    controle=0;
                    break;
            }
        }
        sc.close();   
    }
}
