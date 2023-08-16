#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("choose 3 integers to sum: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    int num4 = num1 + num2 + num3;
    printf("the result is: %d", num4);
    return 0;
}