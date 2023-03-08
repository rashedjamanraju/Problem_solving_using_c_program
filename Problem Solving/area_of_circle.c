#include<stdio.h>
int main(){
    float pi,r,area;
    pi=3.1416;
    printf("Enter the value of radius of the circle:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("The area of the circle is: %.2f",area);
    return 0;
}