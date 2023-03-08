#include<stdio.h>
int main(){
    float l,area;
    printf("Enter the length of each side of square:");
    scanf("%f",&l);
    area=l*l;
    printf("Area of square:%.2f",area);
    return 0;
}