package lista7.ex2.dominio;

public class Carro extends Veiculo{
    private int quantidadePortas;

    public Carro(String marca, String modelo, Integer ano, int quantidadePortas){
        super(marca, modelo, ano);
        this.quantidadePortas = quantidadePortas;
    }
    public int getPortas(){
        return this.quantidadePortas;
    }
    public void exibirDPai(){
        super.exibirDados();
    }
}
