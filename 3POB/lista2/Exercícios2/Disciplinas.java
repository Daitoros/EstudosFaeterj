
import java.util.Scanner;

// Exercício 8: construir um programa em Java que leia a quantidade de disciplinas em que um
// aluno não alcançou a média. Se a quantidade for igual a 0, imprimir “Aprovado”, se a quantidade
// for menor ou igual a 5, imprimir “Recuperação” e se a quantidade for maior que 5, imprimir
// “Reprovado”.


public class Disciplinas {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a quantidade de disciplinas:");
        int num1= scanner.nextInt();

        if(num1==0){
            System.out.println("Aprovado");
        }else{
            if(num1<=5){
                System.out.println("Recuperação");
            }else{
                System.out.println("Reprovado");
            }

        }
        scanner.close();
    }
}
