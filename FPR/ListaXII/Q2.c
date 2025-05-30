#include <stdio.h>

// Questão 02:
// Desenvolver uma função que, dado um arquivo
// texto, verifique o número de vezes que um
// determinado caracter aparece no arquivo.

int caracArq(char nomeArq[], char carac){
    FILE* arq;
    int cont=0;
    char c;

    arq = fopen (nomeArq, "r");

    if(arq!= NULL){
        while (fscanf (arq, "%c", &c) != EOF){
            if(c==carac){
                cont++;
            }
        }  //end of file
        fclose(arq);
        return cont;
    } else{
        return 0;
    }
}

