#ifndef PROGRAMACAO_2_IFSC_LISTA_LINEAR_H
#define PROGRAMACAO_2_IFSC_LISTA_LINEAR_H
#define TAM 100

typedef struct {
    double value;
    int error;
} result_t;

typedef struct lista_linear lista;
lista *criar_lista();
int inserir_final(lista *li, int valor);
int lista_cheia(lista *li);
int remover_final_lista(lista *li);
void imprimir_lista(lista *li);
int busca_sequencia(lista *li, int valor);
int inserir_inicio(lista *li, int valor);
int inserir_ordenadamente(lista *li, int valor);
int busca_binaria(lista *li, int valor);


#endif //PROGRAMACAO_2_IFSC_LISTA_LINEAR_H
