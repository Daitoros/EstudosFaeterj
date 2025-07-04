// Desafio 1: Explorando Endereços e Valores
// Objetivo: Compreender a relação entre variáveis, seus endereços e os valores que os ponteiros acessam.
// Enunciado:
// Crie um programa em C que declare uma variável inteira idade e a inicialize com o valor 25. Em seguida, declare um ponteiro para inteiro ptrIdade e faça com que ele aponte para a variável idade.
// Seu programa deve:
// Imprimir o valor da variável idade diretamente.
// Imprimir o valor de idade usando o ponteiro ptrIdade (desreferenciando-o).
// Imprimir o endereço de memória da variável idade usando o operador &.
// Imprimir o valor armazenado no ponteiro ptrIdade (que é o endereço de idade).
// Imprimir o endereço de memória do próprio ponteiro ptrIdade (onde o ponteiro está guardado).
// Dica: Lembre-se de usar o formatador %p no printf para imprimir endereços de memória.

void main(){



int idade = 25;

int *ptrIdade = &idade;



printf("%d", *ptrIdade);

printf("%d", &ptrIdade);



}
