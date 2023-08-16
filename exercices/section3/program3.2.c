#include <stdio.h>

int main(){
    float num;
    printf("choose your real number: ");
    scanf("%f", &num);
    printf("the real number you chose is: %.3f", num);
    return 0;
}