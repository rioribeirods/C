#include <stdio.h>

int main(){
    float num;
    printf("choose your distance in miles format: ");
    scanf("%f", &num);
    num = num * 1.61;
    printf("the distance you chose in kilometers format is: %.3f", num);
    return 0;
}