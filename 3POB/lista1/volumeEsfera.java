package 3POB.exercicios1;
// 8. Cálculo do Volume de uma Esfera
// Crie um programa que leia o raio de uma esfera e calcule o seu volume.

import java.util.Scanner;

public class volumeEsfera {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Informe o raio da esfera: ");
        float raio= sc.nextFloat();
        float volume;
        volume=4/3;
        volume*=3.14159;
        raio*=raio;
        raio*=raio;
        volume*=raio;

        System.out.println("O volume é: " + volume);
        sc.close()
    }
}
