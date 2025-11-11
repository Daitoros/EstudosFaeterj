package lista7.ex2.src.dominio;

public class Veiculo {
    private String marca, modelo;
    private Integer ano;

    public Veiculo(String marca, String modelo, Integer ano){
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }

    public class exibirDados() {
        System.out.println("\nA marca do veículo é " + this.marca + "!\n");
        
    }
}
