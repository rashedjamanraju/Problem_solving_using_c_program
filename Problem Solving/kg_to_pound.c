#include<stdio.h>
int main(){
    float pound,kg;
    printf("Enter an amount in kg unit: ");
    scanf("%g",&kg);
    pound=2.2*kg;
    printf("The amount is in pound unit = %g lb",pound);
    return 0;
}