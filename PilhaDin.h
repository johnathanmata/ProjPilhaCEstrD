#include <stdbool.h>
typedef struct elemento* Pilha;
typedef struct aluno Aluno;

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};



Pilha* cria_Pilha();
void libera_Pilha(Pilha* pi);
int consulta_topo_Pilha(Pilha* pi, struct aluno *al);
int insere_Pilha(Pilha* pi, struct aluno al);
int remove_Pilha(Pilha* pi);
int tamanho_Pilha(Pilha* pi);
bool Pilha_vazia(Pilha* pi);
bool Pilha_cheia(Pilha* pi);
void imprime_Pilha(Pilha* pi);
