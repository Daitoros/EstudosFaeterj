#include <stdio.h>
#include <ctype.h>

// Questão 03:
// Desenvolver uma função que, dado um arquivo
// texto, verifique o número de letras existentes
// no mesmo (entendendo que no arquivo podem
// existir letras, algarismos e símbolos).

int caracArq(char nomeArq[], char carac){
    FILE* arq;
    int cont=0;
    char c;

    arq = fopen (nomeArq, "r");

    if(arq){
        while (fscanf (arq, "%c", &c) != EOF){
            c=toupper(c);
            if(c>100 && c<133){
                cont++;
            }
        }  //end of file
        fclose(arq);
        return cont;
    } else{
        return 0;
    }
}

