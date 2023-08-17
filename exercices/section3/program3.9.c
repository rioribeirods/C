#include <stdio.h>

int main(){
    float num;
    printf("choose your kelvin temperature: ");
    scanf("%f", &num);
    num = num - 273.15;
    printf("the temperature you chose in celsius is: %.3f", num);
    return 0;
}