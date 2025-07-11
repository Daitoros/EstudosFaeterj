// Exercício: Contagem de Elementos Distintos Comuns (Usando Ponteiros)
// Contexto:
// Em um sistema de gerenciamento de dados, você precisa verificar a sobreposição de informações entre duas coleções de IDs numéricos. É garantido que, em cada coleção individual, todos os IDs são únicos (não há repetições dentro de uma mesma coleção).
// Desenvolva uma função em C que, dados dois vetores de inteiros (representando as coleções de IDs), determine o número de IDs que aparecem em AMBAS as coleções.
// Requisitos Essenciais:
// Assinatura da Função: Sua função principal deve ter a seguinte assinatura (ou equivalente, se você preferir renomear):
// C
// int contarIDsComuns(const int *colecao1, int tamanho1, const int *colecao2, int tamanho2);
// Manipulação por Ponteiros: A solução deve percorrer os vetores e manipular seus elementos obrigatoriamente através de ponteiros para inteiros (int*). O uso de índices de array [] deve ser evitado ao máximo na lógica de iteração e acesso aos elementos (exceto, talvez, na main para inicializar os vetores se for conveniente).
// Eficiência: Pense em como otimizar a busca para evitar processamento desnecessário, aproveitando a condição de que não há repetição dentro de cada vetor.
// Retorno: A função deve retornar um único valor inteiro: o total de IDs comuns encontrados.
// Exemplo de Cenário:
// colecao1: {5, 12, 3, 8, 20} (tamanho 5)
// colecao2: {20, 1, 8, 15, 30, 3} (tamanho 6)
// IDs Comuns Esperados: 20, 8, 3.
// Retorno da Função: 3
// Observações:
// Você pode (e é encorajado a) criar funções auxiliares para ajudar na sua função principal (por exemplo, uma função para verificar se um elemento existe em um dado vetor).
// Preste muita atenção às condições de parada dos seus loops ao usar ponteiros!
// Sugestão de Passos para Pensar:
// Como sua função principal (contarIDsComuns) irá iterar sobre os elementos da primeira coleção (colecao1) usando ponteiros? Qual será a condição de parada?
// Para cada ID da colecao1, como você irá verificar se ele existe na colecao2?
// Você precisará de uma função auxiliar para fazer essa busca em colecao2? Se sim, como essa função auxiliar seria implementada usando ponteiros e sabendo o tamanho da colecao2?
// Como você contará os IDs comuns sem contá-los mais de uma vez (lembre-se que cada ID já é único dentro de sua própria coleção)?
#include <stdio.h>

int acharIgual(int *v, int tamV, int num){
    int *ptrFim= v+tamV, *ptr;

    for(ptr=v;ptr<ptrFim;ptr++){
        if(*ptr==num){
            return 1;
        }
    }
    return 0;
}
int idComum(int *v1, int tamV1, int *v2, int tamV2){
    int cont=0, *ptr1Fim= v1+tamV1, *ptr1;

    for(ptr1=v1;ptr1<ptr1Fim;ptr1++){
        if(acharIgual(v2, tamV2, *ptr1)){
            cont++;
        }
    }
    return cont;
}