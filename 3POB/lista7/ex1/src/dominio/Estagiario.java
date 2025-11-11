package lista7.ex1.src.dominio;

public class Estagiario extends Funcionario {
    public Estagiario(String nome, Double salario){
        super(nome, salario+salario*0.05);
    }

    public double getSalario(){
        return super.calcularSalario();
    }
}
