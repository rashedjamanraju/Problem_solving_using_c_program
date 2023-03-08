#include<stdio.h>
int main(){
    float mile,km;
    printf("Enter an amount in mile unit: ");
    scanf("%g",&mile);
    km=mile*1.609344;
    printf("The amount is in km unit = %g km",km);
    return 0;
}