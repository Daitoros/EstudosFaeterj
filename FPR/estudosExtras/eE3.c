// Sábado (05/07): Recursividade e Substrings (AV1-P2-Q4)
// Foco: Implementação de funções recursivas e manipulação de strings.
// Implementação substr e substrRec (AV1-P2-Q4):
// Defina a função substrRec que recebe a string s1, a posição inicial p1 e a posição final p2 (ou até o final se p2 extrapolar), e retorna a substring s2. Esta deve ser recursiva.
// Defina a função
//  substr principal que recebe os parâmetros, valida p1 (válida, inferior ou igual a p2). Se inválida, retorna 0; caso contrário, chama
//  substrRec e retorna s2 e 1.
// Considere a string s1 como um char[]. A s2 também será um char[] que você preencherá.
// Dica: A recursão em substrRec pode ir construindo a substring caractere por caractere ou chamando-se para o próximo caractere.
// Testes da Substring:
// Teste a função substr com casos válidos:
// s1 = "abcdefg", p1 = 2, p2 = 4 (espera "cde")
// s1 = "programacao", p1 = 0, p2 = 5 (espera "progra")
// s1 = "teste", p1 = 2, p2 = 10 (espera "ste") - p2 extrapola.
// Teste com casos inválidos de p1 (ex: p1 = -1, p1 = 10 para string de 5 caracteres, p1 = 5, p2 = 2).


// Questão 04 [2,5 pontos]: 
// Considere o problema de criar uma substring s2 a 
// partir da string s1, de forma que s2 contenha os 
// caracteres de s1 da posição p1 à p2 (ou até o seu 
// final, caso p2 extrapole o seu tamanho). Desenvolver 
// duas funções conforme descrito abaixo: 
//  substr: função principal que receberá os 
// parâmetros e validará a posição inicial p1: i. deve 
// ser uma posição válida; ii. deve ser inferior ou 
// igual a p2. Se a posição for inválida, o valor 0 
// deverá ser retornado; caso contrário, a função 
// chamará substrRec e, ao final, retornará s2 e o 
// valor 1; 
//  substrRec: função recursiva que, dados os valores 
// de s1, p1 e p2, retornará a substring s2. 


#include <stdio.h>
#include <string.h>

void substrRec(char str[], int p1, int p2, char str2[], int cont){
    if((p1<=p2)&&(str[p1]!='\0')){
        str2[cont]=str[p1];
        substrRec(str, p1+1, p2, str2, cont+1);
    }else{
        str2[cont]='\0';
        return;
    }
}

int substr(int p1, int p2, char str[], char str2[]){
    int cont=0;
    if((p1<0||p1>p2)||(p1>=strlen(str))){
        return 0;
    }else{
        substrRec(str, p1, p2, str2, cont);
        return 1;
    }
}
