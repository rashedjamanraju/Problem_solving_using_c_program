#include<stdio.h>
int main(){
    float inch,feet;
    printf("Enter an amount in inch unit: ");
    scanf("%g",&inch);
    feet=(inch/12);
    printf("The amount is in feet unit = %g ft",feet);
    return 0;
}
