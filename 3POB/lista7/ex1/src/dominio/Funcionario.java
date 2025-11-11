package lista7.ex1.src.dominio;

public class Funcionario {
    private String nome;
    private Double salarioBase;

    public Funcionario(String nome, double salarioBase){
        this.nome = nome;
        this.salarioBase = salarioBase;
    }
    public double calcularSalario(){
        return this.salarioBase;
    }
    public String getNome() {
        return this.nome;
    }
}