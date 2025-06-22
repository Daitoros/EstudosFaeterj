#include <stdio.h>
#include <limits.h>
#include <float.h>

// Questão 06:
// Desenvolver uma função que, dados dois
// arquivos textos arqA e arqB, crie um novo
// arquivo arqC, considerando que:
//  arqA e arqB contém números reais,
// um por linha, ordenados
// crescentemente e sem repetição no
// arquivo;
//  arqC deve conter todos os números
// dos dois arquivos originais;
//  Assim como arqA e arqB, arqC
// também não possuirá repetições de elementos e estes deverão estar
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

int criarArqC(char nomeArqA[], char nomeArqB[]){
    int tamA = contArq(nomeArqA), tamB = contArq(nomeArqB), i, tamT=tamA+tamB;
    float vetorT[tamT], num;
    FILE *arqA, *arqB, *arqC;

    arqA= fopen (nomeArqA, "r");
    arqB= fopen (nomeArqB, "r");

    if(arqA&&arqB){
        for(i=0;fscanf(arqA, "%f", &num) != EOF ; i++){
            vetorT[i]=num;
        }
        while (fscanf(arqB, "%f", &num) != EOF )
        {
            vetorT[i]=num;
            i++;
        }
    } else{
        printf("Não foi possível abrir o(s) arquivo(s)!");
        fclose(arqA);
        fclose(arqB);
        return 0;
    }
    fclose(arqA);
    fclose(arqB);
    ordenarVetFCrec(vetorT, tamT);
    arqC=fopen("ArqC.txt", "w");

    if(arqC){
        for(i=0;i<tamT;i++){
            fprintf(arqC, "%f", vetorT[i]);
        }
        printf("Arquivo criado com sucesso!");
        fclose(arqC);
    } else{
        printf("Não foi possível criar o arquivo!");
        return 0;
    }
    return 1;
}