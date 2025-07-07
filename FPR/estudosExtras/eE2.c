#include <stdio.h>
// Sexta-feira (04/07): Matrizes e Laços Aninhados (AV1-P1-Q1)
// Foco: Preenchimento e exibição de matrizes com lógicas complexas.
// Análise Manual (Antes de Codificar):
// Pegue a Questão 01 da "AV1 FPR M - Parte I (07-05-2025).pdf".
// Analise a função
//  preencherMatriz. Entenda como cada elemento
//  matriz[i][j] é calculado com base nas condições if (i%2==1) ou
//  else.
// Trace o preenchimento da matriz mat[6][6] linha por linha, coluna por coluna.
// Anote o estado da matriz após a primeira chamada a
//  exibir (dentro de preencherMatriz).
// Em seguida, analise o segundo conjunto de laços no
//  main que modifica a matriz (
// matriz[i][j]=matriz[i][j-1]+matriz[i+1][j];).
// Anote o estado final da matriz após essa segunda modificação e a chamada final a
//  exibir.
// Objetivo: Responder à pergunta "o que é exibido pelo programa durante a sua execução", mostrando as duas saídas da função
//  exibir.
// Implementação e Teste:
// Transcreva o código da Questão 01 da AV1-Parte I para o seu ambiente.
// Compile e execute. Compare as saídas com sua análise manual. Entenda o comportamento.
// Objetivo: Praticar a leitura e interpretação de código com matrizes complexas.


// Questão 01 [2,5 pontos]: 
// A seguir é apresentada uma função que recebe 
// como parâmetro uma matriz de inteiros, de ordem 
// n. Analisar o código e informar o que é exibido pelo 
// programa durante a sua execução:

void preencherMatriz (int n, int matriz[n][n]); 
void exibir (int lin, int col, int matriz[lin][col]); 
 
void main () { 
 int mat[6][6]; 
 
 preencherMatriz (6, mat); 
} 
 
void preencherMatriz (int n, int matriz[n][n]) { 
 int i, j; 
  
 for (j=0;j<n;j++) { 
  matriz[0][j] = j*j;                               //{0, 1, 4, 9, 16, 25}
 }                                                  //{1, 2, 3, 4, 5, 6}   
 for (i=1;i<n;i++) {                                //{0, 1, 8, 27, 64, 125}
  for (j=0;j<n;j++) {                               //{3, 4, 5, 6, 7, 8}
   if (i%2==1) {                                    //{0, 1, 16, 81, 256, 625}
    matriz[i][j] = i+j;                             //{5, 6, 7, 8, 9, 10}
   } else { 
    matriz[i][j] = matriz[i-2][j] * j; 
   } 
  } 
 }  
 exibir (n, n, matriz);  
 for (i=0;i<n-1;i+=2) {                                 
//{0, 2, 5, 9, 14, 20}
//{1, 2, 3, 4, 5, 6}   
//{0, 1, 8, 14, 21, 29}
//{3, 4, 5, 6, 7, 8}
//{0, 1, 16, 81, 256, 266}
//{5, 6, 7, 8, 9, 10}
  for(j=i+1;j<n;j++) { 
   matriz[i][j] = matriz[i][j-1] + matriz[i+1][j]; 
  } 
 }  
 exibir (n, n, matriz); 
} 
 
void exibir (int lin, int col, int matriz[lin][col]) { 
 int i, j;   
 for (i=0;i<lin;i++) { 
  for (j=0;j<col;j++) { 
   printf ("%3d ", matriz[i][j]); 
  } 
  printf ("\n"); 
 }  
 printf ("\n\n"); 
} 
