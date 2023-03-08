#include<stdio.h>
int main(){
    float r,h,pi,v;
    pi=3.1416;
    printf("Enter the value of radius:");
    scanf("%f",&r);
    printf("Enter the value of height:");
    scanf("%f",&h);
    v=0.33*pi*r*r*h;
    printf("The volume of cone is:%.2f",v);
    return 0;
}