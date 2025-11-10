package lista6.ex3.src.dominio;

public class Elevador {
    private Integer andarAtual, totalAndares;
    
    public void elevador(Integer andarAtual, Integer totalAndares){
        this.andarAtual = andarAtual;
        this.totalAndares = totalAndares;
    }
    public void subir(){
        if(andarAtual!=totalAndares){
            this.andarAtual++;
        }else{
            System.out.println("Você já está no andar mais alto!");
        }
    }
    public void descer(){
        if(andarAtual>0){
            this.andarAtual--;
        }else{
            System.out.println("Você já está no térreo!");
        }
    }
    public void setAndar(Integer Andar){
        this.andarAtual = Andar;
    }
    public Integer andarAtual(){
        return this.andarAtual;
    }
    public Integer totalAndares(){
        return this.totalAndares;
    }
}