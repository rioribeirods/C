#include <stdio.h>

int main(){
    float num;
    printf("choose your mass in kg: ");
    scanf("%f", &num);
    num = num / 0.45;
    printf("the mass you chose in lbs is: %.3f", num);
    return 0;
}