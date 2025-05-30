#include <stdio.h>

// Questão 01:
// Desenvolver uma função que, dado um arquivo
// texto, verifique o número de caracteres no
// mesmo.

int caracArq(char nomeArq[]){
    FILE* arq;
    int cont=0;

    arq = fopen (nomeArq, "r");

    if(arq!= NULL){
        while (fscanf (arq, "%c", cont++) != EOF)  //end of file
        fclose(arq);
        return cont;
    } else{
        return 0;
    }
}

