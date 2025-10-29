package lista5;

import java.util.ArrayList;
import java.util.Scanner;

public class Ex4 {
    public static void main(String[] args) {
        ArrayList<Integer> Lista = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        Integer i;

        for(i=0;i<10;i++){
            System.out.println("Informe um número: ");
            Lista.add(sc.nextInt());
        }
        System.out.println("Informe qual número deseja contar a ocorrência: ");
        Integer numeropcontar = sc.nextInt();
        Integer cont=0;
        for(i=0;i<10;i++){
            if(Lista.get(i)==numeropcontar){
                cont++;
            }
        }
        System.out.println("\nO número escolhido, " + numeropcontar + " apareceu " + cont + "!");
        sc.close();    
    }
}

