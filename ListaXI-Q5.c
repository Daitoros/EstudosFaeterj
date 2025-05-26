
#include <stdio.h>

// Questão 05:
// O histórico de um aluno é representado por um
// vetor de structs onde cada posição armazena o
// código da disciplina cursada, semestre e ano
// que a cumpriu e a média final na disciplina.
// Implementar uma função que exiba o histórico
// do aluno com o seguinte formato:
// NomeDisciplina1 (código1) MédiaDisciplina1
// NomeDisciplina2 (código2) MédiaDisciplina2

// .
// .
// .

// NomeDisciplinaN (códigoN) MédiaDisciplinaN
// Coeficiente de rendimento: CR
// Observações:
// 1. Para obter os dados da disciplina, um outro
// vetor de structs deve ser consultado. Este,
// por sua vez, armazena para cada disciplina
// do curso as seguintes informações: código,
// nome e número de créditos;
// 2. O coeficiente de rendimento consiste em
// uma média ponderada de todos os graus
// atribuídos às disciplinas cursadas, onde os
// pesos são representados pelo número de
// créditos da disciplina;
// 3. Todos os dados em negrito apresentados no
// formato do histórico devem ser obtidos a
// partir dos vetores.

typedef struct {
    char codigo[10];
    int semestre;
    int ano;
    float mediaF;
}THist;

typedef struct {
    char codigo[10];
    char nome[10];
    int creditos;
}TDisc;

void exibirHist(THist hist[], int histtam, TDisc disc[], int disctam){
    int i, j; 
    float cr=0, cont=0;
    for(i=0; i<histtam;i++){
        j=0;
        for(j=0;j< disctam; j++){
            if(hist[i].codigo==disc[j].codigo){
                break;
            }
        }
        printf("%s (%s) %f\n", disc[j].nome, disc[j].codigo, hist[i].mediaF);
        cr+=hist[i].mediaF*disc[j].creditos;
        cont++;
    }
    cr/=cont;
    printf("Coeficiente de rendimento: %f", cr);
}
    
   

int main()
{
    printf("Hello World");

    return 0;
}
