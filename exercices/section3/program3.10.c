#include <stdio.h>

int main(){
    float num;
    printf("choose your speed in km/h format: ");
    scanf("%f", &num);
    num = num/3.6;
    printf("the speed you chose in m/s format is: %.3f", num);
    return 0;
}