#include <stdio.h>

int main(){
    float num;
    printf("choose your celsius temperature: ");
    scanf("%f", &num);
    num = num + 273.15;
    printf("the temperature you chose in kelvin is: %.3f", num);
    return 0;
}