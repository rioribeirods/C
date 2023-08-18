#include <stdio.h>

int main(){
    float num;
    printf("choose your angle in radians: ");
    scanf("%f", &num);
    num = num * 180/3.14;
    printf("the angle you chose in degrees is: %.3f", num);
    return 0;
}