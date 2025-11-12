package lista7.ex2.controle;

import lista7.ex2.dominio.Carro;
import lista7.ex2.dominio.Moto;

public class veiculos {
    public static void main(String[] args) {
        Carro carro = new Carro("Mercedez", "Benz", 2020, 4);
        Moto moto = new Moto("mirage", "Solar", 2020, 5.4);

        carro.exibirDPai();
        moto.exibirDPai();
    }
}
