#include <stdio.h>

int main(){
    float num;
    printf("choose your volume in m³: ");
    scanf("%f", &num);
    num = num * 1000;
    printf("the length you chose in liters is: %.3f", num);
    return 0;
}