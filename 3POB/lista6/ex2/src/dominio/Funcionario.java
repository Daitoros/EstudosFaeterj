package lista6.ex2.src.dominio;

public class Funcionario {
    private String nome, categoria;
    private double salarioBase;
    
    public double getSalario(){
        return this.salarioBase;
    }
    public void setSalario(double valor){
        this.salarioBase = valor;
    }
    public void acrescimo(double valor){
        double salario = getSalario();
        setSalario(salario + valor);
    }
    public String getNome(){
        return this.nome;
    }
    public String getCategoria(){
        return this.categoria;
    }
    public void setNome(String nomeString){
        this.nome = nomeString;
    }
    public void setCategoria(String Categoria){
        this.categoria = Categoria;
    }
    public void calcularSalarioFinal(char c){
        switch (c) {
            case 'A':
                double add = getSalario()*0.2;
                acrescimo(add);
                break;
            case 'B':
                double add = getSalario()*0.1;
                acrescimo(add);
                break;
            default:
                break;
        }
    }
}
