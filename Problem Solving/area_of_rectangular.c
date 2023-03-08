#include<stdio.h>
int main(){
    float l,w,area;
    printf("Enter the length of the rectangle:");
    scanf("%f",&l);
    printf("Enter the width of the rectangle:");
    scanf("%f",&w);
    area=l*w;
    printf("Area of rectangle:%.2f",area);
    return 0;

}