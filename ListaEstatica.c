// arquivo listaestatica.c
#include <stdio.h>
#include "listaestatica.h"

ListaEstatica cria_lista() {
    ListaEstatica lista;
    lista.tamanho = 0;
    return lista;
}

int insere_aluno(ListaEstatica *lista, Aluno aluno) {
    if (lista->tamanho == MAX_ALUNOS) {
        return -1;
    }
    lista->alunos[lista->tamanho] = aluno;
    lista->tamanho++;
    return 0;
}

void imprime_alunos(ListaEstatica lista) {
    printf("Alunos:\n");
    for (int i = 0; i < lista.tamanho; i++) {
        printf("Nome: %s\n", lista.alunos[i].nome);
        printf("Matricula: %d\n", lista.alunos[i].matricula);
        printf("Nota: %.2f\n", lista.alunos[i].nota);
    }
}

