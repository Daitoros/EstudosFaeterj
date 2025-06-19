#include <stdio.h>
#include <limits.h>

// Questão 04:
// Desenvolver uma função que, dado um arquivo
// texto contendo números, determine se estes
// encontram-se ordenados crescentemente.

int ordenado(char nomeArq[], char carac){
    FILE* arq;
    int i, num, ant = INT_MIN;

    arq = fopen (nomeArq, "r");

    if(arq){
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

