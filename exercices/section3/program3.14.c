#include <stdio.h>

int main(){
    float num;
    printf("choose your angle in degrees: ");
    scanf("%f", &num);
    num = num * 3.14/180;
    printf("the angle you chose in radians is: %.3f", num);
    return 0;
}