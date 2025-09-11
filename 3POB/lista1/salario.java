package 3POB.exercicios1;

//     6. Cálculo do Salário
// Escreva um programa que receba o salário bruto de um funcionário e o valor de desconto do INSS. O programa deve calcular e exibir o salário líquido.


public class salario {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe o valor do salário: ");
        float salario= scanner.nextFloat();
        System.out.print("Informe o valor do desconto: ");
        float desconto= scanner.nextFloat();        

        salario-=desconto;

        System.out.print("O salário bruto é: " + salario);
    }
}
