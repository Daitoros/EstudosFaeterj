// Exercício 9: construir um programa em Java que leia as 2 notas de um aluno e que calcule,
// armazene e imprima a média. Se a média for maior ou igual a 7, imprimir “Aprovado”, caso
// contrário, realizar a leitura de uma terceira nota, que terá peso 2 e calcular, armazenar e imprimir
// uma nova média. Se a nova média for maior ou igual a 6, imprimir “Aprovado”, caso contrário,
// imprimir “Reprovado”.

import java.util.Scanner

public class Media {
        public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite a primeira nota:");
        float num1= scanner.nextFloat();
        System.out.print("Digite a segunda nota:");
        float num2= scanner.nextFloat();

        float media=num1+num2;
        if((media/=2)>=7){
            System.out.print("Aprovado");            
        }else{
            System.out.print("Digite a terceira nota:");
            float num3= scanner.nextFloat();
            float novaMedia= (num1+num2)+num3*2;
            novaMedia/=4;
            if((novaMedia>=7){
                System.out.print("Aprovado");            
            }else{
                System.out.print("Reprovado");            
            }
        }
        scanner.close();
    }
}
