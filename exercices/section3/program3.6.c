#include <stdio.h>

int main(){
    float num;
    printf("choose your celsius temperature: ");
    scanf("%f", &num);
    num = num * (9.0/5.0) + 32.0;
    printf("the temperature you chose in fahrenheit is: %.3f", num);
    return 0;
}