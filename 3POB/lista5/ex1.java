package lista5;

import java.util.ArrayList;
import java.util.Scanner;

public class ex1 {
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

        Integer i = 0;
        System.out.println("\n Seus números são: \n\n");
        for(;i<Lista.size();i++){
            System.out.println("\n" + Lista.get(i) + "\n");
        }
        sc.close();    
    }
}
