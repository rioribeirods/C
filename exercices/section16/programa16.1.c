#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5];
    int *ponteiro;

    ponteiro = (int*)malloc(sizeof(vetor));

    for(int i = 0; i < 5; i++){
        printf("informe o valor %d de 5: ", i + 1);
        scanf("%d", &ponteiro[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("valor na posicao %d do vetor: %d\n", i+1, ponteiro[i]);
    }

    free(ponteiro);
    ponteiro = NULL;

    return 0;
}