// Quinta-feira (03/07): Análise e Implementação de Ponteiros (AV2-P1-Q1)
// Foco: Entender como ponteiros modificam valores e o fluxo de execução com funções.
// Análise Manual (Antes de Codificar):
// Pegue a Questão 01 da "AV2 - 02-07-2025 (Parte I).pdf".
// Trace a execução do 
// main , da 
// funcao2 e da 
// funcao1  passo a passo.
// Para cada chamada de funcao1, anote os valores de *x, *y e temp e como *x e *y são alterados.
// Mantenha o estado do vetor 
// dados  atualizado após cada chamada de 
// funcao1.
// Qual é a sequência de números exibida no 
// printf final?
// Objetivo: Responder à parte "a) O que é exibido ao usuário ao final da execução do programa?"  da questão, com a memória de cálculo.
// Implementação e Teste:
// Transcreva o código da Questão 01 da AV2-Parte I para o seu ambiente de desenvolvimento.
// Compile e execute. Compare a saída com sua análise manual. Identifique e entenda quaisquer diferenças.
// Objetivo: Fixar o entendimento prático da manipulação de ponteiros e chamadas de função.


// Questão 01 [2,5 pontos]: 
// Analise o código apresentado abaixo e, em 
// seguida, responda aos itens apresentados: 
// a) O que é exibido ao usuário ao final da 
// execução do programa? 
// Sua solução deve apresentar toda a memória de 
// cálculo que subsidie a resposta final. 
// b) Reescreva funcao2 de forma que a função 
// percorra o vetor de trás para a frente, 
// mantendo a chamada a funcao1. Os valores 
// exibidos nessa nova versão são os mesmos da 
// original? Justifique a sua resposta.

#include <stdio.h> 
 
void funcao1 (int *x, int *y)  { //                              1 x=1, y=2               2 x=1, y=3                3 x=2 y=4               4 x=2 y=5
                                                                //temp=1                    temp=1                    temp=2                  temp=2
                                                                //*x=3                      *x=4                      *x=6                    *x=7
                                                                //*y= 1                     *y=2                      *y=2                    *y=3
                                                                // dados[5]={3, 1,3,4,5}    dados[5]={3,4, 2,4,5}     dados[5]={3,4,6, 2,5}   dados[5]={3,4,6,7,3}

                                                                //invertido                2 x=-1, y=3              3 x=0, y=2              4 x=2, y=1
                                                                //x=5, y=4                   temp=-1                  temp=0                  temp=2
                                                                //temp=5                     *x= 2                    *x= 2                   *x=3
                                                                //*x=9                       *y= 0                    *y=2                    *y=-1
                                                                //*y=-1                      dados[5]={1,2,0, 2,9}    dados[5]={1,2,2,2,9}    dados[5]={-1,3,2,2,9}
                                                                // dados[5]={1,2,3,-1 ,9}
    int temp = *x; //armazena o valor de *x   
    *x = *x + *y; //*x recebe x + o próximo
    *y = *x-(2 * temp);  // o próximo recebe x (que agr é x + o próximo) - 2 vezes o valor inicial de x
} 
 
// void funcao2 (int *v, int n)  { 
//     int i, *p; 
 
//     for (i=0, p=v; i<n-1; i++, p++)  { 
//         funcao1 (p, p+1); 
//     } 
// } 

void funcao2 (int *v, int n)  { 
    int i, *p; 
 
    for (i=n, p=(v+4); i>1; i--, p--)  { 
        funcao1 (p, p-1); 
    } 
} 
 
void main( )  { 
    int i, dados[5] = {1, 2, 3, 4, 5}; 
     
    funcao2 (dados, 5); 
     
    for (i=0; i<5; i++)  { 
        printf ("%d  ", dados[i]); 
    } 
} 