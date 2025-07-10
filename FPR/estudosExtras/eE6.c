// Quarta-feira (09/07): Busca de Padrão em Matriz (AV1-P2-Q3)
// Foco: Lógica complexa de busca em matrizes, combinando números e "strings de dígitos".
// Implementação da Busca (AV1-P2-Q3):
// Crie uma função que receba uma matriz
//  int mat[M][N] (pode ser 5x8 como no exemplo da prova ) e um número inteiro
//  num.
// Converta o num em uma string de dígitos (ex: 31975 para "31975") para facilitar a comparação caractere por caractere.
// Implemente a lógica de busca:
// Horizontal: Percorra cada linha, e dentro de cada linha, tente encontrar a sequência de dígitos do num.
// Vertical: Percorra cada coluna, e dentro de cada coluna, tente encontrar a sequência de dígitos do num.
// Retorne 1 se encontrar, 0 caso contrário.
// Dicas: Pense em laços aninhados. Para verificar uma sequência horizontal, você precisaria de um laço para as linhas, outro para as colunas de início da sequência, e um terceiro para comparar os caracteres da string do número com os elementos da matriz. Lógica similar para vertical.
// Testes:
// Use a matriz de exemplo da prova.
// Teste com num = 31975 (deve retornar 1).
// Teste com num = 952 (deve retornar 0).
// Teste com outros números que você espera que existam ou não existam.


// Questão 03 [2,5 pontos]: 
// Dada uma matriz matm×n contendo números inteiros 
// no intervalo de 0 a 9 (não é necessário verificar) e 
// um número inteiro num, verificar se num, algarismo 
// a algarismo, encontra-se em mat. 
 
// Exemplo: 
 
// 5 0 1 3 6 8 4 0 
// 2 3 1 9 7 5 0 1 
// 3 5 2 4 2 2 5 7 
// 8 4 5 2 1 2 3 6 
// 5 5 8 1 0 1 9 8 
 
// O número 31975 existe na matriz; porém, o 
// número 952 não. 
 
// Observação: considere que, caso o número exista na 
// matriz, ele estará na horizontal (da esquerda para a 
// direita) ou na vertical (de cima para baixo). 
int tamNum(int num){
    int cont=0;
    if(num==0){
        return 1;
    } else{
        while(num>0){ //havia feio errado aqui, colocando while num%0>0
            cont++;
            num/=10;
        }
        return cont;
    }
}

int iterarL(int quant){
    int i, l=1;
    for(i=0;i<quant;i++){
        l*=10;
    }
    return l;
}
void armazV(int v[], int tam, int num){     //função para uma abordagem muito melhor da solução
    int i;
    for(i=tam-1;i>=0;i--){
        v[i]=num%10;
        num/=10;
    }
}
int verifMat(int x, int y, int m[x][y], int num){
    int tam= tamNum(num);
    int i, j, k, l, numComparar, m;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(m[i][j]==num){
                return 1;
            }else{
                 numComparar=0;
                 l=iterarL(tam);
                for(k=j;k<tam;k++){
                    numComparar+=(m[i][k]*l);
                    l/=10;
                }
                if(numComparar==num){
                    return 1;
                } else{
                    l=iterarL(tam);
                    for(k=i;k<tam-1;k++){
                        numComparar+=(m[k][j]*l);
                        l/=10;
                    }
                    if(numComparar==num){
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}