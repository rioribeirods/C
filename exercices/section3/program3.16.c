#include <stdio.h>

int main(){
    float num;
    printf("choose your length in inches: ");
    scanf("%f", &num);
    num = num * 2.54;
    printf("the length you chose in cm is: %.3f", num);
    return 0;
}