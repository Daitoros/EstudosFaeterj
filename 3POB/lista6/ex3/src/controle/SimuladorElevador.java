package lista6.ex3.src.controle;

import lista6.ex3.src.dominio.Elevador;
import java.util.Scanner;

public class SimuladorElevador {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Elevador elevador = new Elevador();

        elevador.elevador(100, 200);
        Integer acao;
        do{
            System.out.println("Você está no andar " + elevador.andarAtual() + " e o prédio tem " + elevador.totalAndares() + " andares.\n O que deseja fazer?\n Digite 1 para descer, digite 2 para subir, digite 3 para escolher um andar e 0 para sair:");
            acao = sc.nextInt();
            sc.nextLine(); 
            switch (acao) {
                case 1:
                    elevador.descer();
                    break;
                case 2:
                    elevador.subir();
                    break;
                case 3:
                    elevador.setAndar(acao);
                default:
                    break;
            }
        }while (acao!=0);
        
        sc.close();
    }
}
