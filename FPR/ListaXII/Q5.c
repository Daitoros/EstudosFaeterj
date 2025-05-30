#include <stdio.h>
#include <limits.h>

// Questão 05:
// Faça uma função que, dado um arquivo A
// contendo números reais, um por linha, crie um
// novo arquivo B contendo os mesmos
// elementos de A, porém ordenados
// decrescentemente e sem repetição.

int ordenado(char nomeArq[], char carac){
    FILE* arq;
    int i, num, ant = INT_MIN;

    arq = fopen (nomeArq, "r");

    if(arq!= NULL){


        for (i=0;fscanf (arq, "%d", &num) != EOF;i++)
		{
            if(ant>num){
                fclose(arq);
                return 0;
            }
			ant=num;
		}
        fclose(arq);
        return 1;
    } else{
        return -1;
    }
}

