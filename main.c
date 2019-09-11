#include <stdio.h>
#include <stdlib.h>
#include "PilhaDin.h"

int main()
{
    Aluno a[4] = {{2,"Andre",9.5,7.8,8.5} , {4,"Ricardo",7,8,9} , {1,"Bianca",9.7,6.7,8.4} , {3,"Ana",5.7,6.1,7.4}};
    Pilha *pi = cria_Pilha();
    printf("Tamanho: %d \n\n\n\n", tamanho_Pilha(pi));
    int i;

    for(i = 0; i<4; i++){
        insere_Pilha(pi, a[i]);
    }
    imprime_Pilha(pi);
    printf("Tamanho: %d\n\n\n\\n", tamanho_Pilha(pi));

    for(i = 0; i<4; i++){
        remove_Pilha(pi);
    }
    printf("Tamanho: %d\n\n\n\\n", tamanho_Pilha(pi));
}
