#include <stdio.h>

int main(){
    float num;
    printf("choose your real number: ");
    scanf("%f", &num);
    num = num*num;
    printf("the real number you chose squared is: %.3f", num);
    return 0;
}