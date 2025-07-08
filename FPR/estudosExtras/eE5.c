// Segunda-feira (07/07): Algoritmo de Comparação de Arquivos (AV2-P1-Q2)
// Foco: Desenvolver a lógica de um algoritmo para arquivos e conjuntos de dados (sem repetição).
// Descrição Detalhada do Algoritmo (AV2-P1-Q2):
// Não codifique. O objetivo é descrever o algoritmo passo a passo.
// Sua função deve determinar se todos os valores de arq1 estão em arq2, sem repetição.
// Pense nos passos:
// Como abrir os arquivos?
// Como ler números inteiros linha por linha?
// Como verificar se um número de arq1 existe em arq2?
// Como garantir que a verificação seja "sem repetição" (ou seja, se arq1 tem 5, 5, e arq2 tem 5, isso deveria ser considerado "não contido" se cada 5 em arq1 precisar de uma correspondência única em arq2). Ou significa que os valores existam em arq2 e arq2 não tenha repetição interna? A questão "sem repetição" é ambígua aqui, assuma que significa que os valores de arq1 devem existir em arq2 e o conjunto de arq2 não tem duplicatas.
// Quais estruturas de dados auxiliares você poderia usar para otimizar (ex: um array para guardar os números de arq2 e marcá-los como "já usados")?
// Como lidar com o final de cada arquivo?
// Qual deve ser o valor de retorno da função (ex: 1 para sim, 0 para não)?
// Escreva um rascunho em pseudocódigo ou em português claro.
// Prática de Leitura/Escrita de Arquivos (Base para Q2):
// Crie dois arquivos de texto, arq1.txt e arq2.txt, com números inteiros (um por linha), incluindo alguns repetidos e outros que não aparecem no outro arquivo.
// Escreva um pequeno programa em C que:
// Abre arq1.txt para leitura e imprime seus conteúdos.
// Abre arq2.txt para leitura e imprime seus conteúdos.
// Objetivo: Familiarizar-se com fopen, fscanf e fclose.


// Questão 02 [2,5 pontos]: 
// Pede-se a descrição detalhada do algoritmo (não 
// precisa implementar) de uma função que, dados 
// dois arquivos textos (arq1 e arq2) contendo 
// números inteiros, um por linha, determine se todos 
// os valores do primeiro arquivo estão no segundo, 
// porém sem repetição. 
 
// Observação: o detalhamento da solução deve ser 
// suficiente para que um programador consiga 
// implementar a função, apenas seguindo os passos 
// descritos no algoritmo.

/*
Porimeiro fazer uma função para contar o total de linhas do arquivo texto 2. ela irá abrí-lo e, ao ler o arquivoo, irá, a cada linha, somar um a uma variável contadora. Por fim fechará o arquivo e retornará o contador. Depois, em outra função, abra os dois arquivos. Crie um vetor para armazenar os valores de arq2, do tamanho de linha do mesmo, retornado pela função anterior. Portanto, basta ler cada elemento do arquivo e armazená-lo em uma variável, depois armazená-la no vetor. Iterar o vetor a cada linha. ao final, fechar o arquivo e retornar a função.
Agora fará uma função de busca. Nessa função, irá percorrer o vetor, passado por parâmetro, procurando o número passado por parâmetro. A cada encontro do número, somar um contador. Após percorrer todo o vetor, retornar o contador.

por fim, fazer a função final: abrir o arquivo 1 para leitura, a cada leitura, armazenar em uma variável e jogá-la na função anterior junto com o vetor em que está os dados do arq 2. se retornar diferente de 1, retornar 0 na função. após percorrer o arquivo todo, fechá-lo e retornar 1.

*/

#include <stdio.h>

// int contArq(FILE *arq){
int contArq(char *nomeArq){
    int n, cont=0;
    FILE *arq= fopen(nomeArq, "r");
    if(arq){
        while(fscanf(arq, "%d", &n) != EOF ){
            cont++;
        }
    }else{
        printf("Não foi possível abrir o arquivo!");
    }
    fclose(arq);
    return cont;
}

// void armazArq(FILE *arq, int tamArq){
void armazArq(char *nome_arquivo, int tamArq) {
    FILE *arq;
    int n, v[tamArq], i=0;
    arq=fopen(nome_arquivo, "r");
    if(arq){
        while (fscanf(arq, "%d", &n) != EOF)
        {
            v[i]=n;
            i++;
        }
    }
    fclose(arq);
    return;
}

int buscVet(int *v, int tamV, int num){
    int i, cont=0;
    for(i=0;i<tamV;i++){
        if(v[i]==num){
            cont++;
        }
    }
    return cont;
}

// int compArq(FILE *arq, int *v, int tamV){
int compArq(char *nomeArq, int *v, int tamV){
    int n, i=0;
    FILE *arq=(nomeArq, "r");
    if(arq){
        while (fscanf(arq, "%d", &n) != EOF)
        {
            if(buscVet(v, tamV, n)!=1){
                return 0;
            }
        }
        return 1;
    }else{
        printf("Não foi possível abrir o arquivo!");
    }
    fclose(arq);
    return;
}