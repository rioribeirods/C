#include <stdio.h>

int main(){
    float num;
    printf("choose your celsius temperature: ");
    scanf("%f", &num);
    num = 5.0 * (num - 32.0)/9.0;
    printf("the temperature you chose in fahrenheit is: %.3f", num);
    return 0;
}