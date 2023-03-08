#include<stdio.h>
int main(){
    float a,b,h,area;
    printf("Enter the value of 1st base:");
    scanf("%f",&a);
    printf("Enter the value of 2nd base:");
    scanf("%f",&b);
    printf("Enter the value of height(length between 2 base):");
    scanf("%f",&h);
    area=0.5*(a+b)*h;
    printf("The area of the trapezium is:%.2f",area);
    return 0;
}
