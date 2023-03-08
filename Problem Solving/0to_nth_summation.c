#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    sum=n*(n+1)*0.5;
    printf("Summation of 1 to %d is:%d",n,sum);
    return 0;
}
