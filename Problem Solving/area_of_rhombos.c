#include<stdio.h>
int main(){
    float a,b,area;
    printf("Enter the value of diagonal1 of the rhombos:");
    scanf("%f",&a);
    printf("Enter the value of diagonal2 of the rhombos:");
    scanf("%f",&b);
    area=a*b*0.5;
    printf("The area of the rhombos is:%.2f",area);
    return 0;    
}
