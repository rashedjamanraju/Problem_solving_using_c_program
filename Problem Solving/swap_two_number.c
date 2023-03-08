#include<stdio.h>
int main(){
    float a,b,temp;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    temp=a;
    printf("Before swaping the value of a=%g, b=%g\n",a,b);
    a=b;
    b=temp;
    printf("After swaping the value of a=%g, b=%g",a,b);
    return 0;
}