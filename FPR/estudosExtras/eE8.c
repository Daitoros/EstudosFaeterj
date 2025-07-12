// Exercício: Organização de Livros em uma Biblioteca
// Contexto:
// Você está desenvolvendo um sistema simples para organizar os livros em uma biblioteca. Cada livro possui algumas informações importantes que precisam ser armazenadas e, ocasionalmente, os livros precisam ser listados em uma ordem específica.
// Desenvolva uma função em C que ordene um vetor de struct Livro de acordo com os seguintes critérios:
// Gênero do Livro (ordem alfabética crescente).
// No caso de gêneros iguais, pelo Título do Livro (ordem alfabética crescente).
// No caso de gêneros e títulos iguais, pelo Ano de Publicação (ordem numérica crescente).
// Requisitos Essenciais:
// Definição da Struct: Crie a struct Livro com os seguintes campos:
// id (int): Código único de identificação do livro.
// titulo (string): Título do livro (ex: "O Senhor dos Aneis").
// autor (string): Nome do autor (ex: "J.R.R. Tolkien").
// genero (string): Gênero do livro (ex: "Fantasia", "Ficcao Cientifica", "Romance").
// anoPublicacao (int): Ano em que o livro foi publicado.
// Assinatura da Função: Sua função de ordenação deve ter a seguinte assinatura (ou equivalente, se você preferir renomear):
// C
// void ordenarLivros(Livro *vetorLivros, int numLivros);
// Manipulação de Strings: Para a ordenação alfabética de genero e titulo, você deve utilizar as funções de comparação de strings da biblioteca <string.h> (como strcmp).
// Método de Ordenação:
// Implemente um algoritmo de ordenação de sua escolha (Bubble Sort, Selection Sort, Insertion Sort, etc. – o que você se sentir mais confortável e souber implementar).
// Ao final do código (fora da função), informe qual método de ordenação você utilizou e justifique sua escolha/identificação (assim como na Questão 04 original).
// Exemplo de Cenário para Teste:
// Livro 1: ID=101, Título="O Hobbit", Autor="Tolkien", Gênero="Fantasia", Ano=1937
// Livro 2: ID=103, Título="Duna", Autor="Herbert", Gênero="Ficcao Cientifica", Ano=1965
// Livro 3: ID=102, Título="A Sociedade do Anel", Autor="Tolkien", Gênero="Fantasia", Ano=1954
// Livro 4: ID=104, Título="Guia do Mochileiro", Autor="Adams", Gênero="Ficcao Cientifica", Ano=1979
// Livro 5: ID=105, Título="O Hobbit", Autor="Tolkien", Gênero="Fantasia", Ano=1960 // Duplicata de título/gênero com L1, mas ano diferente
// Livro 6: ID=106, Título="Orgulho e Preconceito", Autor="Austen", Gênero="Romance", Ano=1813
// Ordem Esperada após a Ordenação:
// Gênero: "Fantasia"
// Livro 1: ID=101, Título="O Hobbit", Gênero="Fantasia", Ano=1937
// Livro 5: ID=105, Título="O Hobbit", Gênero="Fantasia", Ano=1960
// Livro 3: ID=102, Título="A Sociedade do Anel", Gênero="Fantasia", Ano=1954
// Gênero: "Ficcao Cientifica"
// Livro 2: ID=103, Título="Duna", Gênero="Ficcao Cientifica", Ano=1965
// Livro 4: ID=104, Título="Guia do Mochileiro", Gênero="Ficcao Cientifica", Ano=1979
// Gênero: "Romance"
// Livro 6: ID=106, Título="Orgulho e Preconceito", Gênero="Romance", Ano=1813
// Observações:
// Preste atenção aos tamanhos dos arrays de caracteres dentro da struct para evitar estouros de buffer.
// Lembre-se que o critério de desempate só é avaliado se os critérios anteriores forem iguais.
// Boa sorte com o exercício! Quando estiver pronto(a), pode me mostrar seu código e a justificativa do método.

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int id;
    char titulo[20];
    char autor[20];
    char genero[20];
    int ano;
}TLivro;


void ordenarLivros(TLivro *livros, int tamV){
    int i=0, j=0, k=0, l, menor=i;
    char cl1, cl2;
    TLivro aux;
    for(i=0;i<tamV;i++){
        menor=i;
        for(k=i+1;k<tamV;k++){
            if(strcmp(livros[menor].genero,livros[k].genero)<0){
                menor=k;
            } else{
                if(strcmp(livros[menor].genero, livros[k].genero)==0){

                }
            }
        }
        aux=livros[i];
        livros[i]=livros[menor];
        livros[menor]=aux;
    }
}