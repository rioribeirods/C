#include <stdio.h>

int main(){
    float num;
    printf("choose your mass in lbs: ");
    scanf("%f", &num);
    num = num * 0.45;
    printf("the mass you chose in kg is: %.3f", num);
    return 0;
}