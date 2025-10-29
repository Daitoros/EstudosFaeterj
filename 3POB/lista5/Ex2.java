package lista5;

import java.util.ArrayList;
import java.util.Scanner;

public class Ex2 {
    public static void main(String[] args) {
        ArrayList<String> Lista = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        Integer i;

        for(i=0;i<5;i++){
            System.out.println("Informe um nome: ");
            Lista.add(sc.next());
        }
        System.out.println("Informe qual nome deseja remover: ");
        String nomepremover = sc.next();
        Lista.remove(nomepremover);

        Integer i = 0;
        System.out.println("\n Sua lista ficou: \n\n");
        for(;i<Lista.size();i++){
            System.out.println("\n" + Lista.get(i) + "\n");
        }
        sc.close();    
    }
}

