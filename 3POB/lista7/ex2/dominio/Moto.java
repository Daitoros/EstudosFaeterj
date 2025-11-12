package lista7.ex2.dominio;

public class Moto extends Veiculo{
    private double cilindradas;

    public double getCilindradas(){
        return this.cilindradas;
    }
    public Moto(String marca, String modelo, Integer ano, double cilindradas){
        super(marca, modelo, ano);
        this.cilindradas = cilindradas;
    }

    public void exibirDPai(){
        super.exibirDados();
    }
}
