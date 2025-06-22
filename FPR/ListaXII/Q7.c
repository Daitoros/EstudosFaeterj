#include <stdio.h>
#include <limits.h>
#include <float.h>

// Questão 07:
// Desenvolver uma função que, dados dois
// arquivos textos arqA e arqB, crie um novo
// arquivo arqC, considerando que:
//  arqA e arqB contém números reais,
// um por linha, ordenados
// crescentemente e sem repetição no
// arquivo;
//  arqC deve conter apenas os números
// comuns aos dois arquivos originais;
//  Assim como arqA e arqB, arqC
// também não possuirá repetições de
// elementos e estes deverão estar
// ordenados de forma crescente.

void ordenarVetFCrec(float vet[], int tamVet){
    int i, j, iM;
    float num;
    for(i=0;i<tamVet; i++){
        float menor=FLT_MAX;
        for(j=i;j<tamVet;j++){
            num=vet[j];
            if(num<menor){
                menor=num;
                iM=j;
            }
        }
        vet[iM]=vet[i];
        vet[i]=menor;
    }
}

int contArq(char nomeArq[]){
    FILE *arq;
    int cont;
    float num;

    arq = fopen (nomeArq, "r");

    if(arq)
    {
        for(cont=0;fscanf(arq, "%f", &num) !=EOF;cont++);
        return cont;
    } else{
        return -1;
    }
}
int acharIgual(float func[], float num, int tam){
    int i;
    for(i=0;i<tam;i++){
        if(func[i]==num){
            return 1;
        }
    }
    return 0;
}
int criarArqC(char nomeArqA[], char nomeArqB[]){
    int tamA = contArq(nomeArqA), tamB = contArq(nomeArqB), i;
    float num;
    FILE *arqA, *arqB, *arqC;

    arqA= fopen (nomeArqA, "r");
    arqB= fopen (nomeArqB, "r");

    float vetorA[tamA];
    float vetorB[tamB];

    if(arqA&&arqB){
        for(i=0;fscanf(arqA, "%f", &num) != EOF ; i++){
            vetorA[i]=num;
        }
        for(i=0;fscanf(arqB, "%f", &num) != EOF ; i++){
            vetorB[i]=num;
        }
    } else{
        printf("Não foi possível abrir o(s) arquivo(s)!");
        fclose(arqA);
        fclose(arqB);
        return 0;
    }
    int tamT=tamA+tamB;
    fclose(arqA);
    fclose(arqB);
    arqC=fopen("ArqC.txt", "w");

    if(arqC){
        for(i=0;i<tamT;i++){
            if(acharIgual(vetorA, vetorB[i], tamA)){
                fprintf(arqC, "%f\n", vetorB[i]);
            }
        }
        printf("Arquivo criado com sucesso!");
        fclose(arqC);
    } else{
        printf("Não foi possível criar o arquivo!");
        return 0;
    }
    return 1;
}