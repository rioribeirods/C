#include <stdio.h>

int main(){
    printf("Escolha uma opcao:\n1 - Soma de 2 numeros.\n2 - Diferenca entre 2 numeros.\n3 - Produto entre 2 numeros.\n4 - Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    int escolha, a, b, resultado; 
    scanf("%d", &escolha);
    switch(escolha) {
        case 1:
        printf("Escolha 2 numeros a serem somados:\n");
        scanf("%d %d", &a, &b);
        resultado = a + b;
        printf("O resultado eh: %d", resultado);
        break;
        case 2:
        printf("Escolha 2 numeros a serem subtraidos:\n");
        scanf("%d %d", &a, &b);
        resultado = a - b;
        printf("O resultado eh: %d", resultado);
        break;
        case 3:
        printf("Escolha 2 numeros a serem multiplicados:\n");
        scanf("%d %d", &a, &b);
        resultado = a * b;
        printf("O resultado eh: %d", resultado);
        break;
        case 4:
        printf("Escolha 2 numeros a serem divididos:\n");
        scanf("%d %d", &a, &b);
        resultado = a / b;
        printf("O resultado eh: %d", resultado);
        break;
    }
    return 0;
}