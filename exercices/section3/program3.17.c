#include <stdio.h>

int main(){
    float num;
    printf("choose your length in cm: ");
    scanf("%f", &num);
    num = num / 2.54;
    printf("the length you chose in inghes is: %.3f", num);
    return 0;
}