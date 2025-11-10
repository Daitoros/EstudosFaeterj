package lista6.ex4.src.dominio;

public class Aluno {
    private String nome;
    private double nota;
    
    public void notaAluno(String nomeAluno, double nota){
        this.nome = nomeAluno;
        this.nota = nota;
    }
    public Integer validarNota(){
        if(this.nota<0||this.nota>10){
            return 0;
        }else{
            return 1;
        }
    }
    public void classificarAluno(){
        double nota = this.nota;
        if(nota>=7){
            System.out.println("Aprovado");
        }else{
            if(nota>=5){
                System.out.println("Recuperação");
            }else{
                System.out.println("Reprovado");
            }
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