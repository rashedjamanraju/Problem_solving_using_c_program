#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the value in fahrenhit unit:");
    scanf("%g",&f);
    c=(f-32)*0.5556;
    printf("The value is in celcius = %g",c);
    return 0;
}