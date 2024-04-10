#include "lista_linear.h"
#include <stdio.h>
#include <stdlib.h>

// Struct para armazenar informações
struct lista_linear {
    int pos;        // indica posição
    int dado[TAM];      // Vetor para receber valores
};

// Aloca memoria para criar list
lista *criar_lista(){
    lista *li;
    li = (lista*) malloc(sizeof (lista));
    if (li!=NULL)
        li->pos = 0;    // se a alocação de memória foi bem sucedida, inicio a lista apontando para a primeira posição dela
    return li;
}

// Função para jogar indice para final da lista, retorno boleano
int lista_cheia(lista *li){
    if(li == NULL)
        return -1;
    return (li->pos == TAM);    // teste para ver se o ponteiro aponta para o final da lista
}

// Função para inserir no final da lista
int inserir_final(lista *li, int valor){
    if (li == NULL)    // teste para ver se a lista é nula
        return 0;
    if (lista_cheia(li))   // teste para ver se a lista está cheia
        return 0;
    li->dado[li->pos] = valor; // insere o valor na posição atual da lista
    li->pos++;     // incrementa o ponteiro para a posição da lista para a proxima posição vazia
    return 1;
}

// Função para remover ultima informação inserida na lista
int remover_final_lista(lista *li){
    if(li == NULL)
        return 0;
    if (li->pos == 0)   // teste para ver se a lista está vazia
        return 0;
    li->pos--;  // decrementa o ponteiro para a posição anterior da lista, indicando que a proxima posição está disponivel para ser sobrescrita
    return 1;
}

int inserir_inicio(lista *li, int valor){
    if (li == NULL)
        return 0;
    if(li->pos == 0) {      // teste para ver se a lista está vazia, se sim, insere o valor na posição atual apontada pelo ponteiro
        li->dado[li->pos] = valor;
        li->pos++;  // incrementa o ponteiro para a proxima posição vazia da lista
        return 1;
    }
    if (lista_cheia(li))    // teste para ver se a lista está cheia
        return 0;
    for (int i = li->pos; i >= 0 ; i--)     // Loop para mover todos os elementos uma posição para frente na lista
        li->dado[i+1] = li->dado[i];
    li->dado[0] = valor;    // insere o valor na primeira posição da lista
    li->pos++;      // incrementa o ponteiro para a proxima posição da lista
    return 1;
}

// Função para busca sequencial
int busca_sequencia(lista *li, int valor){
    if(li == NULL)  // teste para ver se a lista é nula
        return 0;
    int i = 0;
    while (li->dado[i] != valor){   // iteração para varrer a lista do começo ao fim
        i++;
        if(i > li->pos) // critério de parada caso a variável de iteração ultrapasse o fim da lista
            return -1;
    }
    return li->dado[i]; // retorna o valor contido na lista de acordo com a posição encontrada
}

// função para busca binário da lista
int busca_binaria(lista *li, int valor){
    if(li == NULL)  // teste se a lista é nula
        return 0;
    int inicio = 0, meio = 0, fim = li->pos-1;  // define as variáveis, fim recebe o valor da posição atual da lista menos 1 pois a lista aponta sempre pro proximo elemento que está vazio
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;  // método da bissecção
        if (li->dado[meio] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    if (li->dado[meio] != valor)    // teste para ver se o elemento está na lista, se não, retorna falso
        return -1;
    return li->dado[meio];  // retorna o valor do elemento na lista
}

// Função para inserir ordenadamente
int inserir_ordenadamente(lista *li, int valor){
    if (li == NULL)     // teste pra ver se a lista é nula
        return 0;
    if (li->pos == TAM) // teste para ver se a lista está cheia, se sim, encerra o programa
        return 0;
    if(li->pos == 0) {  // teste para ver se a lista está vazia, se sim, insere no começo dela
        li->dado[li->pos] = valor;
        li->pos++;
        return 1;
    }
    int i = li->pos;    // variavel de iteração que recebe a posição atual da lista, para não modificar o ponteiro que aponta pra posição da lista
    while (li->dado[i-1] >= valor) {
        li->dado[i] = li->dado[i-1];    // enquanto não encontra o elemento, move todos os elementos uma casa pra frente um a um
        i--;
    }
    li->dado[i] = valor;    // apos encontrar a posição de inserção, insere o valor nessa posição
    li->pos++;      // incremente a posição da lista para apontar para o ultimo elemento já que a lista foi movida pra frente
    return 1;
}

// Função para imprimir a lista
void imprimir_lista(lista *li){
    for (int i = 0; i < li->pos; ++i) {     // loop para imprimir o valor em cada posição apontada pelo ponteiro
        printf("%d\t", li->dado[i]);
    }
    printf("\n");
}