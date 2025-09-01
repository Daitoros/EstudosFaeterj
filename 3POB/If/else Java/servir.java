// Exercício 10: construir um programa em Java que leia o ano de nascimento e o sexo de uma
// pessoa e que calcule a sua idade aproximada. Se o sexo for igual a “M” (masculino) e a idade for
// igual a 18, imprimir “Serviço Militar Obrigatório”, caso contrário, imprimir “Isento de Serviço
// Militar”.
import java.util.Scanner;

public class servir {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Informe 'M' para Masculino e 'F' para feminino: ");
        char sexo = scanner.next().charAt(0);
        System.out.println("A data de nascimento: ");
        int ano = scanner.nextInt();
        ano-=2025;
        ano*=-1;
        if(sexo=='M'){
            if(ano>18){
                System.out.println("Serviço Militar Obrigatório");
            }else{
                System.out.println("Isento de Serviço Militar");
            }
        }else{
            System.out.println("Isento de Serviço Militar");
        }

    }
    
}
