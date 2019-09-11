#include <stdio.h>
#include <stdlib.h>
#include "PilhaDin.h" //inclui os Protótipos


typedef struct elemento Elem;

//Definição do tipo Pilha
struct elemento{
    Aluno dados;
    Elem *prox;//struct elemento *prox;
};

//ponteiro para um ponteiro
Pilha* cria_Pilha(){
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL)
        *pi = NULL;
    return pi;
}

void libera_Pilha(Pilha* pi){
    if(pi != NULL){
        Elem* no;
        while((*pi) != NULL){
            no = *pi;
            *pi = (*pi)->prox;
            free(no);
        }
        free(pi);
    }
}

int consulta_topo_Pilha(Pilha* pi, struct aluno *al){
    if(pi == NULL){
        return 0;
    }
    if((*pi) == NULL){
        return 0;
    }
    *al = (*pi) -> dados;
    return 1;
}

int insere_Pilha(Pilha* pi, struct aluno al){
    if(pi == NULL)
        return 0;
    Elem *no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no -> dados = al;
    no ->prox = (*pi);
    *pi = no;
    return 1;
}

int remove_Pilha(Pilha *pi){
    if(pi == NULL)
        return 0;
    if((*pi) == NULL)
        return 0;
    Elem* no = *pi;
    *pi = no->prox;
    free(no);
    return 1;
}

int tamanho_Pilha(Pilha *pi){
    if ( pi == NULL ){
        return 0;
    }
    int cont = 0;
    Elem* no = *pi;
    while(no != NULL){
        cont ++;
        no = no->prox;
    }
    return cont;
}

bool Pilha_cheia(Pilha *pi){
    return false;
}

bool Pilha_vazia(Pilha *pi){
    if(pi == NULL)
        return false;
    if((*pi) == NULL)
        return true;
    return false;
}

void imprime_Pilha(Pilha* pi){
    if(pi == NULL)
        return 0;
    Elem* no = *pi;
    while(no != NULL){
        printf("Matricula: %d\n", no->dados.matricula);
        printf("Nome: %s\n", no->dados.nome);
        printf("Notas: %f %f %f\n", no->dados.n1, no->dados.n2, no->dados.n3);
        printf("----------------------------------\n");
        no = no->prox;
    }
}
