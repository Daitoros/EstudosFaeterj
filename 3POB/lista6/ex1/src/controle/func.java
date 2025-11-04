package lista6.ex1.src.controle;

import lista6.ex1.src.dominio.ContaBancaria;
import java.util.Scanner;

public class func {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int controle=1;
        System.out.println("Informe seu nome para criar a conta:\n");
        Depositar novoTitular = new Titular;
        while(controle!=0){
            System.out.println("Determine a ação que deseja realizar: \n 1- Depositar\n 2- Sacar \n 3- Exibir saldo\n 0- Sair");
            controle= sc.nextInt();
            switch (controle) {
                case 1:
                    System.out.println("\nInforme o valor que deseja depositar:");
                    double valorDeposito= sc.nextDouble();
                    Depositar deposito = new Depositar(valorDeposito);
                    
                    break;
            
                default:
                    break;
            }
        }   
    }
}
