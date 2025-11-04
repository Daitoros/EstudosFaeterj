package lista6.ex1.src.dominio;

public class ContaBancaria {
    private String Titular;
    private double saldo;

    public void setSaldo(double novoSaldo) {
        this.saldo = novoSaldo;
    }
    public double getSaldo() {
        return this.saldo;
    }
    public void Depositar(double valor){
        double Saldo = getSaldo();
        setSaldo(Saldo + valor);
    }
    public void sacar(double valor) {
        double Saldo = getSaldo();
        if(Saldo>valor){
            setSaldo(Saldo - valor);
        }else{
            System.out.println("Não há saldo suficiente!");
        }
    }
    public void exibirSaldo(){
        double Saldo = getSaldo();
        System.out.println("O seu saldo é " + Saldo);
    }
}