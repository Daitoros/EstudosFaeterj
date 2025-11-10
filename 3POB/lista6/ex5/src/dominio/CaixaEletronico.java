package lista6.ex5.src.dominio;

public class CaixaEletronico {
    private double saldo;
    
    public Integer sacar(double valor){
        if((valor%10==0)&&this.saldo>valor){
            this.saldo-=valor;
            return 1;
        }else{
            return 0;
        }
    }

    public void exibirSaldo(){
        System.out.println("Seu saldo é " + this.saldo + "!");
    }

    public void inserirSalario(double saldo){
        this.saldo = saldo;
    }
}