package 3POB.exercicios1;

import java.util.Scanner;

public class disntancia2p {
    public static void main(String[] args) {
        Scanner scanner= new Scanner(System.in);

        System.out.print("Informe o valor de x1: ");
        float x1= scanner.nextFloat();
        System.out.print("Informe o valor de x2: ");
        float x2= scanner.nextFloat();

        System.out.print("Informe o valor de y1: ");
        float y1= scanner.nextFloat();
        System.out.print("Informe o valor de y2: ");
        float y2= scanner.nextFloat();

        float formula;

        formula=x2-x1;
        formula=formula*formula;
        float formula2=y2-y1;
        formula2=formula2*formula2;
        double formula3=formula+formula2;
        formula3= Math.sqrt(formula3);
        
        System.out.print(formula3);
        scanner.close();
    }
}
