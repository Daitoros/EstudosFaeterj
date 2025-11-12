package lista7.ex3.dominio;

public class Animal{
    private String nome;
    private int idade;

    public Animal(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }

    public void emitirSom(){
        System.out.println("Som genérico de animal");
    }
}
