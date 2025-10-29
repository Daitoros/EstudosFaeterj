package lista5;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;

public class Ex5 {
    public static void main(String[] args) {
        ArrayList<Integer> Lista = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        boolean continuar = true;
        do{
            System.out.println("Informe um número: ");
            Lista.add(sc.nextInt());
            System.out.println("Deseja continuar? S ou N?");
            if((sc.next().charAt(0))=='N'){
                continuar=false;
            }
        }while(continuar);

        Collections.sort(Lista);
        System.out.println(Lista);
        sc.close();    
    }
}
