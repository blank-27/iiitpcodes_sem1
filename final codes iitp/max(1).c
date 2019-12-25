#include<stdio.h>
int main()
{    int n;
    float x ,b;
    printf("enter the total number n:");
    scanf("%d",&n);
    printf("Enter values:");
    scanf("%f", &x);
    b=x;
    for(int i=0;i<n-1;i++)
    {
        scanf("%f",&x);
     if(b<x)
         b=x;
        
    }
    printf("The maximum number is %.2f",b);
    return 0;
}