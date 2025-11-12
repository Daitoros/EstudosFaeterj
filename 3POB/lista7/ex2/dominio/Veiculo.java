package lista7.ex2.dominio;

public class Veiculo{
    private String marca, modelo;
    private Integer ano;

    public Veiculo(String marca, String modelo, Integer ano){
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }

    public void exibirDados() {
        System.out.println("\nA marca do veículo é " + this.marca + "!\n");
        System.out.println("\nO modelo do veículo é " + this.modelo + "!\n");
        System.out.println("\nA ano do veículo é " + this.ano + "!\n");
    }
}
