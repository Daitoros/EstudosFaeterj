#include <stdio.h>

// Questão 01:
// Desenvolver uma função que, dado um arquivo
// texto, verifique o número de caracteres no
// mesmo.

int caracArq(char nomeArq[]){
    FILE* arq;
    int cont=0;
    char c;
    arq = fopen (nomeArq, "r");

    if(arq){
        for(cont=0; (fscanf (arq, "%c", &c) != EOF);cont++);   //end of file
        fclose(arq);
        return cont;
    } else{
        return -1;
    }
}

