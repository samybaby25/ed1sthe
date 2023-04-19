#ifndef ALUNO_H
#define ALUNO_H

#define MAX_ALUNOS 100

typedef struct {
    int matricula;
    char nome[50];
    float notas;
} Aluno;

typedef struct {
    Aluno elementos[MAX_ALUNOS];
    int tamanho;
} ListaEstatica;

void inicializa_lista(ListaEstatica *lista);
void insere_fim(ListaEstatica *lista, Aluno aluno);
void remove_posicao(ListaEstatica *lista, int posicao);
void imprime_lista(ListaEstatica lista);

#endif

