package lista5;

import java.util.ArrayList;
import java.util.Scanner;

public class Ex3 {
    public static void main(String[] args) {
        ArrayList<Double> Lista = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        do{
            System.out.println("\nInforme um número: \n");
            Lista.add(sc.nextDouble());
        }while((sc.nextDouble())!=-1);

        Integer i;
        Double soma=0, media;

        for(i=0;i<Lista.size();i++){
            soma+=Lista.get(i);
        }
        media=soma/Lista.size();
        System.out.println("A soma é " + soma + "e a média é " + media);
        sc.close();    
    }
}

