// Exercício 5: construir um programa em Java que leia o ano de nascimento de uma pessoa e que
// calcule a sua idade aproximada. Se a idade aproximada for maior ou igual a 16, imprimir “Apto
// a ser eleitor”, imprimir “Inapto a ser eleitor”, caso contrário.

import java.util.Scanner;

public class Eleitor {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            System.out.println("Digite seu ano de nascimento:");
            int ano= scanner.nextInt();

            ano-=2025;
            ano*=-1;
            if(ano<16){
                System.out.println("Inapto a ser eleitor");
            }else{
                System.out.println("Inapto a ser eleitor");
            }
            scanner.close();
        }

}
