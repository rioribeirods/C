#include <stdio.h>
#include <stdlib.h>

int main(){
    int quantidade, *ponteiro;

    ponteiro = (int*)malloc(3 * sizeof(int));

    printf("Informe quantos valores deseja cadastrar: ");
    scanf("%d", &quantidade);
    
    if(quantidade > 3){
        ponteiro = (int*)realloc(ponteiro, sizeof(int) * quantidade);
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Informe o valor %d de %d: ", i + 1, quantidade);
        scanf("%d", &ponteiro[i]);
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Na posição %d temos o valor: %d\n", i, ponteiro[i]);
    }
}