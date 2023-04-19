#include <stdio.h>
#include "aluno.h"

void inicializa_lista(ListaEstatica *lista) {
    lista->tamanho = 0;
}

void insere_fim(ListaEstatica *lista, Aluno aluno) {
    if (lista->tamanho == MAX_ALUNOS) {
        printf("Erro: lista cheia!\n");
        return;
    }

    lista->elementos[lista->tamanho] = aluno;
    lista->tamanho++;
}

void remove_posicao(ListaEstatica *lista, int posicao) {
    if (posicao < 0 || posicao >= lista->tamanho) {
        printf("Erro: posição inválida!\n");
        return;
    }

    for (int i = posicao; i < lista->tamanho - 1; i++) {
        lista->elementos[i] = lista->elementos[i+1];
    }

    lista->tamanho--;
}

void imprime_lista(ListaEstatica lista) {
    for (int i = 0; i < lista.tamanho; i++) {
        printf("Matrícula: %d\n", lista.elementos[i].matricula);
        printf("Nome: %s\n", lista.elementos[i].nome);
        printf("Nota: %.2f\n", lista.elementos[i].notas);
        printf("\n");
    }
}

