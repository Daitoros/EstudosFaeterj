package lista7.ex3.controle;

import lista7.ex3.dominio.Gato;
import lista7.ex3.dominio.Cachorro;

public class veiculos {
    public static void main(String[] args) {
        Cachorro pluto = new Cachorro("Pluto", 10);
        Gato gato = new Gato("Frajola", 11);

        pluto.emitirSom();
        gato.emitirSom();
    }
}
