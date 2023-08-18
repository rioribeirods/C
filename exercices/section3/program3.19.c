#include <stdio.h>

int main(){
    float num;
    printf("choose your volume in liters: ");
    scanf("%f", &num);
    num = num / 1000;
    printf("the length you chose in m³ is: %.3f", num);
    return 0;
}