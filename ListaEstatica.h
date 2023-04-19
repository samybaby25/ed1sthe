// arquivo listaestatica.h
#define MAX_ALUNOS 100

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Aluno;

typedef struct {
    Aluno alunos[MAX_ALUNOS];
    int tamanho;
} ListaEstatica;

ListaEstatica cria_lista();
int insere_aluno(ListaEstatica *lista, Aluno aluno);
void imprime_alunos(ListaEstatica lista);
