package lista7.ex1.src.dominio;

public class Gerente extends Funcionario {
    public Gerente(String nome, Double salario){
        super(nome, salario+1.2);
    }
}
