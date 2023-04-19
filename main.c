// arquivo main.c
#include <stdio.h>
#include "listaestatica.h"

int main() {
    ListaEstatica lista = cria_lista();

    Aluno aluno;
    printf("Informe o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Informe a matricula do aluno: ");
    scanf("%d", &aluno.matricula);
    printf("Informe a nota do aluno: ");
    scanf("%f", &aluno.nota);

    // Inserir aluno na lista
    if (insere_aluno(&lista, aluno) == -1) {
        printf("Erro: lista cheia\n");
    }

    imprime_alunos(lista);

    return 0;
}
