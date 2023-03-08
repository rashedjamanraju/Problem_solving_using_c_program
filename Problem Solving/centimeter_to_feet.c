#include <stdio.h>
int main(){
    float cm,ft;
    printf("Enter an amount in cm unit: ");
    scanf("%g",&cm);
    ft=(cm/30.48);
    printf("The amount is in ft = %g ft",ft);
    return 0;
}
