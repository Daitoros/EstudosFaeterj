#include <stdio.h>
#include <limits.h>
#include <float.h>

// Questão 05:
// Faça uma função que, dado um arquivo A
// contendo números reais, um por linha, crie um
// novo arquivo B contendo os mesmos
// elementos de A, porém ordenados
// decrescentemente e sem repetição.


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

void ordenarVetFDec(float vet[], int tamVet){
    int i, j, iM;
    float num;
    for(i=0;i<tamVet; i++){
        float maior=FLT_MIN;
        for(j=i;j<tamVet;j++){
            num=vet[j];
            if(num>maior){
                maior=num;
                iM=j;
            }
        }
        vet[iM]=vet[i];
        vet[i]=maior;
    }
}

int criarDec(char nomeArqA[]){
    FILE *arqA, *arqB;
    int tamVet=contArq(nomeArqA), i;
    float maior=FLT_MAX, num, vet[tamVet];

    arqA = fopen (nomeArqA, "r");
    arqB = fopen ("arqB.txt", "w");

    if(arqA&&arqB){
        for(i=0; fscanf(arqA, "%f", &num) != EOF ;i++) 
        {
            vet[i]=num;
        }
        ordenarVetFDec(vet, tamVet);

        for(i=0; i<tamVet; i++){
            fprintf(arqB, "%f", vet[i]);
        }
        fclose(arqA);
        fclose(arqB);

        return 1;
    } else{
        printf("Não foi possível abrir o arquivo!");
        fclose(arqA);
        fclose(arqB);
        return 0;
    }

}