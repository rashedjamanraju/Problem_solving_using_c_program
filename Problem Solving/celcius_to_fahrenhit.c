#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the value of celcius:");
    scanf("%g",&c);
    f=(c*1.8)+32;
    printf("The value of %gC in Fahrenheit is =%gF",c,f);
    return 0;
}
