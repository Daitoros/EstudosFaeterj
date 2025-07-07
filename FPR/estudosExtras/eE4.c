// Domingo (06/07): Matrizes 3D e Structs (AV2-P2-Q1)
// Foco: Definição e manipulação básica de matrizes tridimensionais de structs.
// Definição da struct Sala (AV2-P2-Q1):
// Crie a
//  struct Sala com os campos status (int), curso (string - char curso[50]), e periodo (int).
// Adicione um campo char turno_extenso[15]; para armazenar "matutino", "vespertino" ou "noturno" para facilitar a exibição.
// Declaração e Inicialização da Matriz 3D:
// Declare a matriz
//  struct Sala mapaSalas[8][10][3]; conforme as dimensões: 8 andares (0-7), 10 salas (0-9), 3 turnos (0-matutino, 1-vespertino, 2-noturno).
// Crie um laço aninhado triplo para inicializar todos os
//  status como 0 (livre).
// Use um if/else if para atribuir o turno_extenso correto com base no índice do turno.
// Alocação Manual e Teste:
// Defina manualmente algumas alocações de salas na sua matriz:
// mapaSalas[2][3][1].status = 1;
// strcpy(mapaSalas[2][3][1].curso, "Engenharia Civil");
// mapaSalas[2][3][1].periodo = 4;
// Aloque mais 2 ou 3 salas diferentes para outros cursos e turnos.
// Imprima os dados de uma ou duas dessas salas alocadas para verificar se a atribuição ocorreu corretamente.


// Questão 01 [2,5 pontos]: 
// Uma determinada faculdade mantém o seu “mapa 
// de salas” armazenado sob a forma de uma matriz 
// tridimensional de structs, considerando que: 
// i. 
// ii. 
// Andares 
// O prédio possui 8 andares e, em cada andar, há 10 
// salas; 
// Uma vez que há atividades em todos os turnos, é 
// necessário que a alocação de salas seja separada 
// por turno (matutino, vespertino e noturno). 
// Turnos 
// Salas 
// Atenção: a partir da imagem acima, podemos dizer 
// que o elemento M[2][3][1] representa: no andar 2, a 
// sala nº 3 desse andar, turno 1 (vespertino). 
// E o que representa este “mapa de salas”? Apenas 
// um controle que diz a que turma determinada sala 
// está alocada, em um dado turno. Para isto, cada 
// posição da matriz deverá armazenar as seguintes 
// informações:  
//  status (int): 0 – livre; 1 – alocada; 2 – em 
// manutenção; 
//  curso (string): caso a sala esteja alocada, a que 
// curso; 
//  período (int): caso a sala esteja alocada, a qual 
// período daquele curso.  
// Sobre este cenário, pede-se a implementação de 
// uma função que, dado um curso, exiba todas as salas 
// ocupadas por ele. Ao exibir cada sala, utilizar o 
// formato do exemplo a seguir:  
// M75: sala 5 do 7º andar, turno manhã 
// Observações: 
// i. 
// Podem considerar que as salas variam de 0 a 9, 
// assim como os andares de 0 a 7; 
// ii. Quanto aos turnos, considerar: 0 – matutino; 1 – 
// vespertino; 2 – noturno.

#include <stdio.h>
#include <string.h>


typedef struct 
{
    int status;
    char curso[10];
    int período;
}Tsala;

void printSalas(char curso[], Tsala salas[8][10][3]){               //lembrar q a matriz tem que entrar com os parÂmetros do seu tamanho
    int i, j, k, l=0;

    for(i=0;i<8;i++){                                               //lembrar que, se varia de 0 a 7, seu tamanho é 8
        for(j=0;j<10;j++){
            for(k=0;k<3;k++){
                if(strcmp(curso, salas[i][j][k].curso)==0){         //lembrar que strcmp retorna 0
                    if(salas[i][j][k].status==1){
                        if(k==0){
                            printf("M%d%d: sala %d do andar %d, turno manhã", i,j,j,i);
                        } else{
                            if(k==1){
                                printf("M%d%d: sala %d do andar %d, turno tarde", i,j,j,i);
                            } else{
                                printf("M%d%d: sala %d do andar %d, turno noite", i,j,j,i);
                            }
                        }
                    }
                  }
                }
            }
        }
    }
}

void main(){
    Tsala totalSalas[7][9][3];


}
