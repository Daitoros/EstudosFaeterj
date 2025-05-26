
#include <stdio.h>

// Questão 04:
// Considere a existência de um vetor de structs
// com quant posições, onde cada uma destas
// armazena os seguintes dados sobre um grupo
// de pessoas: nome (string), gênero (char) e
// idade (int). Pede-se uma função que determine
// se os elementos deste vetor estão ordenados e
// retorne 1, caso estejam ordenados, e 0, caso
// contrário.
// Observação: o vetor será considerado ordenado se
// estiver organizado crescentemente em função da
// idade. Porém, no caso de pessoas com a mesma
// idade, estas devem estar ordenadas crescentemente
// pelo nome.

typedef struct {
    char nome[10];
    char genero;
    int idade;
}TFunc;

void ordenados(TFunc arr[], int quant){
    int i, j, menor;
    
    for(i=1;i<quant;i++){
        menor=arr[i].idade;
        j=i-1;
        while (j >= 0 && arr[j].idade > menor) {
            arr[j + 1].idade = arr[j].idade; 
            j = j - 1;    
        }
        arr[j + 1].idade=menor; 
    }
   
}
int main()
{
    printf("Hello World");

    return 0;
}
